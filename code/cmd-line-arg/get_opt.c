#include <stdio.h>
/*
 * extern char *optarg
 * extern int optind, opterr, optopt
 */
#include <unistd.h>

int main(int argc, char **argv)
{
	/*
	int opt;
	opterr = 0;	//Don't print error 
	
	while ((opt = getopt(argc, argv, "a:bc")) != -1)
		switch (opt) {
		case 'a':
			printf("opt:%c\n", opt);
			printf("optarg:%s\n", optarg);
			printf("optind:%d\n", optind);
			break;
		case 'b':
			printf("opt:%c\n", opt);
			printf("optarg:%s\n", optarg);
			printf("optind:%d\n", optind);
			break;
		case 'c':
			printf("opt:%c\n", opt);
			printf("optarg:%s\n", optarg);
			printf("optind:%d\n", optind);
			break;
		}
	*/

	char *argv[] = "hello\n";
	char **arg = argv;

	for (int i = 0; i < sizeof(argv); i++) {
		printf("argv[%d]:%c", i, *argv[i]);
		printf("arg %d:%c", i, *arg[i]);
	}

	printf("\n");

	return 0;
}

