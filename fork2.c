#include <stdio.h>
#include <sched.h>
#include <unistd.h>

int count = 0;
int main()
{
    printf("Hello world! %d, %d\n", count++, getpid());
    fork();
    fork();
    printf("Hello world! %d, %d\n", count++, getpid());
    return 0;
}


