#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <errno.h>
#include <unistd.h>

/*开启16个线程*/
#define PTHREAD_NUM 16

        unsigned long sum = 0;
        pthread_mutex_t mymutex=PTHREAD_MUTEX_INITIALIZER;
void *thread(void *arg)
{
        int i;
        for ( i = 0; i < 10000; i++)
                __sync_add_and_fetch(&sum, 1);  //使用原子锁进行保护
}

int main(void)
{
        int i;
        printf("before ...sum = %lu\n", sum);

        pthread_t pthread[PTHREAD_NUM];         //被创建线程的标识
        int ret;                                //接收返回值
        void *retval[PTHREAD_NUM];

        for ( i = 0; i < PTHREAD_NUM; i++) {
                ret = pthread_create(&pthread[i], NULL, thread, NULL);
                if (ret != 0) {
                        perror("cause:");
                        printf("creat pthread %d failed.\n", i + 1);
                }

        }

        for ( i = 0; i < PTHREAD_NUM; i++)
                pthread_join(pthread[i], &retval[i]);
        pthread_mutex_lock(&mymutex);
        printf("after......sum = %lu\n", sum);
        pthread_mutex_unlock(&mymutex);

        return 0;
}


