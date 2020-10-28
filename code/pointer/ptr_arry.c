#include <stdio.h>

#define MAX 5

int main(void)
{
	//int *ptr[MAX] = {10, 20, 30, 40, 50};/* 指针数组里数据类型必须为指针 */
	int arry[] = {10, 20, 30, 40, 50};
	int *ptr[MAX];

	for (int i = 0; i < MAX; i++) {
		ptr[i] = &arry[i];/* 这里的i指的是索引，不是字节 */
	}

	for (int i = 0; i< MAX; i++) {
		/* *原理：先读取指针变量里的内容，找到地址空间的首地址，然后连续读取指针类型大小个字节 */
		printf("value of arry[%d]:%d\n", i, *ptr[i]);
	}

	return 0;
}

