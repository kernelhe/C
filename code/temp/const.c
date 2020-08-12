#include <stdio.h>

int main(void)
{
	const int LENGTH = 10;
	const int WIDTH = 5;
	const char NEWLINE = '\n';
	int area;
	const int num[10] = {};

	area = LENGTH * WIDTH;
	printf("value of area:%d", area);
	printf("%c", NEWLINE);
	printf("%d", num[0]);

	return 0;
}

