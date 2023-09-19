#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char ten[50];
    int tuoi;
    char dia_chi[100];
    char email[50];
    char gioi_tinh[10];
    char sdt[20];

    int lua_chon;

    while (1) {
        printf("----- MENU CHUONG TRINH -----\n");
        printf("1. Nhap thong tin sinh vien\n");
        printf("2. Hien thi thong tin sinh vien\n");
        printf("3. Ket thuc chuong trinh\n");

        printf("Vui long chon mot so tu menu: ");
        scanf("%d", &lua_chon);

        switch (lua_chon) {
            case 1:
                printf("Nhap ten sinh vien: ");
                scanf("%s", ten);
                printf("Nhap tuoi sinh vien: ");
                scanf("%d", &tuoi);
                printf("Nhap dia chi sinh vien: ");
                scanf("%s", dia_chi);
                printf("Nhap email sinh vien: ");
                scanf("%s", email);
                printf("Nhap gioi tinh sinh vien: ");
                scanf("%s", gioi_tinh);
                printf("Nhap so dien thoai sinh vien: ");
                scanf("%s", sdt);
                printf("Da nhap thong tin sinh vien thanh cong!\n");
                break;
            case 2:
                printf("Thong tin sinh vien:\n");
                printf("Ten: %s\n", ten);
                printf("Tuoi: %d\n", tuoi);
                printf("Dia chi: %s\n", dia_chi);
                printf("Email: %s\n", email);
                printf("Gioi tinh: %s\n", gioi_tinh);
                printf("So dien thoai: %s\n", sdt);
                break;
            case 3:
                printf("Chuong trinh ket thuc.\n");
                exit(0);
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }

    return 0;
}
