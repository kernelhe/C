#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/mman.h>
int main()
{
    // 创建共享内存映射, 512 KB
    size_t sz = 512 * 1024;
    void *p = mmap(NULL, sz, PROT_READ | PROT_WRITE,
                   MAP_SHARED | MAP_ANONYMOUS, -1, 0);
    if (p == MAP_FAILED)
    {
        perror("mmap");
        exit(EXIT_FAILURE);
    }
    int *addr = p;
    int n = fork();
    if (n == 0)
    {
        *addr = 100;
        printf("Child set value to %d\n", *addr);
        if (munmap(p, sz) == -1)
        {
            perror("munmap");
            exit(EXIT_FAILURE);
        }
    }
    else if (n > 0)
    {
        wait(NULL);    // 等待子进程退出
        printf("Parent get value %d\n", *addr);
        if (munmap(p, sz) == -1)
        {
            perror("munmap");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    return 0;
}
