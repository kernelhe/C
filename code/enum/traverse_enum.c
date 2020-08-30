#include <stdio.h>

enum DAY
{
	MON = 1,
	TUE,
	WED,
	THU,
	FRI,
	SAT,
	SUN
} day;

int main(void)
{
	printf("current enum number\n");
	
	for (day = MON; day <= SUN; day++) {
		/*switch ((day & MON) | (day & TUE) | (day & WED) | 	\
			(day & THU) | (day & FRI) | (day & SAT) | (day & SUN)) { */
		switch (day & (MON | TUE | WED | THU | FRI | SAT | SUN)) {
			//按位与不管你是几个1，只要对方和你对应位置的1一样，你俩就一样
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

