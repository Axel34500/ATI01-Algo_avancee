#include <stdio.h>

struct complex_t{
    double r, i ;
};

int main(){
struct complex_t a, b;
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

    return 0;
}