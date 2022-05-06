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

int TinhTong(int arr[][100], int n, int m) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((i + j) % 5 == 0) {
				sum += arr[i][j];
			}
		}
	}
	return sum;
}

void main() {
	int n, m;
	printf("Nhap so dong : "); scanf_s("%d", &n);
	printf("Nhap so cot : "); scanf_s("%d", &m);
	int* arr = NhapMaTran(n, m);
	printf("Tong cac phan tu hop le la: %d", TinhTong(arr, n, m));
}