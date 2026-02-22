#include <stdio.h>
int main() {
	int arr[10];
	int i;
	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
		printf("Introduce un numero: ");
		scanf("%i", &arr[i]);
	}
	int max = arr[0];
	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
		int nn = arr[i];
		if (max < nn) {
			max = arr[i];
		}
	}
	printf("El numero mayor es: %i", max);
	return 0;
}
