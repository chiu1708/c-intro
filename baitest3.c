#include <stdio.h>

int main()
{
    int n, count=0, smallest=0, biggest=0;
    
    nhap:
        printf("nhap vao mot so: "); scanf("%d", &n);
        if (n < 0) {
            printf("vui long nhap mot so duong!\n");
            goto nhap;
        }
    
    for (int i=1; i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (smallest==0 && i>1) {
                smallest = i;
            }
            if (i < n) {
                biggest = i;
            }
        }
    }
    
    printf("so uoc so cua %d la %d;\n", n, count);
    printf("uoc so nho nhat lon hon 1 cua %d la %d;\n", n, smallest);
    printf("uoc so lon nhat nho hon %d la %d.\n", n, biggest);
}
