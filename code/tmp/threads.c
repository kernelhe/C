#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>

char *p1, *p2;

int run(unsigned r)
{
	    int i,j,k,ret=0;
	    unsigned r1,r2;
	    srand(r);
	    for (i=0;i<(16<<20);i++) {
	            r1 = (unsigned)(rand() % ((256<<20)-(1<<10)));
	            r2 = (unsigned)(rand() % ((256<<20)-(1<<10)));
	            k = 0;
	            for (j=0;j<(1<<10);j++) {
	                    k += *(p1+r1+j);
	                    k += *(p2+r2+j);
	            }
	            ret += k;
	    }
	    return ret;
}

int main()
{
	    int i,j;
	    pthread_t pth1, pth2;
	    p1 = (char*)malloc(256<<20);
	    p2 = (char*)malloc(256<<20);
	    memset(p1, sizeof(p1), 0);
	    memset(p2, sizeof(p2), 0);
	    pthread_create(&pth1, NULL, run, 123);
	    pthread_create(&pth2, NULL, run, 456);
	    pthread_join(pth1, NULL);
	    pthread_join(pth2, NULL);
	    return 0;
}
