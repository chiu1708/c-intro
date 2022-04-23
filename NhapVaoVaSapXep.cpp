#include <stdio.h>

void EnterAndSort() {
    int Day[12], BienTam;
    for (int i = 0; i < 12; i++) {
        printf("value[%d] = ", i); scanf_s("%d", &Day[i]);
    }

    //Xuat ra man hinh day so
    printf("Day so ban da nhap vao:");
    for (int i = 0; i < 12; i++) {
        printf(" %d", Day[i]);
    }
    printf("\n");

    //Sắp xếp từ lớn tới nhỏ
    for (int i = 11; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (Day[j] < Day[j + 1]) {
                BienTam = Day[j];
                Day[j] = Day[j + 1];
                Day[j + 1] = BienTam;
            }
        }
    }

    //Xuất ra màn hình day từ lớn tới nhỏ
    printf("Day so sau khi sap xep giam dan:");
    for (int i = 0; i < 12; i++) {
        printf(" %d", Day[i]);
    }
    printf("\n");

    //Xuất ra màn hình dãy từ nhỏ tới lớn
    printf("Day so sau khi sap xep tang dan:");
    for (int i = 11; i >= 0; i--) {
        printf(" %d", Day[i]);
    }

    return;
}

void main()
{
    EnterAndSort();
}
