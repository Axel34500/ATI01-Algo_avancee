/**************************************
            JEU DE LA VIE
****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define TAILLE_SUR_MATRICE  50
/* Taille de la matrice contenant */
/* les cellules + 2 pour la bordure */
/****************************************/
/*******   P R O T O T Y P E S   ********/
/****************************************/
/* Initialisation de la matrice de départ */
void init(int matrice [][TAILLE_SUR_MATRICE ]);
/* Indique pour la cellule de coordonnées (ligne,colonne) */
/* le nombre de cellules voisines vivantes */
int nombre_voisins (int matrice [][TAILLE_SUR_MATRICE], int ligne, int colonne);
/* Réalise une étape de plus dans la mise à jour de la matrice: */
/* autrement dit, on réalise un cycle de vie */
void mise_a_jour(int matrice[][TAILLE_SUR_MATRICE]);
/* Affichage de la matrice en cours */
void affiche_matrice(int matrice [][TAILLE_SUR_MATRICE]);
/****************************************/
/*******   F O N C T I O N S   **********/
/****************************************/
int main() {
    int i,y,nb=0;
    int nbr_cycles;
    int matrice[TAILLE_SUR_MATRICE] [TAILLE_SUR_MATRICE ];
    init(matrice);
    printf("entrer le nombre de cycles voulus: ");
    scanf("%d",&nbr_cycles);
    do{
    affiche_matrice(matrice);
    mise_a_jour(matrice);
    nb++;
    }while(nb!=nbr_cycles);
}
 
//3=bordure 0=vide 1=cellule
void init(int matrice [][TAILLE_SUR_MATRICE]) {
    int i,y;
    srand(time(NULL));
    for(i=0;i<TAILLE_SUR_MATRICE;i++){
        for(y=0;y<TAILLE_SUR_MATRICE;y++){
            if(i<2 || i>TAILLE_SUR_MATRICE-3 || y<2 || y>TAILLE_SUR_MATRICE-3)//creer la bordure
                matrice[i][y]=3;
            else
                matrice[i][y]=rand()%2;
        }
    }
}
 
void affiche_matrice(int matrice [][TAILLE_SUR_MATRICE]){
    int i,y;
    for(i=0;i<TAILLE_SUR_MATRICE;i++){
        for(y=0;y<TAILLE_SUR_MATRICE;y++){
            if(matrice[i][y]==0)
                printf("%c",32);
            else
                if(matrice[i][y]==1)
                    printf("%c",219);
                else
                    printf("%c",43);
        }
    printf("\n");
    }
}
 
void mise_a_jour(int matrice[][TAILLE_SUR_MATRICE]){
    int i,y,nb_voisins=0;
 
    for(i=0;i<TAILLE_SUR_MATRICE;i++){
        for(y=0;y<TAILLE_SUR_MATRICE;y++){
            nb_voisins=nombre_voisins(matrice,i,y);
            if((matrice[i][y]==1) && (nb_voisins<2 || nb_voisins>3) )
                matrice[i][y]=0;
            if(matrice[i][y]==0 && nb_voisins==3)
                matrice[i][y]=1;
        }
    }
}
 
int nombre_voisins (int matrice [][TAILLE_SUR_MATRICE], int ligne, int colonne){
    int i,y,nb_voisins=0;
    if(matrice[ligne][colonne]==3)//si c est une bordure on ne fait pas de calcul
        return(1);
    else{
        for(i=ligne-1;i<ligne+2;i++){
            for(y=colonne-1;y<colonne+2;y++){
                if(matrice[i][y]!=3)
                    nb_voisins=nb_voisins+matrice[i][y];
            }
        }
        nb_voisins=nb_voisins-matrice[ligne][colonne];
        return(nb_voisins);
    }
}