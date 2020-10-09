#include <stdio.h>

int main(void)
{
	/*
	 * 当我们定义一个数组a时，编译器根据指定的元素个数和元素类型分配确定大小(元素类型大小x元素个数)的一块内存
	 * 并把这块内存命名为a。
	 */
	int a[5];/* a作为右值时，代表数组首元素的地址，而非数组的首地址 */
	//int *p;
	//p = &a;
	//printf("address of a[0]:%p\n", &a[0]);
	//printf("address of a:\t%p\n", a);
	//printf("address of a:\t%p\n", &a);

	if ((&a[0] == a) && (a == &a)) {/* a=&a=&&a */
	//if (&a[0] == a) {/* 数组首元素的地址就是数组的的首地址。a=&a=&&a */
		printf("Both are equal...\n");
	}

	printf("size of a:%ld\n", sizeof(a));
	printf("size of &a:%ld\n", sizeof(&a));
	printf("size of &a[0]:%ld\n", sizeof(&a[0]));

	return 0;
}


