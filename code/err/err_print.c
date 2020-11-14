#include <stdio.h>
#include <errno.h>
#include <string.h>

//extern int errno;

int main(void)
{
	FILE *fp;
	//char *msg = "hello, world";
	//int errcode = errno;

	fp = fopen("/home/hds/github/c-code/code/err/exist.txt", "r");
	//fprintf(fp, "Input message:%s\n", msg);
	if (!fp) {
		//fprintf(stderr, "Error Code:%d\n", errno);/* print error code */
		perror("Error");
		printf("Error message:%s\n", strerror(errno));
		fprintf(stderr, "Error info:%s\n", strerror(errno));

		return 1;
	}

	fclose(fp);

	return 0;
}



