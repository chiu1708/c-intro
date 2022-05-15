#include <stdio.h>

struct hs {
	char name[100];
	int boy;
	int sex;
};


int strlen(char str[]);

char* line(int len, char chr);

char* center(char title[], int len);

void SaveFile(struct hs list[], int size);

void PrintLine(char chr);

void PrintTitle();

void showAll(struct hs list[], int size);

void ReadFile(char filePath[]);


void main() {
	struct hs list[100];

	int n;
	printf("Nhap so luong hoc sinh cua lop: "); scanf_s("%d%*c", &n);

	for (int i = 0; i < n; i++) {
		printf("Ho ten: "); gets(list[i].name);
		printf("Nam sinh: "); scanf_s("%d%*c", &list[i].boy);
		printf("Gioi tinh: "); scanf_s("%d%*c", &list[i].sex);
	}
	showAll(list, n);
	SaveFile(list, n);
	ReadFile("D:\\C-B006\\Text.txt");
}

void showAll(struct hs list[], int size) {
	char sex[3][1000] = { "---", "nu", "nam" };
	PrintTitle();
	for (int i = 0; i < size; i++) {
		printf("|%s|%10d", center(list[i].name, 30), list[i].boy);
		printf("|%s|\n", center(sex[list[i].sex], 11));
		PrintLine('-');
	}
}

void PrintTitle() {
	char title[3][100] = { "Ho va Ten", "Nam Sinh", "Gioi Tinh" };

	PrintLine('=');

	printf("|%s", center(title[0], 30));
	printf("|%s", center(title[1], 10));
	printf("|%s|\n", center(title[2], 11));

	PrintLine('=');
}

void PrintLine(char chr) {
	printf("+%s", line(30, chr));
	printf("+%s", line(10, chr));
	printf("+%s+\n", line(11, chr));
}

char* center(char title[], int len) {
	int llen = (len - strlen(title)) / 2;
	static char cent[1000] = "";
	for (int i = 0; i < llen; i++) cent[i] = ' ';
	for (int i = llen; i < llen + strlen(title); i++) cent[i] = title[i - llen];
	for (int i = llen + strlen(title); i < len; i++) cent[i] = ' ';
	cent[len] = '\0';
	return cent;
}

char* line(int len, char chr) {
	static char s[1000];
	for (int i = 0; i < len; i++) {
		s[i] = chr;
	}
	s[len] = '\0';
	return s;
}

int strlen(char str[]) {
	int i = 0;
	while (str[i] != '\0') { i++; }
	return i;
}

void SaveFile(struct hs list[], int size) {
	FILE *f;
	fopen_s(&f, "D:\\C-B006\\Text.txt", "w");
	if (f == NULL) {
		printf("Khong tim duoc file: ");
		return;
	}
	for (int i = 0; i < size; i++) {
		fwrite(&list[i], sizeof(struct hs), 1, f);
		if (fwrite == 0) {
			printf("Luu noi dung khong thanh cong");
			return;
		}
	}
	fclose(f);
}

void ReadFile(char filePath[]) {
	FILE *f;
	fopen_s(&f, filePath, "r");
	if (f == NULL) {
		printf("Doi file bi loi");
		return;
	}
	struct hs list[1000];
	int i = 0;
	while (fread(&list[i], sizeof(struct hs), 1, f)) i++;
	fclose(f);
	printf("%d\n", i);
}