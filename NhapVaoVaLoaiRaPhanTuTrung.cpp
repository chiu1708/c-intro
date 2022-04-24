#include <stdio.h>

void EnterAndSort() {
    //Nhap vao mot day so
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

    //Sắp xếp từ nhỏ tới lớn
    for (int i = 12; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (Day[j] > Day[j + 1]) {
                BienTam = Day[j];
                Day[j] = Day[j + 1];
                Day[j + 1] = BienTam;
            }
        }
    }

    //Xuat day da loai cac phan tu trung ra man hinh
    printf("Day so da loai ra cac phan tu trung: ");
    for (int i = 0; i < 12; i++) {
        if (Day[i] != Day[i - 1]) {
            printf("%d ", Day[i]);
        }
    }

    return;
}

void main()
{
    EnterAndSort();
}
