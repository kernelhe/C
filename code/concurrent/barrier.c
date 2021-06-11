#include <string.h>

#define barrier() __asm__ __volatile__("": : :"memory")

int flag = 0;
char buffer[64] = {0};

void producer(void)
{
	memset(buffer, 1, 64);

	/* 设置内存屏障 */
	barrier();

	flag = 1;
}

void consumer(void)
{
	char x;

	while (!flag);

	/* 设置内存屏障 */
	barrier();
	x = buffer[0];
}

