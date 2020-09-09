#include <stdio.h>

int main(void)
{
	//unsigned long *p1;/* 表示p1是一个指针变量，保存一个地址。这个地址指向一个具有sizeof(unsigned long)个连续字节单元的内存空间 */
	//int           *p2;
	//char          *p3;
	//double        *p4;
	unsigned long *p1;
	int 	      *p2;
	char          *p3;
	double        *p4;
	void          *ptr;

	/* 按指针下标进行遍历 */
	for(int i = 1; i <= 4; i++) {
		switch (i) {
		case 1:
			ptr = &p1;
			break;
		case 2:
			ptr = &p2;
			break;
		case 3:
			ptr = &p3;
			break;
		case 4:
			ptr = &p4;
			break;
		}

		printf("value of p%d:%p\n", i, ptr);/* %p打印地址 */
	}

	return 0;
}

