#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main(){

    pid_t pid;
    pid = fork();
    int i = 0;




    if (pid == 0){
        while (i != 20000){
            printf("Child\n");
            //printf ("PID du père: %ld\n", getpid ()); 
            //printf ("PID du fils : %ld\n", getppid ());
            i++;
            };
        }


    else {
        while (i != 20000){
            printf("Parent\n");
            //printf ("PID du fils: %ld\n", getpid ()); 
            //printf ("PID du père : %ld\n", getppid ());
            i++;
            };
    }
    return 0;
};

