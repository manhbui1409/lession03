#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// bai 1: Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
	int n;
	printf ("\n Nhap vao so n :");
	scanf("%d",&n);
	
		int b =1;
		int tong = 0;
		
		while (b <= n) {
		
		
		tong = tong + b;
		
		b++;
	}
		printf("\n tong cua n so dau tien la : %d",tong);
	// Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
		int i =1;
		int a = 0;
		while(i<= n) {
			a = a+i*i;
			i++;
		}
		printf("\n tong luy thua tu 1 den n  la : %d",a);
	// Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n
		float k =1;
		float s = 0.0;
		while(k<= n) {
			
			s = s+1/k;
			k++;
		} 
		printf ("\n tong cua phan so la :%f",s);
	// Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n
		float j =1;
		float h = 0.0;
		 while(j<= n) {
			h = h + 1/(2*j);
			j++;
		} 
		printf("\n tong cua day phan so chan la :%f",h);
	// Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
		float m =1;
		float l = 0.0;
		 while(m= n) {
			
			l = l+1/(2*m+1);
			m++;
		} 
		printf("\n tong cua day phan so chan la :%f",l);
}
