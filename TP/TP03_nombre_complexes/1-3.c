#include <stdio.h>
// question 1

struct complex_s{
    double r, i ;
};

typedef struct complex_s complex_t;
double i ;

// question 2
double complex_real (complex_t A){
return A.r;
}


int main(){
// question 1
complex_t a, b, somme;
    printf("Entrer la partie réelle de a : ");
    scanf("%lf", &(a.r));

    printf("Entrer la partie imaginaire de a : ");
    scanf("%lf", &(a.i));

    printf("Entrer la partie réelle de b : ");
    scanf("%lf", &(b.r));

    printf("Entrer la partie imaginaire de b : ");
    scanf("%lf", &(b.i));

    printf("%lf + %lf i\n",a.r,a.i);
    printf("%lf + %lf i\n",b.r,b.i);
// question 3
    somme.r = a.r + b.r;
    somme.i = a.i + b.i;
    printf(" La somme des nombres complexes: %lf + %lf i\n", somme.r, somme.i);




// question 2

complex_t nb;
nb.i=4;
nb.r=7;

printf ("%lf\n",complex_real(nb) );

    return 0;
}