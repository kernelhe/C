#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;

	fp = fopen("/home/hds/github/c-code/code/file/test.txt", "a+");/* append write */
	//fprintf(fp, "\nhello, this is new word...\n");

	char c;
	while ((c = fgetc(fp)) != EOF)
		printf("%c", c);

	char buf[200];
	//fscanf(fp, "%c", buf);
	//printf("%s\n", buf);
	fgets(buf, sizeof(buf), fp);

	fclose(fp);

	return 0;
}

