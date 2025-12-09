#include<stdio.h>

int main(){
	int SLXM;
	printf("Xin moi nhap so luong Xe may: ");
	scanf("%d", &SLXM);
	
	int DTXL[SLXM];
	
	for(int i = 0; i < SLXM; i++){
		printf("Xin moi nhap dung tich xi lanh cua xe may %d: ", i + 1);
		scanf("%d", &DTXL[i]);
	}
	
	printf("\nDanh sach xe may va dung tich xi lanh cua xe may: \n");
	for(int i = 0; i < SLXM; i++){
		printf("Xe may so %d va dung tich xi lanh la %d\n", i + 1, DTXL[i]);
	}
}
