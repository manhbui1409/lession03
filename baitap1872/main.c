#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() {
    int a1, a2, a3, a4;
    int max_num, min_num;

    printf("Nhap so nguy�n thu nhat: ");
    scanf("%d", &a1);
    printf("Nhap so nguy�n thu hai: ");
    scanf("%d", &a2);
     printf("Nhap so nguy�n thu ba: ");
    scanf("%d", &a3);
     printf("Nhap so nguy�n thu tu: ");
    scanf("%d", &a4);

    // X�c �?nh s? l?n nh?t
    max_num = a1;
    if (a2 > max_num) {
        max_num = a2;
    }
    if (a3 > max_num) {
        max_num = a3;
    }
    if (a4 > max_num) {
        max_num = a4;
    }

    // X�c �?nh s? nh? nh?t
    min_num = a1;
    if (a2 < min_num) {
        min_num = a2;
    }
    if (a3 < min_num) {
        min_num = a3;
    }
    if (a4 < min_num) {
        min_num = a4;
    }

    // Hi?n th? s? l?n nh?t v� s? nh? nh?t
    printf("So lon nhat l�: %d\n", max_num);
    printf("So nho nhat l�: %d\n", min_num);

    return 0;
}
