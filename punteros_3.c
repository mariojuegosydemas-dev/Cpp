#include<stdio.h>
#include<stdlib.h>
int main(){
	int *vector;//esto equivale a int vector[];
	vector=(int *)malloc(4*sizeof(int));
	//La funcion malloc(memory allocation) busca en la memoria RAM un hueco
	//libre del tamaño 4*sizeof(int)
	
	
	
	
	int cont;
	*vector=3;
	*(vector+1)=1;
	*(vector+2)=4;
	*(vector+3)=2;
	for(cont=0;cont<4;cont++){
		printf("\nvector[%i]=%i",cont,*(vector+cont));
	}
	//sustituimos vector[cont] por *(vector+cont)

	return(0);

}
