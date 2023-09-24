#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[50] ;
	int len,i;
	
	printf("\nNhap str = ");
	scanf("%s", str);
	 len = strlen(str);
   printf("\nDo dai cua chuoi la: %d", len);
// bai 2
	char s1[50] = "Hello ";
	char s2[50] = "World";

	strcat(s1, s2);
	printf("\n%s", s1);
	printf("\n");
	
// bai 3:
	  printf("Ky tu trong chuoi:\n");
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
}
