#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int *p;
	int sum;
	p = (int*) calloc(10, sizeof(int));
	int i;
	for (i =0; i<10;i++) {
		printf("\nNhap p[%d] = ",i);
		scanf("%d",p +i);
	}
	printf("\n===============================");
	for(i=0;i<10;i++) {
		printf("\n%d", p[i]);
	}
	for (i=0; i<10; i++) {
		if ( p[i] %2 ==0 ) {
			sum += p[i];
		}
	}
	printf("\n tong cac so chia het cho 2 trong mang la : %d",sum);
}
