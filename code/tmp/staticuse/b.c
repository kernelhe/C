#include <stdio.h>

extern int count;

//static void write_extern(void) 
//static修饰的函数只能在本文件中调用，不能被其他文件引用
//即使extern也不行
void write_extern(void)
{
	printf("count is %d\n", count);
}
