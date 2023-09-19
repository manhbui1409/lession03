#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int height;
	int i,j,k; 

    printf("Nhap chieu cao cua tam giac can: ");
    scanf("%d", &height);
    
    // In tam giác cân dac
    for ( i = 0; i < height; i++) {
    	
        
        for ( j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        
        // In các dau '*' c?a tam giác
        for (k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        
        printf("\n"); 
    }
    // In tam giác cân rong
    for (i = 0; i < height; i++) {
        
        for ( j = 0; j < height - i - 1; j++) {
            printf(" ");
        }

    
        for ( k = 0; k < 2 * i + 1; k++) {
            if (k == 0 || k == 2 * i || i == height - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n"); 
    }
    // In tam giác vuông cân dac
    for ( i = 0; i < height; i++) {
        
        for ( j = 0; j <= i; j++) {
            printf("*");
        }

        printf("\n"); 
    }
    // tam giac vuong can rong
   
    for ( i = 0; i < height; i++) {
        for ( j = 0; j <= i; j++) {
            if (j == 0 || j == i || i == height - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n"); 
    }
// bai 2:
// in ra hinh chu nhat dac
	int m,n;
	printf("\nNhap vao so chieu dai m = ");
	scanf("%d",&m);
	printf("\nNhap vao chieu rong n =");
	scanf("%d",&n);
	
	for (i=0; i<n;i++) {
		for ( j =0; j<m;j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
//In ra hinh chu nhat rong
	for (i =0; i<n;i++) {
		for (j=0;j<m;j++) {
			if (i==0 || j == 0 || i == n-1 || j == m-1) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
printf("\n");
// bai 3:
	int sum =0;
	int count=0;
	for  (i =0; i <201; i++) {
		for (j =0; j<101; j++) {
			for (k =0; k<41;k++) {
				sum =i+2*j+5*k;
				if(sum==200) {
					count++;
					break;
				}
			}
		}
	}
	printf("tong so cach la : %d",count);
}
