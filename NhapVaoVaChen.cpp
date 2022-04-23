#include <stdio.h>

void EnterAndInsert() {
    //Nhap vao mot day so
    int Day[12],DayPhu[1000], BienTam, SoCanChen, CanGan, ViTri, DoDai = 12;
    for (int i = 0; i < 12; i++) {
        printf("value[%d] = ", i); scanf_s("%d", &Day[i]);
        DayPhu[i] = Day[i];
    }

    //Chen cac phan tu vao day
    printf("Ban muon chen them bao nhieu phan tu: "); scanf_s("%d", &SoCanChen);
    for (int i = 1; i <= SoCanChen; i++) {
        printf("Phan tu thu %d ban muon nhap la: ", i); scanf_s("%d", &BienTam);
        printf("Vi tri can chen phan tu nay la: "); scanf_s("%d", &ViTri);
        DoDai++;
        for (int j = ViTri; j < DoDai; j++) {
            CanGan = BienTam;
            BienTam = DayPhu[j];
            DayPhu[j] = CanGan;
        }
    }

    //Xuat ra man hinh day so
    printf("Day so ban da nhap vao:");
    for (int i = 0; i < 12; i++) {
        printf(" %d", Day[i]);
    }
    printf("\n");

    //Xuat day so da chen
    printf("Day so da chen them cac phan tu vao la: ");
    for (int i = 0; i < DoDai; i++) {
        printf("%d ", DayPhu[i]);
    }

    return;
}

void main()
{
    EnterAndInsert();
}
