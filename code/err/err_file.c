#include <stdio.h> /*声明perror()*/
#include <errno.h> /*定义错误代码errno*/
#include <string.h> /*声明strerror()*/

extern int errno;

int main(void)
{
	FILE *fp;
	int errnum;

	fp = fopen("a.txt", "rb");
	if (!fp) {
		errnum = errno;
		fprintf(stderr, "错误代码：%d\n", errno);
		perror("Print the error case");
		fprintf(stderr, "错误原因：%s\n", strerror(errnum));
		printf("错误原因：%s\n", strerror(errno));
	} else {
		fclose(fp);
	}

	return 0;
}

