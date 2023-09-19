#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int s[100];
	int max=100;
	int i;
	int j;
	s[0]=1;
	s[1]=1;
	for(i=2;i<100;i++){
		s[i]=s[i-1]+s[i-2];
		if(s[i]>max) break;
	}
	for(j=0;j<i;j++){
		printf("%d ", s[j]);
	}
	return 0;
	
}
