#include <stdio.h>

void EnterAndCount() {
	//Nhap vao mot day so
	int Day[12],DayPhu[12], DoDai = 0, count = 1, ChuaDem = 1;
	for (int i = 0; i < 12; i++) {
		printf("value[%d] = ", i); scanf_s("%d", &Day[i]);
		
	}

	//Dem so phan tu trung
	for (int i = 0; i < 12; i++) {
		ChuaDem = 1;
		//Kiem tra da dem phan tu chua
		for (int j = 0; j < DoDai; j++) {
			if (Day[i] == DayPhu[j]) {
				ChuaDem = 0;
				break;
			}
		}
		//Neu chua dem
		if (ChuaDem) {
			for (int j = i + 1; j < 12; j++) {
				if (Day[j] == Day[i]) {
					count++;
				}
			}
			printf("so %d xuat hien %d lan.\n", Day[i], count);
			DayPhu[DoDai] = Day[i];
			DoDai++;
			count = 1;
		}
	}

	return;
}

void main()
{
	EnterAndCount();
}
