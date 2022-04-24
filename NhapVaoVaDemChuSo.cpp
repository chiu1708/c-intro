//Da sua bai
//
#include <stdio.h>

int Dem(x) {
    return x / 10 ? 1 + Dem(x / 10) : 1;
}

void EnterAndCount() {
    //Nhap vao mot day so
    int Day[4], i = 1;
    for (int i = 0; i < 4; i++) {
        printf("value[%d] = ", i); scanf_s("%d", &Day[i]);
        
    }

    //Dem so chu so
    for (int i = 0; i < 4; i++) {
        printf("So %d co chieu dai la %d.\n", Day[i], Dem(Day[i]));
    }

    return;
}

void main()
{
    EnterAndCount();
}
