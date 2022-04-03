#include <stdio.h>

int main()
{
    int n;
    ktnt:
        printf("nhap vao mot so: "); scanf("%d", &n);
        if (n == 0) { goto end; }
        
        
        for (int i=2; i < n; i++) {
            if (n % i == 0) {
                printf("so ban nhap vao khong phai la so nguyen to!\n");
                goto ktnt;
            }
        }
        printf("so ban nhap vao la so nguyen to!\n");
        goto ktnt;
    
    
    end:;
}
