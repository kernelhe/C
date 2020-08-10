#include <stdio.h>

int main(void)
{
	/* a++属于后自增，先进行其他运算，再自增 */
	printf("a++:先赋值后运算\n");
	int b;
	int a = 10;
	b = a++;
	printf("b = %d\n", b);
	printf("a = %d\n", a);

	/* ++a属于前自增，先自增，然后再进行其他运算 */
	printf("++a:先运算后赋值\n");
	a = 10;
	b = ++a;
	printf("b = %d\n", b);
	printf("a = %d\n", a);

	return 0;
}

