#include <stdio.h>
//#include <conio.h>

int main(void)
{
	//register int i = 1;
	//static register int i = 1;	//一个变量只能声明为一种存储类型：auto自动类型变量、static静态变量、register寄存器变量
	int i = 1;
	double sign = 1.0, res = 0, ad = 1.0;

	for (i = 1; i <= 1000000000; i++) {
	//for (i = 1; i <= 100; i++) {//如果声明的寄存器变量数目超过了CPU的寄存器数目，某些寄存器变量可能不会被分配寄存器，而在栈上存储。
		res += ad;
		sign = -sign;
		ad = sign/(2*i + 1);
	}

	res *= 4;

	printf("pi is %lf\n", res);

	//int *p = &i;	//寄存器变量不能取地址
	
	return 0;
}

