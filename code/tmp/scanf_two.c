#include <stdio.h>

int main()
{
	int a, b;
	char c;

	puts("input int value:");
	scanf("%d%d", &a, &b);

	puts("input char again:");
	getchar();
	scanf("%c", &c);

	printf("%d %d %c\n", a, b, c);
	
	return 0;
}

