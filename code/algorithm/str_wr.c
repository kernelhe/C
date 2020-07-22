/*将字符串写入文件并读取文件*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*写入*/
	{
		char sentence[1000];
		FILE *fptr;
		
		fptr = fopen("lucky.txt", "w");
		if (fptr == NULL) {
			printf("Error!\n");
			exit(1);
		}
		
		printf("输入字符串：\n");
		fgets(sentence, (sizeof sentence / sizeof sentence[0]), \
		      stdin);
		
		fprintf(fptr, "%s", sentence);
		fclose(fptr);
	}
	
	/*读取*/
	{
		char c[1000];
		FILE *fptr;
		
		if ((fptr = fopen("lucky.txt", "r")) == NULL) {
			printf("Error! opening file");
			exit(1);
		}
		
		fscanf(fptr, "%[^\n]", c);
		
		printf("读取内容：\n%s", c);
		fclose(fptr);
		
		return 0;
	}
	
	return 0;
}
