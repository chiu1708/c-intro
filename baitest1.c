#include <stdio.h>

int main()
{
    double a, b;
    printf("nhap mot so: "); scanf("%lf", &a);
    printf("nhap them mot so nua: "); scanf("%lf", &b);
    
    printf("%lf va %lf %s dau!", a, b, a*b > 0)  ? "cung" : "khong cung");
}


