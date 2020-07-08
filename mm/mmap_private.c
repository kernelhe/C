#include <stdio.h> /*size_t, perror()*/
/*
 * unistd.h是C和C++中提供对POSIX操作系统API访问功能的头文件的名称
 * unistd是Unix Standard的缩写
 *
 * 对于类Unix系统，unistd.h中所定义的接口通常都是大量针对系统调用的封装，如fork(),pipe(),以及各种I/O原语(read,write,close等)
 *
 */
#include <unistd.h> /*fork()*/
/*
 * sys开头的文件是Linux系统自己的文件
 * sys/tyeps.h中定义了基本系统数据类型，如git_t，pid_t等
 */
#include <sys/types.h> /*pid_t*/
#include <stdlib.h> /*exit(),EXIT_FAILURE,EXIT_SUCCESS*/
#include <sys/wait.h>
#include <sys/mman.h> /*mmap()*/
#include <string.h> /*strerror()*/

extern int errno;

int main(void)
{
	//创建私有内存映射512kB
	size_t size = 512 * 1024;
	void *p = mmap(NULL, size, PROT_READ | PROT_WRITE,
		       MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);

	if (p == MAP_FAILED) {
		perror("mmap"); //perror()显示传给它的字符串，后面跟一个冒号，一个空格，和当前errno值的文本表示形式
		fprintf(stderr, "%s\n", strerror(errno));
		exit(EXIT_FAILURE);
	} 
	
	int *addr = p;
	pid_t pid = fork();

	if (pid < 0) {
		perror("fork");
		printf("%s\n", strerror(errno));
		exit(EXIT_FAILURE);
	} else if (pid == 0){
		*addr = 20;
		printf("Child set value to %d\n", *addr);

		if (munmap(p, size) == -1) {
			perror("munmap");
			printf("%s\n", strerror(errno));
			exit(EXIT_FAILURE);
		}

	} else if (pid > 0) {
		wait(NULL);
		printf("Parent get value %d\n", *addr);

		if (munmap(p, size) == -1) {
			perror("munmap");
			printf("%s\n", strerror(errno));
			exit(EXIT_FAILURE);
		}
	}

	return 0;
}

