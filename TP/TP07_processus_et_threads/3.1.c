#include <pthread.h>
#include <stdio.h>
#define NTHREADS 12
#define ARRAY_SIZE 10000000

void *Hello(void *threadid)
{
    double A[ARRAY_SIZE];
    int i;
    sleep(3);
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        A[i] = i;
    }
    printf("%d: Hello World! %f\n", threadid, A[ARRAY_SIZE-1]);
    pthread_exit(NULL);
}
int main(){
    phread_t threads[NTHREADS];
    int rc, t;
    for (t = 0; t < NTHREADS; t++){
        rc = pthread_create(&threads[t], NULL, Hello, (void *)t);
        if (rc){
            printf("ERROR; return code from pthread_create() is %d\n", rc);
            exit(-1);
            }
        else {
            printf("ERROR");
            }
    }
    printf("Created %d threads\n", t);
    pthread_exit(NULL);
}