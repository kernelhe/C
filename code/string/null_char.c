#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[] = "hello";/* 字符串(字符数组)的长度是5，字符数组的大小是6。虽然空字符不计入字符串长度，但是空字符占一个字节 */
	char message[] = {'h', 'e', 'l', 'l', 'o', '\0'};/* 字符串的本质就是字符数组 */
	char data[] = {'k', 'e', 'r', '\0', 'n', 'e', 'l'};/* 字符串的结束标志为空字符'\0'，空字符以后的字符不在计入字符串长度 */
	char information[] = "chi\0na";/* 这个字符串只会打印前三个字符：'chi' */

	printf("Get information...:%s\n", information);
	printf("Length of string...:%ld\n", strlen(string));
	printf("Length of message...:%ld\n", strlen(message));
	printf("Length of information...:%ld\n", strlen(data));

	/* 计算字符数组的大小 */
	printf("Size of string...:%ld\n",sizeof(string));

	/* 打印字符数组的每个元素，包括结尾标志空字符'\0' */
	for (int i = 0; i < 6; i++) {
		printf("value of string[%d]...:%c\n", i, string[i]);
	}

	/* 空字符'\0'对字符数组的影响 */
	//char greeting[5] = {'h', 'e', 'l', 'l', 'o'};
	char greeting[6] = {'h', 'e', 'l', 'l', 'o', '\0'};/* 如果想通过字符数组的形式正确输出字符串，必须要在字符数组的末尾添加空字符 */
	
	printf("Get greeting...:%s\n", greeting);
	
	for (int i = 0; i < 5; i++) {
		printf("value of greeting[%d]...:%c\n", i, greeting[i]);
	}
	
	return 0;
}

