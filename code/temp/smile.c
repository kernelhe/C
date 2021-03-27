#include <stdio.h>

static void smile(char *p, int cnt)
{
	int i;

	while (cnt) {
		for (i = 0; i < cnt; i++) {
			printf("%s", p);
		}

		printf("\n");
		cnt--;
	}
}

int main()
{
	char *p = "Smile!";
	int cnt = 3;

	smile(p, cnt);
	
	return 0;
}

