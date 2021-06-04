#include <stdio.h>

int main(void)
{
	
	int tmp = 99;
	int value;
	
	struct student {
		int number;
		float score;
		char *name;
	};
	
	struct student stu;
	stu.number = 88;

	//printf("%lu\n", sizeof(float));
	
	return 0;
}

