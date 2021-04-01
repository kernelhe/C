#include <stdio.h>

int b;

int main()
{
	static int a = 6;

	printf("address of a:%p\n", &a);
	printf("address of b:%p\n", &b);
	printf("value of a:%d\n", (int *)(0x558a6c4c7010));
	
	return 0;
}

