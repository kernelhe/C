#include <stdio.h>

/*
 * union:共用体 or 联合体
 * 共用体同一时刻只能保存一个成员的值，如果对新的成员赋值，就会把原来成员的值覆盖掉。
 */

int main(void)
{
	union data {
		int i;
		float j;
		char string[20];
		//unsigned long a;
		//long long b;
		//unsigned long long c;
	} data_t;

	union confine {
		unsigned long a;
		long long b;
		unsigned long long c;
	} conf_t;

	struct attribute {
		union data a;
		union confine b;
	} attr_t;

	printf("Size of data_t...:%ld\n", 
	       			sizeof(union data));
	printf("Size of conf_t..:%ld\n", 
	       			sizeof(conf_t));
	printf("Size of attr_t..:%ld\n", 
	       			sizeof(attr_t));
	
	unsigned long addr_attr = &attr_t;
	unsigned long addr_conf = &conf_t;

	unsigned num = addr_attr - (addr_conf + 7);

	printf("Get num...:%u\n", num);
	printf("Address of conf_t...:%p\n", &conf_t);
	printf("Address of attr_t...:%p\n", &attr_t);
	/* 打印共用体成员的地址 */

	union insititution {
		char string[20];
		unsigned long a;
		long long b;
		unsigned long long c;
	} insi_t;

	printf("Get address of union...:%p\n", &insi_t);
	printf("Get address of union number...:%p\n", &insi_t.string);
	printf("Get address of union number...:%p\n", &insi_t.a);
	printf("Get address of union number...:%p\n", &insi_t.b);
	printf("Get address of union number...:%p\n", &insi_t.c);

	printf("Size of insi_t...:%ld\n", sizeof(insi_t));
	
	//float f;
	//double temp;
	
	union test {
		int a;
		float b;
		char str[9];
		double d;
	} test_t;

	printf("Size of test_t...:%ld\n", sizeof(test_t));

	return 0;
}

