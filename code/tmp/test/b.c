#include <stdio.h>

extern char p[];

int main(void)
{
	for (int i = 0; i < 6; i++)
		printf("%x\n", p[i]);

	printf("%p\n", p);

	return 0;
}
