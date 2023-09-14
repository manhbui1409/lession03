#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
	printf("\n nhap vao gia tri a:");
	scanf("%f",&a);
	printf("\n nhap vao gia tri b:");
	scanf("%f",&b);
	printf("\n nhap vao gia tri c:");
	scanf("%f",&c);
	
	if (a ==0) {
		if (b ==0) {
			if (c ==0) {
				printf("\n phuong trinh vo so nghiem");
			} else {
				printf("\n phuong trinh vo nghiem");
			} 
		} else {
				float x = -c/b;
				printf("\n Phuong trinh co nghiem duy nhat la : x = %2f",x);
			}
	} else {
			float delta = b*b - 4 *a *c;
			if(delta < 0) {
				printf("\n phuong trinh vo nghiem");
			} else if (delta ==0 ) {
				float k = -b/(2*a);
				printf("\n phuong trinh co nghiem kep nhat la  k = %f",k);
			} else {
				float x1 = (-b+sqrt(delta))/(2*a);
				float x2 = 	 (-b-sqrt(delta))/(2*a);
				printf("\n phuong trinh co nghiem thu nhat la  x1 = %f",x1);
				printf("\n phuong trinh co nghiem thu nhat la  x2 = %f",x2);
			}
		}
}
