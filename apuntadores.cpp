#include <stdio.h>

/*int variable;
int *apuntador;*/

int suma(int a, int b, int *c)
{
	*c=a+b;
	return *c;
	
}


int main(){
/*	variable = 1;
	apuntador = &variable;
	*apuntador=5;
	//apuntador = 0;*/
	int a,b,c;
	a=2;
	b=1;
	c=0,
	suma(a,b,&c);
	printf("El resultado es: %d\n",c);	
}
