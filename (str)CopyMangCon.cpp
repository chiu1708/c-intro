#include <stdio.h>

void Copy(char str[], int i, int l, char empty[]) {
	for (int j = 0; j < l; j++) {
		empty[j] = str[j + i];
	}
	empty[l] = '\0';
}

void main() {
	char s[] = "green academy", s2[1000];
	int i = 2, l = 5;
	Copy(s, i, l, s2);
	printf("ket qua: %s", s2);
}
