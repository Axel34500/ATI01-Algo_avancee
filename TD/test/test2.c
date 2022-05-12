#include <stdio.h>
#include <stdlib.h>


struct point
{
    double x;
    double y;
};

point point_new(double x, double y){
    struct point* tmp;
    tmp=(struct point*)malloc(sizeof(struct point));
    tmp->x=x;
    tmp->y=y;
    return tmp
}


void point_del(struct point* tmp)
{
    free(tmp);
};
void point_affiche



int main(){
    struct point* toto;
    toto = point_new (12,16);
    point_del(toto);


    return 0;
}