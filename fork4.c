#include <stdio.h>
#include <sched.h>
#include <unistd.h>

int main()
{
    int i;
    int n =3; int count =0;
    for (i=0; i<n; i++) {
        fork();
    }
    printf("i: %d count: %d pID: %d\n"
            ,i,++count, getpid());
    //Think: number of child process
}
