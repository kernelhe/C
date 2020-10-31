#include <stdio.h>

int main(void)
{
	char *ptr = "hello, linux\n";
	char string[] = "hello, linux\n";

	printf(ptr);/* 直接输出 */
	printf("%s\n", ptr);/* 格式化输出 */
	printf(string);
	printf("%s\n", string);

	return 0;
}

