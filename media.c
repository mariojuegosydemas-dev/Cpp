#include <stdio.h>
int main() {
	float arr[4];
	float suma = 0;
	int i;
	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
		printf("Introduce un numero: ");
		scanf("%f", &arr[i]);
		suma += arr[i];
	}
	float sizearr = (sizeof(arr)/sizeof(arr[0]));
	float media = suma / sizearr;
	printf("La media de los numeros es: %f", media);
	return 0;
}

