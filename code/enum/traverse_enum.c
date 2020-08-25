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
		switch (day & MON | TUE | WED | THU | FRI | SAT | SUN) {
		case 1:

		}
	}
	return 0;
}

