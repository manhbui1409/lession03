#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void showInfor(char ten[50],int tuoi,char dia_chi[100],char email[50],char gioi_tinh[10],char sdt[20]) {
	 printf("Thong tin sinh vien:\n");
                printf("Ten: %s\n", ten);
                printf("Tuoi: %d\n", tuoi);
                printf("Dia chi: %s\n", dia_chi);
                printf("Email: %s\n", email);
                printf("Gioi tinh: %s\n", gioi_tinh);
                printf("So dien thoai: %s\n", sdt);
}
void showMessage(int msg) {
	printf("\nHello %d",msg);
}
int tinhGiaiThua(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * tinhGiaiThua(n - 1);
    }
}

int tinhTong(int m) {
    if (m == 0) {
        return 0;
    } else {
        return m + tinhTong(m - 1);
    }
}
int main(int argc, char *argv[]) {
	char ten[50];
    int tuoi;
    char dia_chi[100];
    char email[50];
    char gioi_tinh[10];
    char sdt[20];
     printf("Nhap ten sinh vien: ");
                scanf("%s", ten);
                printf("\nNhap tuoi sinh vien: ");
                scanf("%d", &tuoi);
                printf("\nNhap dia chi sinh vien: ");
                scanf("%s", dia_chi);
                printf("\nNhap email sinh vien: ");
                scanf("%s", email);
                printf("\nNhap gioi tinh sinh vien: ");
                scanf("%s", gioi_tinh);
                printf("\nNhap so dien thoai sinh vien: ");
                scanf("%s", sdt);
                showInfor(ten,tuoi,dia_chi,email,gioi_tinh,sdt);
    printf("________________________________\n");
// bai 2
showMessage(1);
showMessage(2);
showMessage(3);
printf("\n");
// bai 3:
 int n = 5;
    int giaiThua = tinhGiaiThua(n);
    printf("Giai thua cua %d la: %d\n", n, giaiThua);

    int m = 10;
    int tong = tinhTong(m);
    printf("Tong tu 1 den %d la: %d\n", m, tong);
}
