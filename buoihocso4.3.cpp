#include<stdio.h>

int main(){
	int choice = -1;
	// lua chon != phim thoat
	while(choice != 0){
		printf("Menu\n");
		printf("1. ga ran\n");
		printf("2. ga rut xuong\n");
		printf("0. thoat\n");
		printf("Xin moi nhap lua chon: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("ga ran 30k\n");
				break;
			case 2:
				printf("ga rut xuong 50k\n");
				break;
			case 0:
				printf("xin moi nhap lai\n");
				break;
			default:
				printf("Xin moi nhap lai");
				break;
		}
	}
}
