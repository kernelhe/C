/*
 * 判断机器是大端还是小端  
 */

#include <stdio.h>

int main(void)
{
	union data {
		char chr;
		int temp;
	};

	union data data_t;
	data_t.temp = 0x01020304;

	if (data_t.chr == 0x01) {
		printf("大端存储...\n");/* 低字节存在高地址，高字节存在低地址 */
	} else {
		printf("小端存储...\n");/* 低字节存在低地址，高字节存在高地址 */
	}

	return 0;
}

