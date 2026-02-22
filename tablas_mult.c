#include <stdio.h>

int main () {
	int mult;
	int n;
	printf("Dime un numero: ");
	scanf(" %d", &mult);
	for (n = 0; n <= 10; n++) {
		printf("%d * %d = %d\n", mult, n, mult * n);
	}
	return 0;
}

