#include <stdio.h>

int main(void)
{
	//char c;
	//int i;
	unsigned i;
	//char mesg[200];

	printf("Please enter:\n");

	i = getchar();

	//printf("\nyou entered value...:%u\n");
	putchar(i);
	printf("\n");

	//printf("Please enter the string...\n");
	//fgets(mesg, sizeof(mesg), stdin);

	//printf("You enterd:");
	//fputs(mesg, stdout);/* 末尾自动添加换行符 */
	
	return 0;
}

