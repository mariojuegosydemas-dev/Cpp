#include <stdio.h>
int main() {
	int arr[20];
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
		printf("Introduce un numero: ");
		scanf("%i", &arr[i]);
	}
	int max = arr[0];
	for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++){
		int nn = arr[j];
		if (max < nn) {
			max = arr[j];
		}
	}
	printf("El numero mayor es: %i", max);
	return 0;
}
