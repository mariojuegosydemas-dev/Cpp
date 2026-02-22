#include <stdio.h>

int main() {
	char string[4];
	char gstring[8];
	int i;
	int len = 4;
	for(i = 0; i < len; i++) {
		scanf("%c", &string[i]);
	}
	for(i = 0; i < len * 2; i++) {
		if (i % 2 == 0) {
			gstring[i] = string[i / 2];
		}
		else if (i != 7) {
			gstring[i] = '-';
		}
	}
	for(i = 0; i < len * 2; i++) {
		printf("%c", gstring[i]);
	}
	return 0;
}
