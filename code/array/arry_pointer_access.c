#include <stdio.h>

int main(void)
{
	char * p = "abcdef";
	char a[] = "123456";
	char b[] = {1,2,3,4,5,6};/* 字符数组，字符变量存储 */
	//char c[] = {a,b,c,d,e,f};/* 错误的方式 */

	/* 以指针的形式访问指针 */
	printf("access by ptr:%c\n", *(p + 4));/* 先取出p里存储的地址值，再加上偏移量，然后取出新地址的值 */
	/* 以下标的形式访问指针 */
	printf("access by arr:%c\n", p[4]);/* 先取出p里存储的地址值，再加上偏移量，然后从新地址中取值 */

	/* 以指针的形式访问数组 */
	printf("access by ptr:%c\n", *(a + 4));
	/* 以下标的形式访问数组 */
	printf("access by arr:%c\n", a[4]);

	printf("value:%d\n", b[4]);

	return 0;
}
