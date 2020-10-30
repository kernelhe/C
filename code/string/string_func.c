#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[] = "hello";
	char data[] = "china";
	//char information[10];
	char information[] = "kernel";
	char message[] = "linuxkernel";
	//char information[];/* Error:如果字符数组定义时，没有定义长度，并且没有初始化，则编译不通过 */
	/*
	 * char information[size];
	 * char information[] = "initialization";
	 */

	/* strcpy(s1, s2):copy s2 to s1 */
	strcpy(information, string);/* 把字符串string复制到字符串information，复制会覆盖掉之前的值 */
	printf("Copy information...:%s\n", information);

	/* strcat(s1, s2):attach s2 to end of s1 */
	strcat(string, message);
	printf("Attach message...:%s\n", string);

	/* strlen(s1):return the length of s1 */
	//char data[] = "linux";
	printf("Data value...:%s\n", data);
	printf("Length of string...:%ld\n", strlen(data));

	return 0;
}

