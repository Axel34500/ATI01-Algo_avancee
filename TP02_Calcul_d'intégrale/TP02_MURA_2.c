#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double aireDunRectangle (double largeur, double longueur)
{
    return largeur*longueur;
}

double fonction (double x){
    return pow(x,3);
}

int main(){
    double largeur=0;
    double longueur=0;
    double somme=0;
    double nombre_rectangle;
    double h;
    int i;

// trouver le nombre de rectangle 
    double max;
    double min;
    max = 150; //b
    min = -100; //a
    nombre_rectangle = max-min; // n
    

    h = (max-min)/nombre_rectangle;

for (i=0;i<nombre_rectangle;i++){

    largeur = (max-min)/(nombre_rectangle); 

    longueur = fonction(min+(i*h)+(h/2));

    printf("longueur %lf",longueur);
    printf("\n");
    somme = somme + aireDunRectangle(largeur,longueur);

}

    printf("nombre de rectangle %lf",nombre_rectangle);
    printf("\n");
    printf("largeur %lf",largeur);
    printf("\n");
    printf("L'aire des rectangles est %lf",somme);
    printf("\n");
return 0;

}