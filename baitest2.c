#include <stdio.h>

int main()
{
    int n;
    printf("nhap mot so: "); scanf("%d", &n);
    printf("cac uoc so cua %d la: ", n);
    
    n > 0 ? : (n = n * -1);
    
    for (int i = 1; i <= n; i++) {
        if (n%i == 0) {
            printf("%d ", i);
        }
    }
}

