#include <stdio.h>

int* NhapVaoMang(int n) {
	static int arr[1000];
	for (int i = 0; i < n; i++) {
		printf("Value[%d] = ", i); scanf_s("%d", &arr[i]);
	}
	return arr;
}

int TinhTrungBinhPhanTu(int arr[], int n) {
	int sum = 0, count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] >= 0) {
			count++;
			sum += arr[i];
		}
	}
	return sum / count;
}

void main() {
	int n, average;
	printf("Nhap vao do dai cua mang: "); scanf_s("%d", &n);
	int* arr = NhapVaoMang(n);
	average = TinhTrungBinhPhanTu(arr, n);
	printf("Trung binh cong cua cac phan tu duong cua mang tren la: %d", average);

}