#include <stdio.h>

#define FILE_SIZE 20

#undef FILE_SIZE 
#define FILE_SIZE 40

#define FILE_LENGTH 10

#ifndef FILE_LENGTH
 #define FILE_LENGTH 50
#endif

#ifdef FILE_LENGTH  /* if true, exexute following... */
 #undef FILE_SIZE 
 #define FILE_SIZE 10
#endif

#if FILE_TYPE
 #define FILE_FLAG 0
#elif CONFIG_X86_64
 #define FILE_FLAG 1
#else
 #define FILE_FLAG 2

#endif

/* #为字符串常量化运算符 */
//#define message_for(a, b)	\
//	printf(#a " love " #b "\n");
#define message_for(a, b) {printf(#a " love " #b "\n");}
//#define message_for(a, b) ({printf(#a " love " #b "\n");})/* 外层加了括号后，缺逗号 */

/* ##为token连接运算符 */
#define token(n) printf("token" #n "=%d\n", token##n);

/* 使用参数化的宏模拟函数 */
#define square(x) ((x) * (x));
#define MAX(a, b) (a > b ? a : b)

/* 使用宏定义交换两个变量的值，不使用中间变量 */


int main(void)
{
	printf("%d\n", FILE_SIZE);
	printf("%d\n", FILE_LENGTH);
	printf("%d\n", FILE_FLAG);

	printf("file...:%s\n", __FILE__);
	printf("date...:%s\n", __DATE__);
	printf("time...:%s\n", __TIME__);
	printf("line...:%d\n", __LINE__);
	printf("ANSI...:%d\n", __STDC__);

	message_for(hds, kbb)

	unsigned token520 = 1314;
	token(520);

	unsigned num = square(4);
	printf("%d\n", num);

	int max = MAX(10, 20);
	printf("%d\n", max);

	return 0;
}

