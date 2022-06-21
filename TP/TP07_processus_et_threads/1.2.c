#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main(){

    pid_t pid;
    pid = fork();


    if (pid == 0){
        printf("Child\n");
        printf ("PID du père: %ld\n", getpid ()); 
        printf ("PID du fils : %ld\n", getppid ());
        while 1;
        {
           printf("  \n");
        }
        
        }
    else {
        printf("Parent\n");
        printf ("PID du fils: %ld\n", getpid ()); 
        printf ("PID du père : %ld\n", getppid ());
    }
    return 0;
}