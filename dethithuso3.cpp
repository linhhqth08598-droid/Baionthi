#include<stdio.h>

int NhapSo(int so){
	scanf("%d", &so);
	return 0;
}

void Bai1(){
	
}

void Bai2(){
	
}

void Bai3(){
	
}

int main(){
	int choice = -1;
	while(choice != 0){
		printf("Menu\n");
		printf("1. Thong tin hoc sinh\n");
		printf("2. Xac dinh hoc luc\n");
		printf("3. Thong tin Laptop\n");
		printf("0. Thoat\n");
		printf("Moi chon: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				Bai1();
				break;
			case 2:
				Bai2();
				break;
			case 3:
				Bai3();
				break;
			case 0:
				break;
			default:
				printf("Xin moi nhap lai.\n");
				
		}
	}
	
}
