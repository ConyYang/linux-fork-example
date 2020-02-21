#include <stdio.h>
#include <sched.h>
#include <unistd.h>

int count = 0;
int main()
{
    printf("Hello world! %d, %d", count++, getpid());
    fflush(stdout);
    fork();
    printf("Hello world! %d, %d\n", count++, getpid());
    return 0;
}
