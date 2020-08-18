#include <stdio.h>

double get_average(int arr[], int size)
{
	int i;
	double avg;
	double sum = 0;

	for (i = 0; i < size; i++) {
		sum += arr[i]; /* sum等于数组元素之和 */
	}

	avg = sum / size;

	return avg;
}

int main(void)
{
	int balance[5] = {10, 10, 10, 10, 10};
	double avg;
	int *ptr = balance;

	avg = get_average(ptr, 5);

	printf("average is %lf\n", avg);

	return 0;
}

