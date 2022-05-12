#include <stdio.h>


void coucou (int j){
	printf ("coucou %d\n",j);
	}
int main (){
	int i;
	for (i=0;i<10; i++){
	printf("hello \n");
	coucou(i);
	}
	return 0;
}
