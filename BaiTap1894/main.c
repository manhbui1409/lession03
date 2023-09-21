#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int N;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &N);

    int arr[N];
	int i; 
    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("1. In danh sach nguoc cua mang\n");
    printf("2. Hoan doi nguoc lai vi tri cac phan tu trong mang\n");
    printf("Vui long chon mot tuy chon (1 hoac 2): ");

    int lua_chon;
    scanf("%d", &lua_chon);

    switch (lua_chon) {
        case 1:
            printf("Danh sach nguoc cua mang la:\n");
            for ( i = N - 1; i >= 0; i--) {
                printf("%d", arr[i]);
                if (i > 0) {
                    printf(", ");
                }
            }
            break;
        case 2:
            for ( i = 0; i < N / 2; i++) {
                int temp = arr[i];
                arr[i] = arr[N - 1 - i];
                arr[N - 1 - i] = temp;
            }
            printf("Mang sau khi hoan doi:\n");
            for ( i = 0; i < N; i++) {
                printf("%d", arr[i]);
                if (i < N - 1) {
                    printf(", ");
                }
            }
            break;
        default:
            printf("Lua chon khong hop le.\n");
            break;
    }

    return 0;
}
