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
	unsigned long long n;
	size_t o;

	printf(" char:%d\n		\
		unsigned char:%d\n	\
		short:%d\n		\
		unsigned short:%d\n	\
		int:%d\n		\
		unsigned int:%d\n	\
		long:%d\n		\
		unsigned long:%d\n	\
		float:%d\n		\
		double:%d\n		\
		long int:%d\n		\
		long long:%d\n		\
		long double:%d\n	\
		unsigned long long:%d\n	\
		size_t:%d\n		\
		",			\
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
		sizeof(n),	\
		sizeof(o));
	
	return 0;
}

