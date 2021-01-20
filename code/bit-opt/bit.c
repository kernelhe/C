/*
 * 位运算符分析：
 * 	左移和右移注意点
 * 	1. 左操作数必须为整数类型
 * 		char和short被隐式转换为int类型后进行位移操作
 * 	2. 右操作数的范围必须为:[0,31]
 * 	3. 左移运算符<<将运算数的二进制位左移
 * 		规则：高位丢弃，低位补0
 * 	4. 右移运算符>>将运算数的二进制位右移
 * 		规则：高位补符号位，低位丢弃
 */
#include <stdio.h>

#define SWAP(a, b)	\
{			\
	a = a ^ b;	\
	b = a ^ b;	\
	a = b ^ a;	\
}

int main(void)
{
	int a = 1;
	int b = 2;

	printf("%d\n", a);
	printf("%d\n", b);
	
	SWAP(a, b);

	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}

