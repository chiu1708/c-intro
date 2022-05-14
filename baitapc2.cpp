#include <stdio.h>

int strlen(char str[]) {
	int i = 0;
	while (str[i] != '\0') { i++; }
	return i;
}

int IsVowel(char chr) {
	char Vowels[] = "AaEeIiOoUu";
	for (int i = 0; i < 10; i++) {
		if (chr == Vowels[i]) { return 1; }
	}
	return 0;
}

int CountVowel(char str[]) {
	int count = 0;
	for (int i = 0; i < strlen(str); i++) {
		count = IsVowel(str[i]) ? ++count : count;
	}
	return count;
}

void main() {
	char str[1000];
	printf("Nhap vao mot chuoi: "); fgets(str, sizeof(str), stdin);
	printf("So nguyen am trong chuoi tren la: %d", CountVowel(str));
}