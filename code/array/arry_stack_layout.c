#include <stdio.h>

int main(void)
{
	char a[] = {1,2,3,4,5};
	//char a[5] = {a,b,c,d,e};
	char b[] = "abcde";
	
	/*
	 * 	数组在栈上的布局：
	 *
	 *	|     Stack	|
	 *	|		|
	 *	|      a[5]	|
	 *	|      a[4]	|
	 *	|      a[3]	|
	 *	|      a[2]	|
	 *	|      a[1]	|
	 *	|      a[0]	|
	 *	|		|
	 *	|		|
	 */
	
	for (int i = 0; i < 5; i++) {
		printf("address a[%d] = %p\n", i, &a[i]);
	}

	for (int i = 0; i< 60; i++) {
		printf("-");
		
		if (i == 59) {
			printf("\n");
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("address b[%d] = %p\n", i, &b[i]);
	}
	
	return 0;
}

