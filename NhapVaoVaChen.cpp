//Da sua bai
//

#include <stdio.h>

void EnterAndCount() {
	//Nhap vao mot day so
	int n, m, a[1000], item[1000], position[1000];
	printf("Nhap n = "); scanf("%d", &n);
	for (int i = 0; i < 12; i++) {
		printf("value[%d] = ", i); scanf("%d", &a[i]);
	}

	//Them cac phan tu 
    printf("Ban muon them bao nhieu phan tu: "); scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        printf("item[%d] = ", i+1); scanf("%d", &item[i]);
        printf("tai vi tri: "); scanf("%d", &position[i]);
    }
    
    //Chen
    for (int i = 0; i < m; i++) {
        int item = items[i];
        int position = position[i];
        int j;
        for(j = n++; j > position; j--) {
            a[j] = a[j-1];
        }
        a[j] = item;
    }
    
    //In ra
    
    
    return;
}

void main()
{
	EnterAndCount();
}
