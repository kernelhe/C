#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
char *function1(char *a, int i)
{
	a += (i + 2);
	return a;
}
*/

int main(void)
{
	pid_t pid = getpid();
	printf("%u\n", pid);
	
	char *p = (char *)malloc(sizeof(char) * 135170);
	char *p2 = p;
	//char a1[4] = {'a', 'b', 'c', 'd'};
	//char a2[] = {'e', 'f', 'g', 'h'};
	int num = 97;
	for (int i = 0; i < 4; i++) {
		*p = num;
		num++;
		p++;
	}
	
	printf("%c\n", *(p2 + 135));

	pause();

	return 0;
}

