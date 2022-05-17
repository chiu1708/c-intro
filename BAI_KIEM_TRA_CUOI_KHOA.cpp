#include <stdio.h>


struct hs {
	char name[100];
	int boy;
	int sex;
};

//Khai Bao Functions
void Start();
int Menu();
int KhongHopLe(int value, int smaller, int bigger, char InRa[]);
void Start2(int started);
char* line(int len, char chr);
int NhapLieu(struct hs list[]);
void PrintLineBang(char chr);
int strlen(char str[]);
char* Center(char str[], int len);
void PrintTitle();
int SaveFile(struct hs list[], int size);
int ReadFile(struct hs list[]);
void ShowInfo(struct hs list[], int size);
void ShowAll(struct hs list[], int size);

// Main
void main() {
	int started = 0, option, end = 0, so = 0;
	struct hs list[1000];
	Start();
	while (1) {
		Start2(started);
		option = Menu();
		switch (option) {
		case 1:
			//Load Data
			if (ReadFile(list)) printf("Doc du lieu thanh cong =)\n");
			break;
		case 2:
			// Nhap Lieu
			so = NhapLieu(list);
			break;
		case 3:
			// In Danh Sach Hoc Sinh
			ShowAll(list, so);
			break;
		case 4:
			// Luu Thong Tin
			if (SaveFile(list, so)) printf("Da luu du lieu vao file thanh cong! =)\n");
			break;
		case 5:
			//Thoat
			end = 1;
			break;
		}
		printf("%s\n", line(100, '-'));
		if (end) break;
		started = 1;
	}
	return;
}



// Noi Dung Functions

	// Function bat dau
void Start() {
	printf("Chao ban, toi la chuong trinh quan li hoc sinh!");
	printf("\n%s\n", line(100, '-'));
}

void Start2(int started) {
	if (started) { printf("Tiep theo, ban can toi lam gi?\n\n"); return; }
	printf("Ban can toi lam gi?\n\n");
}

int Menu() {
	int choose;
	printf("1. Doc du lieu hoc sinh tu file;\n");
	printf("2. Nhap Du Lieu Hoc Sinh Moi;\n");
	printf("3. In Ra Danh Sach Hoc Sinh;\n");
	printf("4. Luu Thong Tin Hoc Sinh Moi;\n");
	printf("5. Thoat.\n\n");

	Chonoption:
		printf("Vui Long Chon (1 - 5): "); scanf_s("%d%*c", &choose);
		printf("\n");
		if (KhongHopLe(choose, 0, 6, "So")) goto Chonoption;
	return choose;
}
	//Function chung

int KhongHopLe(int value , int smaller, int bigger, char InRa[]) {
	if (smaller < value && value < bigger) return 0;
	printf("%s ban nhap vao khong hop le!\n", InRa);
	return 1;
}

char* line(int len, char chr) {
	static char lin[1000];
	for (int i = 0; i < len; i++) {
		lin[i] = chr;
	}
	lin[len] = '\0';
	return lin;
}

int strlen(char str[]) {
	int i = 0;
	while (str[i] != '\0') i++;
	return i;
}

	//Function Nhap lieu
int NhapLieu(struct hs list[]) {
	int so;
	int check;
	char x[100];
	printf("So hoc sinh ban muon nhap thong tin vao la: "); scanf_s("%d%*c", &so);
	for (int i = 0; i < so; i++) {
		printf("Ten hoc sinh thu %d: ", i+1); gets(list[i].name);
		
		NhapNamSinh:
		printf("Nam sinh: "); scanf_s("%d%*c", &list[i].boy);
			check = KhongHopLe(list[i].boy, 1870, 2023, "Nam sinh");
			if (check) goto NhapNamSinh;
		NhapGioiTinh:
			printf("Gioi tinh (0:nu ; 1:nam; 2: khac): "); scanf_s("%d%*C", &list[i].sex); fflush(stdin);
			check = KhongHopLe(list[i].sex, -1, 3, "Gioi tinh");
			if (check) goto NhapGioiTinh;
	}
	return so;
}

	//Function In Danh Sach
void ShowAll(struct hs list[], int size) {
	PrintTitle();
	ShowInfo(list, size);
}

		//Function In Tieu De
void PrintLineBang(char chr) {
	printf("+%s", line(30, chr));
	printf("+%s", line(10, chr));
	printf("+%s+\n", line(11, chr));
}

char* Center(char str[], int len) {
	static char cent[1000] = "";
	int lenstr = strlen(str), llen = (len - lenstr) / 2, n = 0;
	for (int i = 0; i < llen; i++) cent[i] = ' ';
	for (int i = llen; i < llen + lenstr; i++) cent[i] = str[n++];
	for (int i = llen + lenstr; i < len; i++) cent[i] = ' ';
	cent[len] = '\0';
	return cent;
}

char* IntToString(int so) {
	static char str[5];
	str[4] = '\0';
	int i = 3;
	while (so != 0) {
		str[i--] = so % 10 + 48;
		so /= 10;
	}
	return str;
}

void PrintTitle() {
	PrintLineBang('=');
	printf("|%s", Center("Ho va ten", 30));
	printf("|%s", Center("Nam sinh", 10));
	printf("|%s|\n", Center("Gioi tinh", 11));
	PrintLineBang('=');
}
		//Function In Noi Dung
void ShowInfo(struct hs list[], int len) {
	char sex[3][10] = { "Nu", "Nam", "---" };
	for (int i = 0; i < len; i++) {
		printf("|%s", Center(list[i].name, 30));
		printf("|%s", Center(IntToString(list[i].boy), 10));
		printf("|%s|\n", Center(sex[list[i].sex], 11));
		PrintLineBang('-');
	}
}
	
	//Function Luu Thong Tin
int SaveFile(struct hs list[], int size) {
	FILE* f;
	fopen_s(&f, "C:\\Users\\ASUS\\Desktop\\code\\qlhs.dat", "w");
	if (f == NULL) {
		printf("Khong tim duoc file: ");
		return 0;
	}
	for (int i = 0; i < size; i++) {
		fwrite(&list[i], sizeof(struct hs), 1, f);
		if (fwrite == 0) {
			printf("Luu noi dung khong thanh cong =(");
			return 0;
		}
	}
	fclose(f);
	return 1;
}

	//Function Load file
int ReadFile(struct hs list[]) {
	FILE* f;
	fopen_s(&f, "C:\\Users\\ASUS\\Desktop\\code\\qlhs.dat", "r");
	if (f == NULL) {
		printf("Khong doc duoc file =(\n");
		return 0;
	}
	int i = 0;
	while (fread(&list[i], sizeof(struct hs), 1, f)) i++;
	fclose(f);
	return 1;
}