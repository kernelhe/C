#include <stdio.h>

int factorial(int n)
{
	if (n == 1) /* if (n & 1)就只返回1：这里不能用位运算&来判断n是否为1，因为n如果最低位为1，条件就会为真，如3:11 & 1 = 1 */
		return 1;
	return n * factorial(--n); /* return n * factorial(--n)提示--n中的n未定义 */
}

int main(void)
{
	int num = 3;
	int value = factorial(num);
	
	printf("valule:%d\n", value);

	return 0;
}

