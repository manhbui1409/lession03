#include <stdio.h>
#include <math.h>

// �?nh ngh?a struct SinhVien
struct SinhVien {
    char name[50];
    char rollno[20];
    int age;
};

// H�m t�nh t?ng c�c s? chia h?t cho 5 trong m?ng
int TinhTongChiaHetCho5(int arr[], int n) {
    int tong = 0;
    int i; 
    for ( i = 0; i < n; i++) {
        if (arr[i] % 5 == 0) {
            tong += arr[i];
        }
    }
    return tong;
}

// H�m ki?m tra xem m?t s? c� ph?i l� s? ch�nh ph��ng hay kh�ng
int LaSoChinhPhuong(int x) {
    int sqrt_x = sqrt(x);
    return sqrt_x * sqrt_x == x;
}

// H�m s?p x?p m?ng sao cho c�c s? ch?n ? �?u m?ng, c�c s? l? ? cu?i m?ng
void SapXepMangChanLe(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        while (left < right && arr[left] % 2 == 0) {
            left++;
        }
        while (left < right && arr[right] % 2 != 0) {
            right--;
        }
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    int N,i; 
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &N);

    int arr[N];
    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // T�nh t?ng c�c s? chia h?t cho 5
    int tongChiaHetCho5 = TinhTongChiaHetCho5(arr, N);
    printf("Tong cac so chia het cho 5: %d\n", tongChiaHetCho5);

    // T?m v� hi?n th? c�c s? ch�nh ph��ng
    printf("Cac so chinh phuong trong mang: ");
    for ( i = 0; i < N; i++) {
        if (LaSoChinhPhuong(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    // S?p x?p m?ng sao cho c�c s? ch?n ? �?u m?ng, c�c s? l? ? cu?i m?ng
    SapXepMangChanLe(arr, N);
    printf("Mang sau khi sap xep: ");
    for ( i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Nh?p th�ng tin sinh vi�n v� hi?n th? th�ng tin sinh vi�n c� tu?i l� s? ch�nh ph��ng
    int M;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &M);

    struct SinhVien danhSachSinhVien[M];

    for ( i = 0; i < M; i++) {
        printf("Nhap thong tin cho sinh vien %d:\n", i + 1);
        printf("Ten: ");
        scanf("%s", danhSachSinhVien[i].name);
        printf("Ma sinh vien: ");
        scanf("%s", danhSachSinhVien[i].rollno);
        printf("Tuoi: ");
        scanf("%d", &danhSachSinhVien[i].age);
    }

    printf("Cac sinh vien co tuoi la so chinh phuong:\n");
    for ( i = 0; i < M; i++) {
        int tuoi = danhSachSinhVien[i].age;
        double canBacTuoi = sqrt(tuoi);
        if (canBacTuoi == (int)canBacTuoi) {
            printf("Ten: %s\n", danhSachSinhVien[i].name);
            printf("Ma sinh vien: %s\n", danhSachSinhVien[i].rollno);
            printf("Tuoi: %d\n", danhSachSinhVien[i].age);
            printf("\n");
        }
    }

    return 0;
}

