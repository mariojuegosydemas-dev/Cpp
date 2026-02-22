#include <stdio.h>

int main() {
	char string[4];
	int i;
	int j;
	for (i = 0; i < 4; i++) {
		scanf("%c", &string[i]);
	}
	for (j = 0; j < 4; j++) {
		printf(" %c ", string[3 - j]);
	}
	return 0;
}
