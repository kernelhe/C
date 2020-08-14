#include <stdio.h>

int main(void)
{
	int a = 2;
	int b; 
	int c; 

	b = -a++;//-(负号)和++都是单目运算符，单目运算符有相同的优先级，结合性为右结合(左 <-- 右)
	c = -++a;

	printf("a = %d, b = %d, c = %d\n", a, b, c);

	return 0;
}

