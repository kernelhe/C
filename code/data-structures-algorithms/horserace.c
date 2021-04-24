#include <stdio.h>
#include <stdlib.h>

int *horse_create(void)
{
	int *val;
	int horse[64];
	val = horse;

	for (int i = 0; i < 64; i++)
		horse[i] = rand();

	return val;
}

void travse(int *val)
{
	for (int i = 0; i < 64; i++)
		printf("%d\n", val[i]);
}

int main()
{
	int *val;
	
	val = horse_create();
	travse(val);
	
	return 0;
}

