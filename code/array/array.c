#include <stdio.h>

int main(void)
{
	int arr[10];
	int i, j;

	for (i = 0; i < 10; i++) {
		arr[i] = i;
	}

	for (j = 0; j < 10; j++)
		printf("arr[%d] = %d\n", j, arr[j]);

	return 0;
}

