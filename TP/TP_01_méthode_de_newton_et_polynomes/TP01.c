#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double q1 (double x){
    double f1;
    double racine = sqrt(x);
    double cosinus = cos(x);
    f1 = (1/racine)-(12*cosinus);
    return f1;
}

double q2 (double x){
    double f2;
    double sinus = sin(x);
    f2=(-1)/(2*(pow(x,3/2)))+12*sinus;
    return f2;
}

double q3 (double f1, double f2, double q2){
    int i
    while abs(f2-f1<0.01){
        
    }
        double x0 = 1;
        a = (-1)/(2*(pow(x,3/2)))+12*sinus;
        return a;
    
    

}



int main()
{
    double x = 1;
    double a=q1(x);
    double b=q2(x);
    
    printf("le resultat de la question 1 est %f\n", a);
    printf("le resultat de la question 2 est %f\n", b);

    return 0;
}