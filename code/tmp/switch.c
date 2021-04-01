#include <stdio.h>

int main(void)
{
	char grade = 'B';

	switch (grade) {/*case后的值类型必须与switch中的变量具有相同的数据类型，且必须是一个常量或字面量*/
	case 'A':
		printf("优秀\n");
		break;/* 去掉所有的break后，会从命中的case开始往下，执行后面所有的case */
	case 'B':
		printf("及格\n");
		break;
	case 'C':
		printf("良好\n");
		break;
	default:
		printf("good luck!\n");
	}

	return 0;
}

