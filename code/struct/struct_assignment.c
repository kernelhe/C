#include <stdio.h>

int main(void)
{	
	struct student 
	{
		char 	 *name;
		unsigned id;
		char 	 *addr;
		unsigned grade;
		unsigned class;
	};

	/* Linux中常用的结构体赋值方法 */
	/* 方法一 */
	struct student stu_h = {
		.name = "hds",
		.addr = "xianchina",
		.id   = 1903210069,
		.grade = 2,
		.class = 1903
	};

	/* 方法二 */
	struct student stu_k = {
		addr : "chinaxian",
		name : "kcm",
		id   : 19950407,
		grade : 2,
		class : 1903
	};

	printf("Get hds message...:%s, %s, %u, %u, %u\n", 
	       	stu_h.name, stu_h.addr, 
		stu_h.id, stu_h.grade, stu_h.class);
	
	printf("Get kcm message...:%s, %s, %u, %u, %u\n", 
	       	stu_k.name, stu_k.addr, 
		stu_k.id, stu_k.grade, stu_k.class);

	return 0;
}

