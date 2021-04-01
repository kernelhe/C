#include <stdio.h>

//#define NUM NULL
#define NUM 1000U

/* 条件表达式 ? : */
/* condition ? true : false*/
int main(void)
{
	const int a = 10;
	const int b = 5;
	int ret_val = NUM ? (a + b) : (a - b);

	printf("valude is %d\n", ret_val);

	return 0;
}

