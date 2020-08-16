#include <stdio.h>

int main(void)
{
	int a = 10;

	do {
		if (a == 15) {
			a++;
			continue;
		}

		printf("current value is %d\n", a);
		a++;
	} while (a < 20);

	return 0;
}

