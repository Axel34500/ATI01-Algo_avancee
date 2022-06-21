#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main(){

    pid_t pid;
    pid = fork();
    int i=0;


    if (pid == 0){
        while (pid ==0){
            printf("Child\n");
            /*printf ("PID du père: %ld\n", getpid ());
            printf ("PID du fils : %ld\n", getppid ());*/
            i++;
            printf ("%d\n", i);
            };
            
        }

    
    else {
        while (pid !=0){
            printf("Parent\n");
            //printf ("PID du fils: %ld\n", getpid ()); 
            //printf ("PID du père : %ld\n", getppid ());
            i++;
            printf ("%d\n", i);
            };
    }
    return 0;
};