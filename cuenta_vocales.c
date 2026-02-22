#include <stdio.h>

int main() {
	char letras[4];
	int i;
	int j;
	int voc = 0;
	char vocales[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	for(i = 0; i < 4; i++) {
		scanf("%c", &letras[i]);
	}
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 10; j++) {
			if(letras[i] == vocales[j]) {
				voc++;
			}
		}
	}
	printf("La cantidad de vocales en tu cadena es: %i", voc);
	return 0;
}
