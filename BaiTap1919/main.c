#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct book_st {
	char ten[30];
	char theloai [30];
	int giatien; 
	int namxuatban;
} book;
book bookList[3];
void showMenu() {
	printf("\n1. Nhap du lieu tung quyen sach");
	printf("\n2. Sap xep, hien thi thong tin chi tiet cua tung quyen sach theo the loai (Z->A).Thong ke sach theo nam xuat ban");
	printf("\n3. Tim  quyen sach theo the loai");
	printf("\n4. Ghi vao tap tin nhi phan book.dat.");
	printf("\n5. Thoat.");
	printf("\nChon: ");
}
void nhapdulieusach() {
	int i; 
	for (i=0;i<3;i++) {
		printf("\nNhap thong tin quyen sach thu %d:",i+1);
		printf("\nNhap ten quyen sach: ");
		fflush(stdin);fflush(stdout);
		gets(bookList[i].ten);
		printf("\nNhap vao the loai sach:");
		fflush(stdin);fflush(stdout);
		gets(bookList[i].theloai);
		printf("\nNhap vao gia quyen sach:");
		fflush(stdin);fflush(stdout);
		scanf("%d",&bookList[i].giatien);
		printf("\nNHap vao nam xuat ban:");
		fflush(stdin);fflush(stdout);
		scanf("%d",&bookList[i].namxuatban);
	}
}
void drawLine() {
	
}

void hienThi() {
		int i,j;
		
		char swap[30];
		for (i=0;i<3;i++) {
			for( j=i+1;j<3;j++) {
				if (strcmp(bookList[i].theloai,bookList[j].theloai)<0) {
					 strcpy(swap, bookList[i].theloai);
					strcpy(bookList[i].theloai , bookList[j].theloai);
					strcpy(bookList[j].theloai ,swap);
				}
			}
			
		}
		printf("\nSap xep sach theo the loai tu z->a la:");
		printf("\n %-10s||%-30s||%-20s||%-20s||%-20s","STT","Ten","The Loai","Gia Tien","Nam xuat ban");
		for(i=0;i<3;i++) {
		printf("\n %-10d||%-30s||%-20s||%-20d||%-20d",i+1,bookList[i].ten,bookList[i].theloai,bookList[i].giatien,bookList[i].namxuatban);	
		}
		printf("\n");
		int count[3]={1,1,1};
		for (i=0; i<2;i++) {
			if (count[i] ==0) {
				continue;
			}
			for (j=i+1;j<3;j++) {
				if (count[j] == 0) {
					continue;
				} 
				if (bookList[i].namxuatban == bookList[j].namxuatban) {
					count[i]++;
					count[j]--;
				}
			}
		}
		printf("\nThong ke theo nam xuat ban:");
		for (i=0;i<3;i++) {
			if (count[i] !=0) {
			
				printf("\nNam %d co %d cuon sach xuat ban",bookList[i].namxuatban,count[i]);
			}
		}
}
void find() {
	int i;
	printf("\nNhap the loai sach can tim:") ;
	char nameSearch[30]; 
	fflush(stdin);fflush(stdout);
	gets(nameSearch); 
	int isFind =0;
	for (i=0;i<3;i++) {
		if(strcmp(bookList[i].theloai,nameSearch) == 0) {
			if (isFind ==0) {
			printf("\n %-10s||%-30s||%-20s||%-20s||%-20s","STT","Ten","The Loai","Gia Tien","Nam xuat ban");
		}
			printf("\n %-10d||%-30s||%-20s||%-20d||%-20d",i+1,bookList[i].ten,bookList[i].theloai,bookList[i].giatien,bookList[i].namxuatban);
			isFind = 1;
		}	
	}
	
	if(isFind == 0) {
		printf("\nKhong tim thay sach nao phu hop");
	}
}
void saveFile(book *p) {
	FILE *fp;
	fp = fopen("book.dat","wb");
	if(ferror(fp)){
		printf("\nMo file error");
	} else {
		fwrite(p,sizeof(book),3,fp);
	}
	fclose(fp);
	printf("\nLuu file thanh cong!!!");
}
void readFile(book *p){
	FILE *fp;
	fp = fopen("book.dat","rb");
	if(ferror(fp)) {
		printf("\nMo file error");
	} else {
		fread(p,sizeof(book),3,fp);
	}
	fclose(fp);
	printf("\nDoc file thanh cong");
}
int main(int argc, char *argv[]) {
	
	int choose;
	do{
		showMenu();
		scanf("%d", &choose);
		switch(choose){
			case 1:{
				nhapdulieusach();
				break;
			}
			case 2: {
				hienThi();
				break;
			}
			case 3: {
				find();
				break;
			}
			case 4: {
				saveFile(bookList);
				readFile(bookList);
				break;
			}
			case 5: {
				printf("\nThoat!!");
				break;
			}
			default:{
				printf("\nNhap sai!!");
				break;
			}
		}
	}while (choose != 5);
	
	return 0;
}
