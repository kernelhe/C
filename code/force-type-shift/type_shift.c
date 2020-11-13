/*
 * 强制类型转换的作用：
 * 	如果一个运算符两边 
 */

#include <stdio.h>

int main(void)
{
	int value = 100;
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

