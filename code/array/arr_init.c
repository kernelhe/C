#include <stdio.h>

int main(void)
{
	int b[5] = {};
	int c[5];
	int a[5][2] = {/* 初始化一个二维数组 */
		{0, 0},/* 注意这里用逗号分隔 */
		{1, 2},
		{2, 4},
		{3, 6},
		{4, 8}
	};

	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 2; j++)
			printf("a[%d][%d] = %d\n", 
			       i, j, a[i][j]);
	}

	for (int k = 0; k <5; k++)
		printf("b[%d] = %d\n", k, b[k]);
	for (int k = 0; k <5; k++)
		printf("c[%d] = %d\n", k, c[k]);

	return 0;
}

