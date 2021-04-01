
static int j = 9;

void func2(void)
{
	j = 6;
	j++;
}


void func1(void)
{
	static int i = 6;
	i++;
}
