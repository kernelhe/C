#include <stdio.h>

int main(void)
{
	char *str = "hello world!";

	printf("%s\n", str);
	printf("%p\n", &str);

	return 0;
}

