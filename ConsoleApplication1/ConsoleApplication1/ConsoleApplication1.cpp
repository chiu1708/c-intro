//luu y bai de quy doc comment

#include <stdio.h>

int g(int n) {
	return n <= 1 ? n : n*g(n-1);
}

void r(int n) {
	if (n == 0) { return; }
	//print truoc lap lai sau.
	printf("%d", n % 10);
	r(n/10);
}

int b(int n) {
	if (n == 0) { return; }
	//lap lai truoc print sau
	b(n/2);
	printf("%d", n % 2);
}

void main() {
	int n;
	printf("Nhap so ban muon dao: "); scanf_s("%d", &n);
	printf("%d dao lai la: %d", n); r(n);
}
