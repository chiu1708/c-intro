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

int* SapXep(int arr[][100], int n, int m) {
	int BienTam, TangDan = -1;
	for (int i = 0; i < m; i++) {
		if (TangDan > 0) {
			//SapXepTangDan
			for (int j = 0; j < n; j++) {
				for (int k = 1; k < n - j; k++) {
					if (arr[k][i] < arr[k - 1][i]) {
						BienTam = arr[k][i];
						arr[k][i] = arr[k - 1][i];
						arr[k - 1][i] = BienTam;
					}
				}
			}

		}
		else {
			//Sap Xep Giam Dan
			for (int j = 0; j < n; j++) {
				for (int k = 1; k < n - j; k++) {
					if (arr[k][i] > arr[k - 1][i]) {
						BienTam = arr[k][i];
						arr[k][i] = arr[k - 1][i];
						arr[k - 1][i] = BienTam;
					}
				}
			}
		}
		TangDan *= -1;
	}
	return arr;
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
	arr = SapXep(arr, n, m);
	printf("Ket qua:\n");
	XuatMaTran(arr, n, m);
}