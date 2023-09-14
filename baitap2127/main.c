#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b;
	printf("\nnhap gia tri a :");
	scanf("%f",&a);
	printf("\nnhap gia tri b :");
	scanf("%f",&b);
	if (a ==0 ) {
		if(b == 0) {
			printf("\n Phuong trinh vo so nghiem");
		} else {
			printf("\n phuong trinh vo nghiem");
		}
	} else {
		float x = -b/a;
		printf("phuong trinh co nghiem duy nhat la :  x =%2f",x);
	}
}
