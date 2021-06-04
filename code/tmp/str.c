#include <stdio.h>
#include <string.h>

#define STRING "hds kcm"

void print_val(void) 
{
	printf("hello\n");
}

int main(void)
{
	char name[20] = {'h', 'd', 's','\0', 'k'};
	char *str = "hds kcm";
	int (*)[10] p2;

	printf("%ld\n", strlen(name));
	printf("%ld\n", strlen(STRING));
	printf("%ld %ld\n", strlen(str), sizeof(*str));
	printf("%ld\n", sizeof STRING);	//不建议
	printf("%ld\n", sizeof name);	//不建议，建议所有情况下都使用括号
	printf("%ld\n", sizeof(name));
	printf("%p\n", name);	/* name是数组首元素的地址，&name是数组的首地址 */
	printf("%p\n", &name);	/* 数组名和函数名的本质是一样的，本质都是标签，代表某一段内存空间的起始地址 */
	printf("%p\n", print_val);
	printf("%p\n", &print_val);
	printf("%ld\n", sizeof(p2));
	
	return 0;
}

