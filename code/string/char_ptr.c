#include <stdio.h>
#include <string.h>

int main(void)
{
	char *ptr = "hello, linux\n";
	char string[] = "hello, linux\n";

	printf(ptr);/* 直接输出 */
	printf("%s\n", ptr);/* 格式化输出 */
	printf(string);
	printf("%s\n", string);

	/*
	 * 在使用指针定义字符串时，要注意，一定要初始化，否则指针是一个野指针
	 * 原因：因为字符串字面量在存储时是作为常量存储在静态存储区，字符指针变量指向该内存区的首地址
	 * 	 如果仅仅定义了字符指针，而没有初始化，这个指针就是一个野指针
	 */
	char *str;/* Error:字符指针没有初始化，是一个野指针 */
	
	/* strcpy()的参数是两个地址 */
	strcpy(str, string);/* char *strcpy(char * s1, const char * s2) */
	strcpy(ptr, string);

	printf("Get str...:%s\n", str);
	printf("Get ptr...:%s\n", ptr);

	return 0;
}

