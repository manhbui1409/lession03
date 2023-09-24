#include <stdio.h>
#include <stdlib.h>

int *t; 

void nhapMang(int N) {
	int i;
	int m;
    t = (int *)calloc(N, sizeof(int)); 
    if (t == NULL) {
        printf("Khong the cap phat bo nho cho mang.\n");
        exit(1);
    }
    
    printf("Nhap %d so nguyen:\n", N);
    for ( i = 0; i < N; i++) {
        scanf("%d", &t[i]);
    }
    printf("\nNhap so phan tu can them :");
    scanf("%d",m);
    t = (int *) realloc(t, m * sizeof(int));

	for(i=N;i<m;i++) {
		printf("\nNhap t[%d] = ", i);
		scanf("%d", t + i);
	}
}

void hienThiMang(int N) {
	int i;
    printf("Danh sach cac phan tu trong mang:\n");
    for ( i = 0; i < N; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
}

int tinhTong(int N) {
	int i;
    int tong = 0;
    for ( i = 0; i < N; i++) {
        tong += t[i];
    }
    return tong;
}

void sapXepMang(int N) {
    int i,j;
    for ( i = 0; i < N - 1; i++) {
        for ( j = 0; j < N - i - 1; j++) {
            if (t[j] > t[j + 1]) {
               
                int temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
        }
    }
    printf("Mang da duoc sap xep theo thu tu tang dan.\n");
}

int main() {
    int N;
    int luaChon;
    
    while (1) {
        printf("\nMenu chuong trinh:\n");
        printf("1. Nhap vao N so nguyen\n");
        printf("2. Hien thi danh sach cac phan tu trong mang\n");
        printf("3. Tinh tong cac phan tu trong mang\n");
        printf("4. Sap xep cac phan tu trong mang theo thu tu tang dan\n");
        printf("5. Thoat\n");
        printf("Chon mot lua chon: ");
        scanf("%d", &luaChon);
        
        switch (luaChon) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &N);
                nhapMang(N);
                break;
            case 2:
                hienThiMang(N);
                break;
            case 3:
                printf("Tong cac phan tu trong mang: %d\n", tinhTong(N));
                break;
            case 4:
                sapXepMang(N);
                break;
            case 5:
                free(t); 
                exit(0);
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }
    }
    
    return 0;
}

