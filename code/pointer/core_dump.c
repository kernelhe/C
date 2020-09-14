#include <stdio.h>

int main(void)
{
	int *ptr = NULL;

	*ptr = 123;

	printf("value of ptr:%d\n", *ptr);

	return 0;
}

