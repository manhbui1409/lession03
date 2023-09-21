#include <stdio.h>
#include <stdlib.h>

int main() {
    int dataList[100];
    int x;
    int size = 0;
    int lua_chon;
    int i, j;
    int m;
    int count = 0;
    int n;
    
    while (1) {
        printf("--- Menu chuong trinh ---\n");
        printf("\n1. Nhap vao so nguyen x => them vao mang dataList");
        printf("\n2. Sap xep theo thu tu tang dan");
        printf("\n3. Tim kiem phan tu trong mang");
        printf("\n4. Xoa phan tu trong mang");
        printf("\n5. Hien thi");
        printf("\n6. Thoat chuong trinh\n");
        
        printf("Vui long chon mot so tu menu: ");
        scanf("%d", &lua_chon);

        switch (lua_chon) {
            case 1:
                printf("Nhap so nguyen x: ");
                scanf("%d", &x);
                printf("Them so x vao mang: ");
                dataList[size] = x;
                size++;
                break;
            case 2:
                if (size > 0) {  
                    for (i = 0; i < size - 1; i++) {
                        int min = i;
                        for (j = i + 1; j < size; j++) {
                            if (dataList[j] < dataList[min]) {
                                min = j;
                            }
                        }

                        int temp = dataList[min];
                        dataList[min] = dataList[i];
                        dataList[i] = temp;
                    }
                    for (i=0; i<size; i++) {
		 			printf("%d ", dataList[i]);
					}			
                } else {
                    printf("Mang dataList hien tai rong, khong the sap xep.\n");
                }
                break;
            case 3:
                printf("\nNhap so can tim: ");
                scanf("%d", &m);
                count = 0;
                for (i = 0; i < size; i++) {
                    if (dataList[i] == m) {
                        count++;
                    }
                }
                printf("\nSo phan tu co gia tri %d trong mang la: %d\n", m, count);
                break;
            case 4:
                printf("\nNhap so can xoa: ");
                scanf("%d", &n);
                int newSize = 0;
                for (i = 0; i < size; i++) {
                    if (dataList[i] != n) {
                        dataList[newSize] = dataList[i];
                        newSize++;
                    }
                }
                size = newSize;
                break;
            case 5:
                printf("\nDanh sach cac phan tu trong mang la:\n");
                for (i = 0; i < size; i++) {
                    printf("dataList[%d] = %d\n", i, dataList[i]);
                }
                break;
            case 6:
                printf("Chuong trinh da hoan thanh thanh cong\n");
                exit(0);
                break;
            default:
                printf("\nKhong ton tai lua chon cho ban nhap, vui long nhap lai\n");
                break;
        }
    }

    return 0;
}

