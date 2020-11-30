#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <string.h>

#define SIZE_MAX(n)	pow(1024.0, 3.0)*n

#if SIZE_64B				/* alloc from Stack */
 #define SIZE_BLOCK	64UL 
#elif SIZE_1K				/* alloc from Heap  */
 #define SIZE_BLOCK	1024UL
#elif SIZE_4K				/* alloc from Heap  */
 #define SIZE_BLOCK	4096UL
#elif SIZE_64K				/* alloc from Heap  */
 #define SIZE_BLOCK	65536UL
#elif SIZE_4M				/* alloc from Heap  */
 #define SIZE_BLOCK	4194304UL
#endif

int main(void)
{
	int size;
	unsigned long long total;
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

	int times;
	printf("Please set cycle times...\n");
	scanf("%d", &times);

	printf("Total memory you selected: %-dG\n", size);
#if SIZE_64B
	printf("Block size   you selected: 64B\n");
#elif SIZE_1K
	printf("Block size   you selected: 1K\n");
#elif SIZE_4K
	printf("Block size   you selected: 4K\n");
#elif SIZE_64K
	printf("Block size   you selected: 64K\n");
#elif SIZE_4M
	printf("Block size   you selected: 4M\n");
#endif
	printf("Cycle times  you selected: %-d\n", times);
	printf("==================================================\n");
	sleep(2);
	printf("OK, Start allocating memory...\n");
	
	while (times--) {
		/*
		 * If you select SIZE_64B as block size, it will report a Segment fault.
		 * So, we should control cycles, avoid stack overflow.
		 * You could use command: ulimit -s, to check stack size in your machine.
		 * In my machine ,it is 8M.
		 */
#if SIZE_64B
		total = (unsigned long long)(pow(1024.0, 2.0) * 8) / 64;
#endif
		char block[SIZE_BLOCK];
		char * buffer[total];
		unsigned long long num = 0;
		
		for (unsigned long long i = 0; i < total; i++) {
			char *buf = (char *)malloc(sizeof(block));
			if (!buf)
				exit(1);

			buffer[i] = buf;
		}
	
		for (unsigned long long j = 0; j < total; j++) {
			memset(buffer[j], num++, SIZE_BLOCK);
			/* printf("buffer[%llu]:%llu\n", j, buffer[j][0]); 		*/
			/* printf("buffer[%llu]:%llu\n", j, buffer[j][SIZE_BLOCK - 1]); */
		} 

		for (unsigned long long k = 0; k < total; k++)
			free(buffer[k]);
	}
		
	return 0;
}

