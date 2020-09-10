#include <stdio.h>

int main(void)
{
	int arr[] = {1,2,3,4};
	int *ptr, i;

	ptr = arr;

	for (i = 0; i < 4; i++ ) {
		printf("by数组下标：arr[%d] = %d\n", i, arr[i]);
		printf("by指针偏移：arr[%d] = %d\n", i, *ptr);

		ptr++;
	}

	return 0;
}

