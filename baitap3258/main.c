#include <stdio.h>

#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char * argv[]) {
  // bai1
  int n;
  printf("\nNhap vao so n= ");
  scanf("%d", & n);
  if (n % 2 == 0) {
    printf("\nn la so chan");
  } else {
    printf("\nn la so le");
  }
  //Nhap vào N. Kiem tra xem N có phai là so chia het cho 2 và 7 không
  if (n % 2 == 0 && n % 7 == 0) {
    printf("\nN la so chia het cho 2  va 7");
  } else {
    printf("\nN khong la so chia het cho 2 va 7");
  }
  
  //Nhap vào N. Kiem tra xem N có phai so nguyên to không
  if (n < 2) {
    printf("\n%d khong la so nguyen to", n);
  } else if (n == 2) {
    printf("\n%d la so nguyen to", n);
  } else {

    int count = 0;
    int i;
    for (i = 1; i <= n; i++) {

      if (n % i == 0) {
        count++;
      }
    }

    if (count > 2) {
      printf("\n%d khong la so nguyen to", n);
    } else {
      printf("\n%d la so nguyen to", n);
    }
  }
  fflush(stdin);
  fflush(stdout);
  //Nhap 2 so nguyên a, b. Tính tong các phan tu  giua a và b
  int a;
  printf("\nNhap vao so a= ");
  scanf("%d", & a);
  int b;
  printf("\nNhap vao so b= ");
  scanf("%d", & b);
  int sum = 0;
  int j;
  for (j = a; j <= b; j++) {
    sum += j;
  }
  printf("\nTong giua a va b la: %d", sum);
  //- Nhap vào so N -> Thuc hien in tot ca các so nguyên to tu 1 -> N. Tính tong các so nguyên to dó
 printf("\nCac  so nguyen to tu 1 den  %d là:\n", n);
    int tong = 0;
	int i;
	
    for ( i = 2; i <= n; i++) {
        int isPrime = 1; 

        for ( j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
            tong += i;
        }
    }

    printf("\nTong các so nguyên to là: %d\n", tong);

    
// bai so 3 :khai bao mang
	int t[10];
	for (i =0; i<10;i++) {
		printf("\nNhap vao t[%d] = ",i);
		scanf("%d",&t[i]);
		
	}
// tong cac phan tu trong mang
	int sumArray = 0;
	for (i=0;i<10;i++) {
		
		sumArray += t[i];
	}
	printf("Tong cac phan tu trong mang la : %d",sumArray);
// tinh tong cac phan tu chia het cho 3 va 6
	int tongMang =0;
	for (i =0; i<10;i++) {
		if (t[i] %3 ==0 && t[i]%6 ==0) {
			tongMang += t[i];
		}
	}
	printf("\nTong cac phan tu trong mang chia het cho 3 va 6 la :%d",tongMang);
// tinh tong cac so nguyen chia het cho 3 va 7
	int Sum =0;
	 int kIndex = 0;
	for (i =0; i<10;i++) {
		if (t[i] %3 ==0 && t[i]%7 ==0) {
			Sum += t[i];
		}
	}
	printf("\nTong cac phan tu trong mang chia het cho 3 va 7 la :%d",Sum);	
// luu cac so nguyen to vao mang moi
	int k[10];
   
 	int isprime = 1; 

        if (t[i] <= 1) {
            isprime = 0; 
        } else {
            for ( j = 2; j * j <= t[i]; j++) {
                if (t[i] % j == 0) {
                    isprime = 0; 
                    break;
                }
            }
        }
		  
        
        if (isprime ==1 ) {
            k[kIndex] = t[i];
            kIndex++;
        }

    printf("Cac so nguyen to trong mang k[]: ");
    for ( i = 0; i < kIndex; i++) {
        printf("%d ", k[i]);
    }
    printf("\n");

  








}
