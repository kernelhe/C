#include <stdio.h>
#include "stream.h"
#include "iostream.h"
#include "math.h"
#include "config.h"

int main(void)
{
	/*
	extern int stream;
	extern unsigned iostream;
	extern int math;
	extern int config;
	*/

	/*
	stream = 0;
	iostream = 1;
	math = 2;
	config = 3;
	*/
	printf("stream:%d iostream:%u math:%d config:%d\n", /* 双引号""中的内容不可截断，如果换行，则编译错误 */
	       stream, iostream, math, config);

	//printf("stream:%d", stream);
	return 0;
}

