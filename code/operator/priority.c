#include <stdio.h>

int main(void)
{
	int a = 2;
	int b; 
	int c; 

	b = -a++;
	c = -++a;

	printf("a = %d, b = %d, c = %d\n", a, b, c);

	return 0;
}

