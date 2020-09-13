#include <stdio.h>

#define MAX 7

int main(void)
{
	int arry[MAX] = {1,2,3,4,5,6,7};
	int *ptr, *p_end;
	static int i = MAX - 1;

	p_end = &arry[MAX - 1];

	for (ptr = p_end; ptr >= arry; ptr--) {
		printf("value of arry[%d]:%d\n", i--, *ptr);
	}

	return 0;
}

