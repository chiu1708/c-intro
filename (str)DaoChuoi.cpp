#include <stdio.h>

int strlen(char str[]) {
	int i = 0;
	while (str[i] != '\0') { i++; }
	return i;
}

void DaoChuoi(char str[]) {
	char str1[1000];
	for (int i = 0; i < strlen(str); i++) {
		str1[i] = str[strlen(str) - (i + 1)];
	}
	for (int i = 0; i < strlen(str); i++) {
		str[i] = str1[i];
	}
}

void main() {
	char str[1000];
	printf("Nhap vao mot chuoi: "); fgets(str, sizeof(str), stdin);
	DaoChuoi(str);
	printf("Ket qua: %s", str);
}
