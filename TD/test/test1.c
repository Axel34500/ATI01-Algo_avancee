#include <stdio.h>
void mafunt (char * T, int p){
    int i;
    i=0;
    while(i<(p-1)){
        T[i]='a';
        i++;
    } 
    T[p]='\0';
}
int main (){
    int a;
    a = 42;
    char tab[40] = "Hello \n";
    printf ("%s\n", tab);
    mafunt (tab,40);
    printf ("%s \n", tab);
    return 0;
}