#include <stdio.h>

int main(void)
{
	int i = 1;
	int sum = 0;

	while (i <= 10) {/* 计算1到10的和 */
		sum += i++;
	}

	printf("sum is %d\n", sum);

	return 0;
}

