#include <stdio.h>

//#define CONFIG_OPERATE_ADD

#ifdef CONFIG_OPERATE_ADD
int operate(int a, int b)
{
	return a + b;
}
#else
int operate(int a, int b)
{
	return a - b;
}
#endif

int main()
{
	int a = 9;
	int b = 6;

	int ret = operate(a, b);
	printf("value of ret:%d\n", ret);
	
	return 0;
}

