#include <stdio.h>

/* 函数声明 */
void func(void);
static int count = 10;

int main(void)
{
	while(count--) {
		func();
	}

	return 0;
}

/* 函数定义 */
void func(void)
{
	/* x是func()的静态局部变量，只初始化一次
	 * 每次调用func()，x的值不会被重置
	 */
	static int x = 5;
	x++;

	printf("x为%d, count为%d\n", x, count);
}

