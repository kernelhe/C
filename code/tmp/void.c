#include <stdio.h>

int a(void)
{
	printf("hello world\n");
}

int main()
{
	int ret = a();
	printf("ret value:%d\n", ret);

	return 0;
}

