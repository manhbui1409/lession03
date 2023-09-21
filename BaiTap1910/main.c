#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N;
	printf("\nNhap vao do dai mang N =");
	scanf("%d",&N);
	int t[N];
	int i,j;
	for (i =0;i<N;i++) {
		printf("\nNhap t[%d] = ",i);
		scanf("%d",&t[i]);
	}
	for (i=0; i<N-1;i++) {
		int max = i;
		for (j =i+1;j<N;j++) {
			if(t[j] >t[max]) {
				max =j;
			}
		}
			
				int temp = t[max];
				t[max] = t[i];
				t[i] = temp;
			
		
	}
	for (i=0; i<N; i++) {
		 printf("%d ", t[i]);
    	
	}
}
