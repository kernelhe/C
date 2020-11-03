#include <stdio.h>

int main(void)
{
	/*
	 * 位域的存储规则：
	 * 	1.当相邻成员的类型相同时，如果它们的位宽之和小于类型的sizeof大小
	 * 	  那么后面的成员紧邻前一个成员存储，知道不能容纳为止；如果它们的
	 * 	  位宽之和大于类型的sizeof大小，那么后面的成员将从新的存储单元开
	 * 	  始，其偏移量为类型大小的整数倍。
	 * 	2.当相邻成员的类型不同时，不同的编译器有不同的方案。GCC会压缩，VC/VS不会
	 * 	3.如果成员之间穿插着非位域成员，那么不会进行压缩。
	 */
	struct bit_struct {
		unsigned a : 1;
		unsigned b : 1;
		unsigned   : 2;/* 无名位域可以没有名称，只给出数据类型和位宽 */
		unsigned c : 4;
	};

	struct bit_field {
		int a : 8;
		int b : 2;
		int c : 6;	
	} data;

	struct bit_struct bit;

	printf("Size of bit_struct...:%ld\n", sizeof(bit));
	printf("Size of bit_field...:%ld\n", sizeof(data));

	return 0;
}

