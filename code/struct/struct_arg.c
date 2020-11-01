#include <stdio.h>

/* 结构体作为函数参数 */
struct student
{
	char 	  *name;
	unsigned  id;
	char 	  *addr;
	int 	  grade;
	unsigned  class;
};

/* 函数声明 */
void get_message(struct student);

int main(void)
{
	struct student stud = {
		.name = "[hds]",
		.id = 1903210069,
		.addr = "xianchina",
		.grade = 2,
		.class = 1903
	};
	/* 下面这种方法是错的
	stud = {
		.name = "hds",
		.id = 1903210069,
		.addr = "xianchina",
		.grade = 2,
		.class = 1903
	};
	*/

	get_message(stud);

	return 0;
}

/* 函数定义 */
void get_message(struct student stu)/* 参数stu也是一个student结构体，stu里面同样有着name,id,addr,grade,class */
{
	printf("Get name...:%s\n", stu.name);
	printf("Get id...:%u\n", stu.id);
	printf("Get addr...:%s\n", stu.addr);
	printf("Get grade...:%d\n", stu.grade);
	printf("Get class...:%u\n", stu.class);
}

