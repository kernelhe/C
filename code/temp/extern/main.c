#include <stdio.h>

int x = 1;
int y = 2;
int addtwonum(void);//声明该函数在本文件其他地方定义或者在其他源文件中定义

int main(void)
{
	int result;
	result = addtwonum();
	printf("result=%d\n", result);

	return 0;
}

//编译：gcc addtwonum.c main.c -o main

