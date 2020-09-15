#include <stdio.h>

#define MAX 7

int main(void)
{
	/*
	 * int *p的含义：
	 * int *是数据类型，即模子，表示一个指针类型，p是指针变量。
	 * *号前面的Int表示指针变量所指向的内存里存储的是一个int类型的值。
	 */
	int *p1;/* p1是指针变量，存放一个地址。p1的类型为int *，是一个指针类型。 */
	char *p2;
	float *p3;
	double *p4;
	unsigned long *p5;
	int *p6 = NULL;
	static int *pp6 = NULL;
	int arry[MAX] = {1,2,3,4,5,6,7};

	printf("p1:%lu\n",sizeof(p1));
	printf("int *:%lu\n", sizeof(int *));
	printf("address of p1:%p\n", &p1);
	printf("address of p6:%p\n", p6);
	printf("address of p6:%#x\n", p6);
	printf("address of p6:%#x\n", pp6);
	printf("p2:%lu\n",sizeof(p2));
	printf("p3:%lu\n",sizeof(p3));
	printf("p4:%lu\n",sizeof(p4));
	printf("p5:%lu\n",sizeof(p5));
	printf("size of void *:%lu\n", sizeof(void *));
	
	return 0;
}
