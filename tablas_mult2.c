#include <stdio.h>

int main () {
	int mult;
	int i;
	for (mult = 0; mult <= 10; mult++) {
		for (i = 0; i <= 10; i++) {
			printf("%d * %d = %d\n", mult, i, mult * i);
		}
	}
	return 0;
}

