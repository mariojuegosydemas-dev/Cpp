#include <stdio.h>

int main() {
    int arr[4];
    int suma = 0;
    int i;

    for (i = 0; i < 4; i++) {
        printf("Introduce un numero: ");
        scanf("%i", &arr[i]);

        suma += arr[i];

        if (i == 0 || arr[i] > arr[i-1]) {
        }
    }

    int max = arr[0];

    for (i = 1; i < 4; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("La suma de los numeros es: %i\n", suma);
    printf("El numero mayor es: %i", max);

    return 0;
}
