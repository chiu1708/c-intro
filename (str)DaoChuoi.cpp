#include <stdio.h>

int strlen(char str[]) {
	int i = 0;
	while (str[i] != '\0') { i++; }
	return i;
}

void DaoChuoi(char str[]) {
	char BienTam = str[strlen(str) - 1], CanGan;
	for (int i = 0; i < strlen(str); i++) {
		CanGan = BienTam; BienTam = str[i]; str[i] = CanGan;
	}
}

void main() {
	char str[1000];
	printf("Nhap vao mot chuoi: "); fgets(str, sizeof(str), stdin);
	DaoChuoi(str);
	printf("Ket qua: %s", str);
}
