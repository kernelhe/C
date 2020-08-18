#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int *get_random(void)
{
	/* 
	 * C语言不允许返回一个完整的数组作为函数参数
	 * 但是，可以通过指定不带索引的数组名来返回一个指向数组的指针
	 */
	static int r[10];//另外，C不支持在函数外返回局部变量的地址，除非定义局部变量为static
	int i;

	/* 
	 * srand((unsigned)time(NULL))是初始化随机函数种子 
	 * 是拿当前系统时间作为种子，由于时间是变化的，种子变化，可以产生不相同的随机数。
	 * 计算机中的随机数实际上都不是真正的随机数，如果两次给的种子一样，是会生成同样的随机序列的。 
	 * 所以，一般都会以当前的时间作为种子来生成随机数，这样更加的随机。
	 *
	 * 使用时，参数可以是unsigned型的任意数据，比如srand(10)
	 *
	 * 如果不使用srand，用rand（）产生的随机数，在多次运行，结果是一样的。
	 */
	srand((unsigned)time(NULL));//初始化随机函数种子

	for (i = 0; i < 10; i++) {
		r[i] = rand();
		printf("r[%d] = %d\n", i, r[i]);
	}

	return r;
}

int main(void)
{
	int *p;
	int i;

	p = get_random();//C允许从函数返回数组。C不支持在函数外返回局部变量的地址。
	/* get_random()要返回该函数中定义的局部变量r，必须加static修饰才能返回 */

	for (i = 0; i < 10; i++) {
		printf("*(p + %d) = %d\n", i, *(p + i));/* *号是取值运算符 */
	}

	return 0;
}

