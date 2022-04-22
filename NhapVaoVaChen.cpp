#include <stdio.h>

void EnterAndSort() {
    //Nhap vao mot day so
    int Day[12], BienTam, CanGan, ViTri, SoCanGan, DoDai;
    for (int i = 0; i < 12; i++) {
        printf("value[%d] =", i); scanf_s("%d", &Day[i]);
    }

    //Them phan tu vao day phu
    printf("Ban muon chen them bao nhieu phan tu: "); scanf_s("%d", &SoCanGan);
    DoDai = 12 + SoCanGan;
    int DayPhu[DoDai];

    //Chen cac phan tu vao day
    for (int i = 1; i <= SoCanGan; i++) {
        printf("Phan tu thu %d ban muon nhap la: ", i); scanf_s("%d", &BienTam);
        printf("Vi tri can chen phan tu nay la: "); scanf_s("%d", &ViTri);
    }
    
    //Xuat ra man hinh day so
    printf("Day so ban da nhap vao:");
    for (int i = 0; i < 12; i++) {
        printf(" %d", Day[i]);
    }
    printf("\n");

    //Xuat day so da chen
    printf("Day so da chen them cac phan tu vao la: ");

    return;
}

void main()
{
    EnterAndSort();
}
