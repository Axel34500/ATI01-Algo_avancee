#include <stdio.h>
// question 1

struct complex_s{
    double r, i ;
};

typedef struct complex_s complex_t;
double i ;

// question 2
double complex_real (complex_t A){
double resultat;
resultat = A.r;

return resultat;
}

int main(){
// question 1
complex_t a, b;
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

// question 2

complex_t nb;
nb.i=4;
nb.r=7;

printf ("%lf\n",complex_real(nb) );

    return 0;
}