#include <stdio.h>

/* 声明枚举类型并定义枚举变量 */
enum DAY
{
	MON,
	TUE,
	WED,
	THU,
	FRI,
	SAT,
	SUN
} day;//定义枚举变量

int main(void)
{
	printf("current enum number\n");

	int num = 2;

	/* 
	 * enum可以看作宏定义的集合。
	 * 每个枚举元素可以看作为一个整型变量的宏定义
	 * 而枚举变量其实就是其中一个整型变量的宏定义
	 */
	day = (enum DAY)num;//通过强制类型转换给枚举变量day赋值
	
	for (day; day <= SUN; day++) {
		switch ((day & MON) | (day & TUE) | (day & WED) | 	\
			(day & THU) | (day & FRI) | (day & SAT) | (day & SUN)) {
		//case 0:
		//	printf("error\n");
		//	break;
		case 1:
			printf("MON:%d\n", day);
			break;
		case 2:
			printf("TUE:%d\n", day);
			break;
		case 3:
			printf("WED:%d\n", day);
			break;
		case 4:
			printf("THU:%d\n", day);
			break;
		case 5:
			printf("FRI:%d\n", day);
			break;
		case 6:
			printf("SAT:%d\n", day);
			break;
		case 7:
			printf("SUN:%d\n", day);
			break;
		default:
			printf("error\n");//default的break语句不是必须的
		}
	}

	return 0;
}

