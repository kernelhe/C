#include <stdio.h>

int main(void)
{
	//int i = 0x100UL;
	//int *p;
	
	//*(int *)&i = 0x100UL;
	*(int *)0x7fffffffde15 = 0x100UL;

	//printf("value of i:%#x\n", i);
	//printf("address of i:%p\n", &i);
	printf("value of i:%#x\n", *(int *)0x7fffffffde1c);

	return 0;
}

