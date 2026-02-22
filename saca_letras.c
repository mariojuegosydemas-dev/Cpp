#include <stdio.h>

int main() {
	char string[4];
	int i = 0;
	int j  = 0;
	for (i = 0; i < 4; i++) {
		scanf("%c", &string[i]);
	}
	for (i = 0; j < 4; j++) {
		printf(" %c ", string[j]);
	}
	return 0;
}
