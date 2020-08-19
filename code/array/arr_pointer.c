#include <stdio.h>

int main(void)
{
	double balance[5] = {1, 2, 3, 4, 5};
	double *ptr;
	int i;

	ptr = balance;

	printf("使用指针的数组值\n");
	for (i = 0; i < 5; i++) {
		/*
		 * 关于 double 类型与 float 类型：
		 * printf() 只会看到双精度数，printf 的 %f 格式总是得到 double.
		 * 所以在 printf() 中使用 %f 跟 %lf 的输出显示效果是一样的。
		 *
		 * 但是对于变量来说，double 类型比 float 类型的精度要高。
		 * double 精度更高，是指它存储的小数位数更多，但是输出默认都是 6 位小数
		 * 如果你想输出更多小数，可以自己控制，比如 %.10lf 就输出 10 位小数。
		 *
		 * 所以一般情况下 double 类型的占位符可以用 %lf
		 *
		 * 对编程人员来说，double 和 float 的区别是 double 精度高，有效数字 16 位，float 精度 7 位。
		 * 但 double 消耗内存是 float 的两倍，double 的运算速度比 float 慢得多，C 语言中数学函数名
		 * 称 double 和 float 不同，不要写错，能用单精度时不要用双精度（以省内存，加快运算速度）
		 */
		printf("*(ptr + %d) = %lf\n", i, *(ptr + i));
	}

	printf("使用数组名作为地址的数组值\n");
	for (i = 0; i < 5; i++) {
		printf("*(balance + %d) = %lf\n", i, *(balance + i));
	}

	return 0;
}

