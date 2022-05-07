#include <stdio.h>

int* NhapVaoMang(int n) {
	static int arr[1000];
	for (int i = 0; i < n; i++) {
		printf("Value[%d] = ", i); scanf_s("%d", &arr[i]);
	}
	return arr;
}

int XuatRaMang(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		printf(" %d", arr[i]);
	}
}

void DoiViTri(int arr[], int n) {
	//Tao mang cac so chia het cho 3
	int value[1000], index[1000], len = 0, bientam, cangan;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 3 == 0) {
			value[len] = arr[i];
			index[len] = i;
			len++;
		}
	}
	//Doi vi tri
	bientam = value[0];
	for (int i = 0; i < len-1; i++) {
		value[i] = value[i + 1];
	}
	value[len - 1] = bientam;
	//Xuat ra mang
	printf("Mang ban nhap vao la:");  XuatRaMang(arr, n); printf("\n");

	for (int i = 0; i < len; i++) {
		arr[index[i]] = value[i];
	}

	printf("Mang da doi cho cac phan tu la: "); XuatRaMang(arr, n); printf("\n");
}

void main() {
	int n;
	printf("Nhap do dai cua mang: "); scanf_s("%d", &n);
	int* arr = NhapVaoMang(n);
	DoiViTri(arr, n);
}