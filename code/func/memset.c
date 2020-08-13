#include <stdio.h>
#include <string.h>/* declare memset() */

int main(void)
{
	//int i;
	char arr[10];
	char *p = arr;

	memset(p, 50, sizeof(arr));

	for (int i = 0; i < 10; i++)
		printf("%d\x20", arr[i]);
	// \xhh...表示一个或多个数字的十六进制数
	// \x20表示十六进制数20(0x20),对应的ASCII码表示的字符为Space(空格)
		
	printf("\n");

	return 0;
}

