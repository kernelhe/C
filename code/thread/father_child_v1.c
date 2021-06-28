#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
        pid_t pid;                      // 定义一个pid类型的变量，存放进程号

        printf("Before fork ...\n");

        /* 调用fork()系统调用，创建一个子进程 */
        switch (pid = fork()) {

        /* fork()失败，返回一个负值 */
        case -1:
                printf("fork call fail\n");
                fflush(stdout);
                exit(1);                // 调用失败，退出

        /* 子进程调用fork(),返回0 */
        case 0:
                printf("I am child.\n");
                printf("The pid of child is: %d\n", getpid());          // 获得子进程的进程号
                printf("The pid of child's parent is: %d\n", getppid());// 若父进程未exit，则获得父进程号；若父进程已exit，孩子由1号进程接管
                printf("Child exiting...\n");

                exit(0);                // 子进程退出

        /* 父进程调用fork(),会返回子进程的进程号 */
        default:
                printf("I am father.\n");
                printf("The pid of parent is: %d\n", getpid());         // 获得父进程的进程号
                printf("the pid of parent's child is: %d\n", pid);      // 获得子进程的进程号
        }

        printf("After fork, program exiting...\n");

        exit(0);                        // 父进程退出
}
