/* 练习包含共用体的结构体 */
#include <stdio.h>
#include <stdlib.h>

#define TOTAL 4 //人员总数

struct {
	char name[20];
	int num;
	char sex;
	char profession;
	union {
		float score;
		char course[20];
	} sc;
} bodys[TOTAL];

int main(void)
{
	for (int i = 0; i < TOTAL; i++) {
		printf("Input info:\n");
		scanf("%s %d %c %c", 
		      &bodys[i].name, 
		      &bodys[i].num, 
		      &bodys[i].sex, 
		      &bodys[i].profession);/* s表示学生，t表示老师 */
		if (bodys[i].profession == 's') 
			scanf("%f", &bodys[i].sc.score);
		else 
			scanf("%s", &bodys[i].sc.course);
	}

	for (int i = 0; i < TOTAL; i++) {
		printf("%s %d %c %c\n", 
		       bodys[i].name, 
		       bodys[i].num, 
		       bodys[i].sex, 
		       bodys[i].profession);
		
		if (bodys[i].profession == 's')
			printf("%f", bodys[i].sc.score);
		else 
			printf("%s\n", bodys[i].sc.course);
	}

	return 0;
}

