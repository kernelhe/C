#include <stdio.h>
#include <string.h>

#define STRING "hds kcm"

int main(void)
{
	char name[20] = {'h', 'd', 's','\0', 'k'};
	char *str = "hds kcm";

	printf("%ld\n", strlen(name));
	printf("%ld\n", strlen(STRING));
	printf("%ld %ld\n", strlen(str), sizeof(*str));
	
	return 0;
}

