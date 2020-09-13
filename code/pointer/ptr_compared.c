#include <stdio.h>

#define MAX 7

int main(void)
{
	int arry[MAX] = {1,2,3,4,5,6,7};
	/* int *ptr, *p_end; */
	int *p_end;/* 将for循化改为while循环可以减少一个指针的使用 */
	static int i = MAX - 1;

	p_end = &arry[MAX - 1];

	/* while is better
	for (ptr = p_end; ptr >= arry; ptr--) {
		printf("value of arry[%d]:%d\n", i--, *ptr);
	}
	*/
	while (p_end >= arry) {
		printf("value of arry[%d]:%d\n", i--, *p_end--);/* *(取值运算符)与--(自减)都是单目运算符，所有单目都是右结合性 */
		/* 左结合性：先以位置上处于左面的运算符构造运算，就是左结合 */
		/* 右结合性：先以位置上处于右面的运算符构造运算，就是右结合 */
	}

	return 0;
}

