//Da sua bai
//
#include <stdio.h>

int* NhapMaTran(int n, int m) {
	static int arr[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("Value[%d][%d] = ", i, j); scanf_s("%d", &arr[i][j]);
		}
	}
	return arr;
}

void SapXeptg(int arr[][100], int n, int i, int TangDan) {
	int tmp;
	for (int j = 0; j < n; j++) {
		for (int k = 1; k < n - j; k++) {
			if (arr[k][i] * TangDan < arr[k - 1][i] * TangDan) {
				tmp = arr[k][i];
				arr[k][i] = arr[k - 1][i];
				arr[k - 1][i] = tmp;
			}
		}
	}
}

void SapXep(int arr[][100], int n, int m) {
	int TangDan = -1;
	for (int i = 0; i < m; i++) {
		SapXeptg(arr, n, i, TangDan);
		TangDan *= -1;
	}
}

void XuatMaTran(int arr[][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void main() {
	int n, m;
	printf("Nhap so dong: "); scanf_s("%d", &n);
	printf("Nhap so cot: "); scanf_s("%d", &m);
	int* arr = NhapMaTran(n, m);
	SapXep(arr, n, m);
	printf("Ket qua:\n");
	XuatMaTran(arr, n, m);
}
