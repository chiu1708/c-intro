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

void strcpy(char str[], char cstr[]) {
	for (int i = 0; i < strlen(str); i++) {
		cstr[i] = str[i];
	}
	cstr[strlen(str)] = '\0';
}

int compare(char str1[], char str2[]) {
	for (int i = 0; i < strlen(str1); i++) {
		if (str1[i] != str2[i]) { return 0; }
	}
	return 1;
}

void main() {
	char str[1000], str1[1000];
	printf("Nhap vao mot chuoi: "); fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	strcpy(str, str1);
	DaoChuoi(str);
	printf("%s%sla chuoi palindrome", str1, compare(str, str1) ? " " : " khong ");
}