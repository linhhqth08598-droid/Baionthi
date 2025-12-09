#include<stdio.h>

int main(){
	int choice = -1;
	while(choice != 0){
		printf("Chon chuc nang:\n");
		printf("   1.Thong tin thu cung\n");
		printf("   2.Xac dinh so\n");
		printf("   3.Thong tin san pham\n");
		printf("   0.Thoat\n");
		printf("Moi chon: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				char MaTC[20], TenTC[50];
				int TuoiTC;
				printf("Ban chon chuc nang 1: Thong tin thu cung.\n");
				printf("Nhap ma thu cung: ");
				scanf("%s", &MaTC);
				fflush(stdin);
				printf("Nhap ten thu cung: ");
				gets(TenTC);
				printf("Nhap tuoi thu cung: ");
				scanf("%d", &TuoiTC);
				printf("Thu cung ten %s co ma %s va %d tuoi\n", TenTC, MaTC, TuoiTC);
				break;
			case 2:
				int SoZ;
				printf("Ban chon chuc nang 2: Xac dinh so.\n");
				printf("Nhap mot so nguyen bat ki: ");
				scanf("%d", &SoZ);
				if(SoZ>0){
					
				}
		}
	}
}
