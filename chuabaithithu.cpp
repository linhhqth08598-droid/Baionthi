#include<stdio.h>

//ham co tham so
int NhapINT(int so){
	scanf("%d", &so);
	return so;
}

void Bai1(){
	char ma[7], ten[50];
	int tuoi;
	//vi menu co scanf => fflush cho chac
	fflush(stdin);
	printf("Xin moi nhap ma: ");
	gets(ma);
	printf("Xin moi nhap ten: ");
	gets(ten);
	printf("Xin moi nhap tuoi: ");
	//scanf("%d", &tuoi);
	tuoi = NhapINT(tuoi);
	printf("Thong tin vua nhap:\n");
	printf("Ma: %s, Ten: %s, Tuoi: %d", ma, ten, tuoi);
}

void Bai2(){
	//if else if
	int so;
	printf("Xin moi nhap so: ");
	scanf("%d", &so);
	if(so > 0){
		printf("So duong\n");
	} else if (so == 0){
		printf("Khong am khong duong\n");
	} else {
		printf("So Am\n");
	}
}

void Bai3(){
	//nhap so luong
	int n;
	printf("Xin moi nhap so luong chai sua: ");
	scanf("%d", &n);
	int sua[n];
	//nhap mang
	for(int i = 0; i < n; i++){
		printf("Xin moi nhap gia cua sua %d:", i+1);
		scanf("%d", &sua[i]);
	}
	//in ra yeu cau de bai
	// in ra danh sach
	printf("\n Danh sach gia cua cac chai sua: \n");
	for(int i = 0; i < n; i++){
		printf("Gia cua sua %d la %d\n", i+1, sua[i]);
	}
	//tinh TBC (co the co, co the ko xuat hien)
	float tbc = 0;
	// 10 5 10 20 -> tbc += sua[i]
	// 0 = 0 + 10 -> tbc = 10
	//tbc = 10 + 5 -> tbc = 15
	for(int i = 0; i < n; i++){
		tbc += sua[i];
	}
	tbc = tbc/n;
	// tim cac vitri gia > tbc
	for(int i = 0; i < n; i++){
		if(sua[i] > tbc){
			printf("Gia cua sua o vitri %d > gia TB\n", i+1);
		}
	}
}

int main(){
	int choice = -1;
	while(choice != 0){
		printf(" Menu\n");
		printf("1. TT thu cung\n");
		printf("2. Xac dinh am duong\n");
		printf("3. Thong tin san pham\n");
		printf("0. Thoat\n");
		printf("Xin moi nhap lua chon: ");
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
				printf("Xin moi nhap lai\n");
				break;
		}
	}
}
