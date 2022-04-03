#include <stdio.h>

int main()
{
    int n, sum = 0;
    nhap:
        printf("nhap vao mot so: "); scanf("%d", &n);
        if (n < 0) {
            printf("vui long nhap mot so duong!\n");
            goto nhap;
        }
    
    for (int i = 1; i < n; i++) {
        if ((n%i==0) && (i%2==0)) {
            sum+=i;
        }
    }
    printf("tong cac uoc so chan cua %d be hon %d la %d!", n, n, sum);
}
