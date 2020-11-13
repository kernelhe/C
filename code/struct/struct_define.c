#include <stdio.h>
#include <string.h>

int main(void)
{
	/* 结构体的定义 */
	struct student
	{
		//char name[];/* 在结构体中定义字符数组时，必须指定大小。如果没有指定大小，则编译报错 */
		char name[10];
		unsigned int ID;
		int grade;
		unsigned long birthday;
	} stu;

	/*
	 * typedef 与 #define 的不同
	 * 	1.typedef仅限于为类型定义符号名称,#define不仅可以为类型定义别名，也能为数值定义别名
	 * 	2.typedef由编译器解释执行，#define由预处理器解释执行
	 */
	typedef struct teacher
	{
		char name[10];
		unsigned id;
		char *addr;
	} teach_t;

	typedef struct
	{
		char *name;
		int price;
	} book;

	/* 结构体变量的初始化 */
	struct institution
	{
		char *name;
		char *addr;
		unsigned number;
	} fund = {"linux", "china", 100};/* 定义时初始化 */
	/* 结构体成员整体赋值仅限于定义结构体变量的时候，在使用过程中只能对成员逐一赋值 */

	teach_t teach = {
		.name = "kang",
	};

	printf("Get teacher name...:%s\n", teach.name);

	printf("Print message...:%s, %s, %u\n", fund.name, fund.addr, fund.number);

	/* 访问结构体成员 */
	//char *name;/* 字符指针没有初始化，所以是个野指针。strcpy()报错 */
	//char name[50] = "xiyou";
	char name[50];/* 数组的首地址在编译时会确定，所以strcpy()不会报错 */
	//char *addr = "Xian";
	
	struct school
	{
		char name[50];
		char addr[50];
	} xupt;
	
	strcpy(name, fund.name);/* 使用成员访问运算符'.'来访问结构体成员 */
	//strcat(addr, fund.addr);
	
	strcpy(xupt.name, "XUPT");
	strcat(xupt.addr, "china");

	printf("Get name...:%s\n", xupt.name);
	printf("Get address...:%s\n", xupt.addr);

	printf("Get the name...:%s\n", name);

	return 0;
}

