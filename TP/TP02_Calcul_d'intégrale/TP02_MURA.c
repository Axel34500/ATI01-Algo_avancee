#include <stdio.h>
#include <stdlib.h>

double aireDunRectangle (double largeur, double longueur)
{
    return largeur*longueur;
}

int main(){
    double largeur=0;
    double longueur=0;
    double add=0;
    double somme=0;
    int i;

printf("Entrez le nombre de rectangle : ");
scanf("%lf",&add);

for (i=1;i<add+1;i++){

    printf("Entrez la valeur de la largeur du rectangle %d :", i);
    scanf("%lf",&largeur);

    printf("Entrez la valeur de la longueur %d : ",i );
    scanf("%lf",&longueur);

    somme = somme + aireDunRectangle(largeur,longueur);
}
    //printf("L'aire du rectangle est %lf",aireDunRectangle(largeur,longueur));
    printf("L'aire des rectangles est %lf",somme);
    printf("\n");
return 0;

}