#include <stdio.h>

int strlen(char str[]) {
	int i = 0;
	while (str[i] != '\0') { i++; }
	return i;
}

void Copy(char str[], int i, int l, char empty[]) {
	for (int j = 0; j < l; j++) {
		empty[j] = str[j + i];
	}
	empty[l] = '\0';
}

void strcat(char str1[], char str2[]) {
	int len = 0;
	for (int i = strlen(str1); i < strlen(str1) + strlen(str2); i++) {
		str1[i] = str2[len++];
	}
}

void strins(char str1[], char str2[], int i) {
	char empty[1000], empty2[1000];
	Copy(str1, 0, i, empty);
	Copy(str1, i, strlen(str1) - i, empty2);
	strcat(empty, str2);
	strcat(empty, empty2);
	for (int i = 0; i < strlen(empty); i++) {
		str1[i] = empty[i];
	}
	str1[strlen(empty)] = '\0';
}

void main() {
	char s1[1000], s2[1000], empty[1000];
	int i;
	printf("Nhap vao s1: "); fgets(s1, sizeof(s1), stdin);
	printf("Nhap vao s2: "); fgets(s2, sizeof(s2), stdin);
	printf("Nhap vao so i: "); scanf_s("%d", &i);
	strins(s1, s2, i);
	printf("Ket qua: %s", s1);
}