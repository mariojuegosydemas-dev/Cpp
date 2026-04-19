#include<stdio.h>
int main(){
	int vector[4];
	int cont;
	vector[0]=3;
	vector[1]=1;
	vector[2]=4;
	vector[3]=2;
	for(cont=0;cont<4;con++){
		printf("\nvector[%i],",cont,vector[cont]);
	}
	printf("\nvector= %x",vector);
	while(cont<4){
		cont++
		printf("\nvector[cont]=%x",&vector[cont]);
	}
	return(0);
}
