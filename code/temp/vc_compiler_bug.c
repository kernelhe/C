#include <stdio.h>

int main(void)
{
	//int i = 10;
	int *p = (int *)0x7fffffffdd9c;

	*p = NULL;
	p = NULL;

	return 0;
}

