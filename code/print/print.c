#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int num = 1024;
	int num_zero = 0;
	int *num_null = NULL;
	float f = 10.24;
	double d = 10.24;
	char c = 'a';
	char *str = "abc";
	unsigned long ptr;
	//unsigned long ptr = NULL;
	unsigned long long p;
	//unsigned long long p = NULL;
	char *s1 = "1";
	char *s2 = "123";
	char *s3 = "123456";
	char *s4 = "12345678";
	char *s5 = "123";
	char *s6 = "1";
	char *s7 = "12345678";
	char *s8 = "1234";

	printf("十进制%d 八进制%o 十六进制:%x\n", num, num, num);
	printf("十进制%d 八进制%#o 十六进制:%#x\n", num, num, num);
	printf("十六进制：num_zero = %#x\n", num_zero);
	printf("十六进制：num_null = %#x\n", num_null);
	printf("float  小数形式:%f 指数形式:%e\n", f, f);
	printf("double 小数形式:%f 指数形式:%e\n", d, d);
	printf("float  较短输出:%g\n", f);
	printf("double 较短输出:%g\n", d);
	printf("输出单个字符:%c\n", c);
	printf("输出字符串:%s\n", str);
	printf("指针地址 unsigned long:%p\n", &ptr);
	printf("指针地址 unsigned long long:%p\n", &p);
	printf("32位无符号整数:%lu\n", ptr);
	printf("64位无符号整数:%llu\n", p);
	printf("右对齐:%s %s %s %s\n", s1, s2, s3, s4);
	printf("左对齐:%-s %-s %-s %-s\n", s5, s6, s7, s8);
	printf("输出的字符短于format:%5s\n", s5);//要输出的数短于5个，前面用空格填充
	printf("输出的字符短于format:%5s\n", s5);//要输出的数短于5个，前面用空格填充
	printf("精度整数1024:%.2d\n", num);
	printf("精度整数1024:%.6d\n", num);
	printf("精度float 10.24:%.6f\n", f);
	printf("精度字符串12345678:%.5s\n", s7);//最多输出5个字符，默认全部输出

	printf("pid:%d\n", getpid());

	pause();

	return 0;
}

