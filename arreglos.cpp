#include <stdio.h>

void ordenar(int *arreglo){	
int i,j,aux;

	for(i = 0; i < 10; i++){
		for(j = i+1; j < 10; j++){
			if(*(arreglo+i) > *(arreglo+j)){			
				aux = *(arreglo+i);
				*(arreglo+i) = *(arreglo+j);
				*(arreglo+j)= aux;
			}
		}
	//	printf("Arreglo[%d] = %d\n",i,*(arreglo+i));
	}
	
}
void imprimir(int *arreglo){
	int i;
	for(i=0;i<10;i++){
		printf("Arreglo[%d] = %d\n",i,*(arreglo+i));
	}
	
}

int main (){
	
	int arreglo[10];
	
	arreglo[0] = 6;
	arreglo[1] = 1000;
	arreglo[2] = 3;
	arreglo[3] = 4;
	arreglo[4] = 10;
	arreglo[5] = 1000000005;
	arreglo[6] = 99;
	arreglo[7] = 88;
	arreglo[8] = 66;
	arreglo[9] = 0;
	
	ordenar(arreglo);
	imprimir(arreglo);
		
	

}

