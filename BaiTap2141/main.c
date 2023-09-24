#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float tong(float a,float b) {
	float sum = a+b;
	return sum;
}
float hieu(float a,float b) {
	float hieu = a-b;
	return hieu;
}
float tich(float a,float b) {
	float tich = a*b;
	return tich;
}
float thuong(float a,float b) {
	float thuong = a /b;
	return thuong;
}
int main(int argc, char *argv[]) {
	float a,b;
	printf("\nNhap vao a:");
	scanf("%f", &a);
	
	printf("\nNhap vao b:");
	scanf("%f",&b);
	float sum =	tong(a,b);
	float Hieu = hieu(a,b);
	float Tich = tich(a,b);
	float Thuong = thuong(a,b);
	printf("\nTong : %f,Hieu : %f,Tich : %f,Thuong: %f",sum,Hieu,Tich,Thuong);
}
