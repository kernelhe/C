#include <stdio.h>

int main(void)
{
	int a = 10;

LOOP:do {
	     if (a == 15) {
		     a++;
		     goto LOOP;
	     }

	     printf("current value is %d\n", a);
	     a++;
     } while (a < 20);

	return 0;
}

