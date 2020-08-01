#include <stdio.h>

//64位linux系统采用LP64编程模型
//L：long类型，8字节
//P：pointer类型，8字节

//32位linux系统采用ILP32编程模型
//I：int类型，4字节
//L：long类型，4字节
//P：pointer类型，4字节

int main(void)
{
	char a;
	unsigned char b;
	short c;
	unsigned short d;
	int e;
	unsigned int f;
	long g;
	unsigned long h;
	float i;
	double j;
	long int k;
	long long l;
	long double m;
	size_t n;

	printf(" char a:%d\n		\
		unsigned char b:%d\n	\
		short c:%d\n		\
		unsigned short d:%d\n	\
		int e:%d\n		\
		unsigned int f:%d\n	\
		long g:%d\n		\
		unsigned long h:%d\n	\
		float i:%d\n		\
		double j:%d\n		\
		long int k:%d\n		\
		long long l:%d\n	\
		long double m:%d\n	\
		size_t n:%d\n		\
		",
		sizeof(a),	\
		sizeof(b),	\
		sizeof(c),	\
		sizeof(d),	\
		sizeof(e),	\
		sizeof(f),	\
		sizeof(g),	\
		sizeof(h),	\
		sizeof(i),	\
		sizeof(j),	\
		sizeof(k),	\
		sizeof(l),	\
		sizeof(m),	\
		sizeof(n));
	
	return 0;
}

