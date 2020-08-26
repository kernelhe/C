#include <stdio.h>

enum day 
{
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday,
	sunday
} workday;

int main(void)
{
	enum day wrk_day;//workday wrk_day
	int a = 1;

	wrk_day = (enum day)a;
	printf("wrk_day:%d\n", wrk_day);

	return 0;
}

