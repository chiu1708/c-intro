//luu y bai de quy doc comment

#include <stdio.h>

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
