#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;

	do {
		sum += i++;
	} while (i < 11);

	printf("sum is %d\n", sum);

	return 0;
}

