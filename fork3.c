#include <stdio.h>
#include <sched.h>
#include <unistd.h>

int count = 0;
int main()
{
    if (fork() || fork())
        fork();
    printf("A ");
    return 0;
}

