#include <stdio.h>

int main(void)
{
	int arr[5] = {1,2,3,4,5};
	int *ptr, i;
	size_t cnt;

	cnt = sizeof(int);
	printf("cnt = %lu\n", cnt);
	
	for (i = 4; i >= 0; i--) {
		printf("by数组下标：arr[%d] = %d\n", i, arr[i]);
		printf("by指针偏移：arr[%d] = %d\n", i, *ptr);
		
		ptr--;/* 每次减sizeof(int)个字节 */
	}
	return 0;
}

