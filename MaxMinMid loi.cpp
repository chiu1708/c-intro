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

int* MInMaxMiddle(int arr[][100], int n, int m) {
	int max, min;
	static int mmm[3][100];
	for (int i = 0; i < n; i++) {
		max = 0;
		min = arr[i][0];
		for (int j = 0; j < m; j++) {
			max = arr[i][j] > max ? arr[i][j] : max;
			min = arr[i][j] < min ? arr[i][j] : min;
		}
		mmm[0][i] = max;
		mmm[1][i] = min;
		mmm[2][i] = 0;
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == (max + min) / 2) {
				mmm[2][i] = 1;
				break;
			}
		}
	}
	return mmm;
}

void XuatKetQua(int mmm[][100], int n) {
	int max, min, mid;
	for (int i = 0; i < n; i++) {
		max = mmm[0][i];
		min = mmm[1][i];
		mid = (max + min) / 2;
		if (mmm[2][i]) {
			printf("Dong %d co (min, max, middle) la (%d, %d, %d)\n", i + 1, max, min, mid);
		}
		else {
			printf("Dong %d co (min, max, middle) la (%d, %d, n/a)\n", i + 1, max, min);
		}
	}
}


void main() {
	int n, m;
	printf("Nhap so dong : "); scanf_s("%d", &n);
	printf("Nhap so cot : "); scanf_s("%d", &m);
	int* arr = NhapMaTran(n, m);
	int* mmm = MinMaxMiddle(arr, n, m);
	XuatKetQua(mmm, n);
}