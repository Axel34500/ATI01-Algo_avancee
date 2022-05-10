#include <stdio.h>

void swap (int*i, int*j)
 int c;
 c=*i;
 *i=*j
 *j=*c

}
int main() {
	int a, b ;
	a= 42;
	b=17;
printf("a : %d \n",a);
swap(&a,&b);
return 0;
}

