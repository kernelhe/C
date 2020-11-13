/*
 * 强制类型转换的作用：
 * 	如果一个运算符两边的运算类型不同，先要将其转换为相同的类型
 * 	即较低类型转换为较高类型，然后参加运算，转换规则如下：
 *    long double	高
 * 	  ^
 * 	  |
 * 	double		
 * 	  ^
 * 	  |
 * 	float
 * 	  ^
 * 	  |
 * unsigned long long
 * 	  ^
 * 	  |
 * 	long long
 * 	  ^
 * 	  |
 *    unsigned long
 * 	  ^
 * 	  |
 * 	long
 * 	  ^
 * 	  |
 *    unsigned int
 * 	  ^
 * 	  |
 * 	 int	<-----	char ,short  低
 */

#include <stdio.h>

int main(void)
{
	int value = 1
	int data = 55;

	double result;

	result = (double)(value / data);
	//result = (double)value / (double)data;/* 与下面的语句效果相同 */
	//result = (double)value / data;

	printf("Get value...:%lf\n", result);

	int temp = 17;
	char chr = 'c';
	int sum;

	sum = temp + (int)chr;

	printf("Get sum...:%d\n", sum);

	return 0;
}

