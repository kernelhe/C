#include <stdio.h>

int main(void)
{
	char array[] = {'a', 'b', 'c', 'd'};/* C语言的字符串是以null字符'\0'终止的一维数组 */
	char string[] = "hello";/* 定义一个字符串 */

	printf("value of array:%s\n", array);
	printf("Get message...:%s\n", string);

	return 0;
}

