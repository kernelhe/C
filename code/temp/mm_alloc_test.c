#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

#define SIZE_MAX(n)	pow(1024.0, 3.0)*n

#if SIZE_64B
 #define SIZE_BLOCK	64UL 
#elif SIZE_1K
 #define SIZE_BLOCK	1024UL
#elif SIZE_4K
 #define SIZE_BLOCK	4096UL
#elif SIZE_64K
 #define SIZE_BLOCK	65536UL
#elif SIZE_4M
 #define SIZE_BLOCK	4194304UL
#endif

int main(void)
{
	int size;
	unsigned long total;
	printf("Select memory capacity(G):please input following number...:2 or 4 or 8 or 16\n");	
	scanf("%d", &size);
	switch (size) {
	case 2:
		total = (unsigned long)(SIZE_MAX(2) / SIZE_BLOCK);
		break;
	case 4:
		total = (unsigned long)(SIZE_MAX(4) / SIZE_BLOCK);
		break;
	case 8:
		total = (unsigned long)(SIZE_MAX(8) / SIZE_BLOCK);
		break;
	case 16:
		total = (unsigned long)(SIZE_MAX(16) / SIZE_BLOCK);
		break;
	default:
		total = (unsigned long)(SIZE_MAX(2) / SIZE_BLOCK);
	}
	printf("Total memory you selected: %dG\n", size);
#if SIZE_64B
	printf("Block   size you selected: 64B\n");
#elif SIZE_1K
	printf("Block   size you selected: 1K\n");
#elif SIZE_4K
	printf("Block   size you selected: 4K\n");
#elif SIZE_64K
	printf("Block   size you selected: 64K\n");
#elif SIZE_4M
	printf("Block   size you selected: 4M\n");
#endif
	printf("==================================================\n");
	sleep(2);
	printf("OK, Start allocating memory...\n");

	char buffer[SIZE_BLOCK];
	unsigned long long num = 0;
	
	for (unsigned long i = 0; i < total; i++) {
		char *buf = (char *)malloc(sizeof(buffer));
		if (!buf)
			exit(1);
		
		for (unsigned j = 0; j < SIZE_BLOCK; j++) 
			buf[j] = num++;
			
		free(buf);
	}
	
	return 0;
}

