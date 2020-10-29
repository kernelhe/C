#include <stdio.h>
#include <stdlib.h>

int get_next_value(void)
{
	return rand();
}

void populate_arry(int *arry, size_t size, 	\
		   int (*get_next_value)(void))/* get_next_value是回调函数 */
{
	for (size_t i = 0; i < size; i++) {/* Please use 'size_t' instead of 'int' represent array index */
		arry[i] = get_next_value();
	}
}


int main(void)
{
	int arry[10];
	/* get_next_value不能带()，带上括号代表的是函数的返回值，即int，而不是函数指针 */
	populate_arry(arry, 10, get_next_value);/* a是数组首元素的地址，&a是数组的首地址 */

	for (int i = 0; i < 10; i++) {
		printf("arry[%d]:%d\n", i, arry[i]);
	}

	return 0;
}

