/* 多生产者与多消费者 */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <semaphore.h>          /* POSIX信号量库，定义了信号量函数，如sem_wait() */
#include <pthread.h>            /* POSIX线程库,定义了线程函数，如pthread_creat() */
#include <unistd.h>

#define BUFFER_SIZE  5          /* 缓冲区大小 */
#define PRODUCER_NUM 2          /* 2个生产者 */
#define CONSUMER_NUM 2          /* 2个消费者 */

pthread_mutex_t mutex;          // 互斥信号量

sem_t full_count;                       /* 用于记录缓冲区中有多少数据项,也就是产品的个数 */
sem_t empty_count;                      /* 用于记录缓冲区中空闲空间数 */

int buf[BUFFER_SIZE];

static int in;                          // 放入产品的指针（生产到哪个缓冲区）
static int out;                         // 取出产品的指针（在哪个缓冲区消费的）

static int produce_id;          // 生产的第几个产品
static int consume_id;          // 消耗的第几个产品

void *producer(void *arg)
{
        unsigned long long num = (unsigned long long) arg;      // 生产者编号

        for (;;) {
                sem_wait(&empty_count); // P操作，信号量减1
                pthread_mutex_lock(&mutex);

                /* 遍历缓冲区，看有哪些缓冲区是可以生产产品的 */
                for (int i = 0; i < BUFFER_SIZE; i++) {
                        if (buf[i] == -1)
                                printf("NULL");
                        else
                                printf("%d", buf[i]);

                        if (i == in)
                                printf("\t<---produce");

                        printf("\n");
                }
                /* produce()操作(生产一个产品) */
                printf("producer %llu begin produce product %d\n", num,
                       produce_id);
                buf[in] = produce_id;

                /* 将放入产品的指针偏移1（指向下个生产的位置） */
                in = (in + 1) % BUFFER_SIZE;
                printf("producer %llu ends  produce product %d\n", num,
                       produce_id++);
                printf
                    ("-----------------------------------------------------------------------------\n");

                sleep(5);

                pthread_mutex_unlock(&mutex);
                sem_post(&full_count);  // V操作，信号量加1
        }

        return NULL;
}

void *consumer(void *arg)
{
        unsigned long long num = (unsigned long long) arg;
        for (;;) {
                sem_wait(&full_count);
                pthread_mutex_lock(&mutex);

                /* 遍历缓冲区，看哪个缓冲区有产品可以消耗 */
                for (int i = 0; i < BUFFER_SIZE; i++) {
                        if (buf[i] == -1)
                                printf("NULL");
                        else
                                printf("%d", buf[i]);

                        if (i == out)
                                printf("\t<---consume");

                        printf("\n");
                }
                /* consume()操作，消耗一个产品 */
                printf("consumer %llu begin consume product %d\n", num,
                       consume_id);
                consume_id = buf[out];
                buf[out] = -1;

                /* 将取出产品的指针偏移1（指向下个生产的位置） */
                out = (out + 1) % BUFFER_SIZE;
                printf("consumer %llu ends  consume product %d\n", num,
                       consume_id++);
                printf
                    ("-----------------------------------------------------------------------------\n");

                sleep(5);

                pthread_mutex_unlock(&mutex);
                sem_post(&empty_count);
        }

        return NULL;
}

int main(void)
{
        pthread_t thread[PRODUCER_NUM + CONSUMER_NUM];
        int ret;
        void *retval[PRODUCER_NUM + CONSUMER_NUM];

        for (int i = 0; i < BUFFER_SIZE; i++)
                buf[i] = -1;

        /* 初始化互斥信号量 */
        if (pthread_mutex_init(&mutex, NULL) != 0) {
                printf("mutex init has failed\n");
                return 1;
        }

        /* 初始化同步信号量 */
        sem_init(&full_count, 0, 0);    // 刚开始产品个数为0
        sem_init(&empty_count, 0, BUFFER_SIZE); // 可用的空间为整个缓冲区

        sleep(3);

        /* 创建生产者线程 */
        for (unsigned long long i = 0; i < PRODUCER_NUM; i++) {
                ret = pthread_create(&thread[i],
                                     NULL, producer, (void *) i);
                if (ret != 0)
                        printf("creat producer[%llu] failed.\n", i + 1);
                sleep(6);
        }

        /* 创建消费者线程 */
        for (unsigned long long i = 0; i < CONSUMER_NUM; i++) {
                ret = pthread_create(&thread[PRODUCER_NUM + i],
                                     NULL, consumer, (void *) i);
                if (ret != 0)
                        printf("creat consumer[%llu] failed.\n", i + 1);
                sleep(5);
        }

        for (int i = 0; i < PRODUCER_NUM + CONSUMER_NUM; i++) {
                pthread_join(thread[i], &retval[i]);
        }

        sem_destroy(&full_count);
        sem_destroy(&empty_count);
        pthread_mutex_destroy(&mutex);

        return 0;
}
