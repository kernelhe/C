/*
 * 用指针数组保存字符串列表
 */
#include <stdio.h>

int main(void)
{
	const char *names[] = {
		"kangchunmei",
		"hedongsheng",
		"XUPT",
		"XISU",
	};

	for (int i = 0; i < 4; i++) {
		printf("%s\n", names[i]);/* 通过指向字符串的地址来访问，格式为%s */
	}

	return 0;
}

