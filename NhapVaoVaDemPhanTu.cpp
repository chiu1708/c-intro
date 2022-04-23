#include <stdio.h>

void EnterAndCount() {
	//Nhap vao mot day so
	int a[12], keys[12], values[12], m = 0, j;
	for (int i = 0; i < 12; i++) {
		printf("value[%d] = ", i); scanf("%d", &a[i]);
	}

	//Dem so phan tu trung
	for (int i = 0; i < 12; i++) {
	    for (j = 0; j < m; j++) {
	        if (a[i] == keys[j]) { break; }
	    }
	    if (j == m) {
	        keys[m] = a[i];
	        values[m++] = 1;
	    } else {
	        values[j]++;
	    }
	}
	
	//In ra cac phan tu
	for (int i = 0; i < m; i++) {
	    printf("So %d xuat hien %d lan.\n", keys[i], values[i]);
	}

	return;
}

void main()
{
	EnterAndCount();
}
