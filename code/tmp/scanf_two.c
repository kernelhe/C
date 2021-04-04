#include <stdio.h>

int main()
{
	int a;
	char c;
	char d;

	puts("Please input value:");
	scanf("%d", &a);
	scanf("%c ", &c);
	d = getchar();

	/*
	puts("input char again:");
	getchar();
	scanf("%c", &c);
	*/

	printf("%d %c %c\n", a, c, d);

	return 0;
}

