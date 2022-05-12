#include <stdio.h>
#include <math.h>
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

// question 4
complex_t complex_mul (complex_t a, complex_t b){
complex_t resultat; 
    resultat.r = (a.r*b.r)-(a.i*b.i);
    resultat.i = (a.r*b.i)+(a.i*b.r);

    return resultat;
}


// question 4b
complex_t complex_div (complex_t a, complex_t b){
complex_t resultat; 
    resultat.r = (a.r*b.r+a.i*b.i)/((pow(b.r,2)+pow(b.i,2)));
    resultat.i = (-a.r*b.i+a.i*b.r)/((pow(b.r,2)+pow(b.i,2)));

    return resultat;
}

// question 5

double complex_abs(complex_t a){
    double R;
    double x = pow(a.r,2);
    double y = pow(a.i,2);
    double Z = x+y;
    R=sqrt(Z);

    return R;
}

// question 6

complex_t complex_conj(complex_t a){
    complex_t R ;
    R.r = a.r ;
    R.i = -a.i ;
    return R;
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
    //printf(" La somme des nombres complexes: %lf + %lf i\n", somme.r, somme.i);

// question 2

complex_t nb;
nb.i=4;
nb.r=7;

printf ("%lf\n",complex_real(nb) );

// question 4
complex_t resultat_mul = complex_mul(a,b);
printf("résultat de la multiplication des complexes : %lf + %lf i\n",resultat_mul.r, resultat_mul.i);

// question 4b
complex_t resultat_div = complex_div(a,b);
printf("résultat de la division des complexes : %lf + %lf i\n",resultat_div.r, resultat_div.i);

// question 5
double resultat_abs = complex_abs(a);
printf("résultat du module des complexes : %lf \n",resultat_abs);

// question 6
complex_t resultat_conj = complex_conj(a);
printf("résultat du module des conjugé :  %lf %lf i\n",resultat_conj.r,resultat_conj.i);

    return 0;
}