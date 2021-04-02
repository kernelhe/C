#include <stdio.h>

int main()
{
	/*
	int a;
	int b = 2;

	long int estine;
	long johns;
	short int erns;
	short ribs;
	unsigned int s_count;
	unsigned players;
	unsigned long headcount;
	unsigned short yesvotes;
	long long ago;
	*/

	short size_short = sizeof(short);
	unsigned size_int = sizeof(int);
	unsigned size_long = sizeof(long);
	long size_single_long = sizeof(long);
	long long size_double_long = sizeof(long long);

	printf("%d\n%u\n%u\n%lld\n%ld\n", 
	       size_short, size_int, size_long, 
	       size_double_long, size_single_long);
	
	return 0;
}

