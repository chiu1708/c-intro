#include <stdio.h>

int strlen(char str[]) {
	int i = 0;
	while (str[i] != '\0') { i++; }
	return i;
}

int Group(char str[], char key[], int value[]) {
	int len = 0;
	int not_al;
	for (int i = 0; i < strlen(str); i++) {
		not_al = 1;
		//Kiem tra trong key
		for (int j = 0; j < len; j++) {
			if (key[j] == str[i]) {
				not_al = 0;
				value[j] = value[j] < 5 ? ++value[j] : value[j];
				break;
			}
		}
		//Neu chua co
		if (not_al) {
			key[len] = str[i]; value[len++] = 1;
		}
	}
	key[len] = '\0';
}

void XuatKetQua(char key[], int value[]) {
	for (int i = 0; i < strlen(key); i++) {
		for (int j = 0; j < value[i]; j++) {
			printf("%c", key[i]);
		}
		printf("%s", value[i] == 1 ? "" : "<>");
	}
}

void main() {
	char str[1000], key[1000];
	int value[1000];
	printf("Nhap vao mot chuoi: "); fgets(str, sizeof(str), stdin);
	Group(str, key, value);
	printf("%s", key);
	printf("Ket qua la: "); XuatKetQua(key, value);
}
