#include <stdio.h>

//static int count; 使用static修饰后，其他文件不能再访问count
int count;
extern void write_extern(void);

int main(void)
{
	count = 5;
	write_extern();

	return 0;
}

