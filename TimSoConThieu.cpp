#include <stdio.h>

int* NhapVaoDay(int n) {
	static int arr[1001];
	for (int i = 0; i < n; i++) {
		printf("Value[%d] = ", i); scanf_s("%d", &arr[i]);
	}
	return arr;
}

void SapXepTangDan(int arr[], int n) {
	int BienTam;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n - i; j++) {
			if (arr[j] < arr[j - 1]) {
				BienTam = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = BienTam;
			}
		}
	}
}

int* TimSoConThieu(int arr[], int n) {
	static int outarr[1001];
	int len = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i + 1] > arr[i] + 1) {
			for (int j = arr[i] + 1; j < arr[i + 1]; j++) {
				outarr[len++] = j;
			}
		}
	}
	outarr[1000] = len;
	return outarr;
}

void XuatMang(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

void main() {
	int n;
	printf("Nhap vao do dai: "); scanf_s("%d", &n); 
	int* arr = NhapVaoDay(n);
	SapXepTangDan(arr, n);
	printf("Day so da sap xep: "); XuatMang(arr, n); printf("\n");
	arr = TimSoConThieu(arr, n);
	printf("Cac so con thieu la: "); XuatMang(arr, arr[1000]);
}
