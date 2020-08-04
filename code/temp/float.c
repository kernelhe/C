/*
 *一.指数形式是浮点数的一种表示方法。
 *C语言中，浮点数包括float和double类型，有两种表示方法
 *	实数形式，即1.23这样整数部分加小数部分的表示方式；
 *	指数形式，即科学计数法，其形式为：
 *		  aEb
 *		  代表a乘10的b次幂。E也可以小写，b必须为整数
 *
 *二.指数形式只是浮点数的一种表示方法，任何一个浮点数，都有实数形式和指数形式
 * 如：12345.6和1.23456E4，是完全相同的。
 * 
 *三.指数形式输出 
 *在输出的时候可以指定浮点数输出为指数形式，格式为%e或%E
 *如：printf("%e", 100000.0);
 *会输出1.000000e+05
 */

#include <stdio.h>
#include <float.h>

int main(void)
{
	printf("float存储的最大字节数:%lu\n", sizeof(float));//因为关键字sizeof返回一个size_t的类型，所以要用%lu格式打印
	printf("float最小值：%e\n", FLT_MIN);
	printf("float最小值：%.50f\n", FLT_MIN);
	printf("float最大值：%e\n", FLT_MAX);
	printf("float最大值：%f\n", FLT_MAX);
	printf("精度值：%d\n", FLT_DIG);


	return 0;
}

