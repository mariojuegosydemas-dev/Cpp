#include <stdio.h>
int main() {
	int arr[4];
	int suma;
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
		printf("Introduce un numero: ");
		scanf("%i", &arr[i]);
	}
	int max = arr[0];
	
	for (j = 0; j < sizeof(arr)/sizeof(arr[0]); j++) {
		int nn = arr[j];
		if (max < nn) {
			max = arr[j];
		}
	}
	
	for (k = 0; k < sizeof(arr)/sizeof(arr[0]); k++) {
		suma += arr[k];
	}
	printf("La suma de los numeros es: %i\n", suma);
	printf("El numero mayor es: %i", max);
	return 0;
}

