#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#define NUM 3

					 
/* 存放函数指针的数组 */
unsigned long *s[NUM] = {NULL};
void *thread_0()
{
	printf("I am thread 1\n");
}
void *thread_1()
{
	printf("I am thread 2\n");
}

void *thread_2()
{
	printf("I am thread 3\n");
}

unsigned long * find_addr(int i) 
{
	unsigned long *ptr;
	
	switch (i) {
	case 0:
		ptr = thread_0;
		break;
	case 1:
		ptr = thread_1;
		break;
	case 2:
		ptr = thread_2;
		break;
	}

	return ptr;
}

int main(void)
{
	unsigned long *s_addr;
	s_addr = s[0];
	pthread_t tid[NUM];
	//enum thread_addr{thread_1,thread_2,thread_3};
	/* 初始化函数指针数组 */
	//thread_addr = thread_1;
	//thread_addr = 0;
	int i;
	for ( i = 0; i < NUM; i++) {
		s[i] = find_addr(i);
	}
	/* 创建不同功能线程 */
	for ( i =0; i < NUM; i++) {
	
		pthread_create(&tid[i],NULL,(void *)s[i],NULL);
		pthread_join(tid[i],NULL);
	
	}
	
	return 0;
}


