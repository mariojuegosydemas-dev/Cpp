#include <stdio.h>

int main() {
	int len = 8;
	char string[len];
	int i;
	int j;
	char voc[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
	for (i = 0; i < len; i++) {
		scanf("%c", &string[i]);
	}
	for (i = 0; i < len; i++) {
		for (j = 0; j < 10; j++) {
			if (string[i] == voc[j]) {
				string[i] = '*';
			}
		}
	}
	for (i = 0; i < len; i++) {
		printf("%c", string[i]);
	}
	return 0;
}
