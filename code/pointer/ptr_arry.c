#include <stdio.h>

int main(void)
{
	const int arr[] = {1, 2, 3, 4, 5};/* 数组名是一个指针常量 */
	
	printf("arr value:%p\n", arr);

	return 0;
}

