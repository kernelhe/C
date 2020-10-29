#include <stdio.h>

int max(int x, int y)
{
	return x > y ? x : y;
}

int main(void)
{
	//int (*p)(int x, int y) = &max;
	//int (*p)(int x, int y) = max;
	int (*p)(int x, int y);/* 函数指针 */
	p = max;

	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d\n", p(a, b));

	return 0;
}

