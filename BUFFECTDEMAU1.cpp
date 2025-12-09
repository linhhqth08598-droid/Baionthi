#include<stdio.h>

int NhapSo(int so){
	scanf("%d", &so);
	return so;
}

void Bai1(){
	char ten[50], diaChi[100], kyHoc[20], chuyenNganh[50];
	int tuoi;
	fflush(stdin);
	printf("Xin moi nhap ten: ");
	gets(ten);
	printf("Xin moi nhap tuoi: ");
	tuoi = NhapSo(tuoi);
	fflush(stdin);
	printf("Xin moi nhap dia chi: ");
	gets(diaChi);
	printf("Xin moi nhap ky hoc: ");
	gets(kyHoc);
	printf("Xin moi nhap chuyen nganh: ");
	gets(chuyenNganh);
	printf("Ten: %s, Tuoi: %d, Dia chi: %s, Ky hoc: %s, Chuyen nganh: %s.", ten, tuoi, diaChi, kyHoc, chuyenNganh);
}

void Bai2() {
    // 1. Khai bao bien
    // Trong C cu, phai khai bao bien ngay dau ham
    int n;      // Bien de nhap
    int i;      // Bien de chay vong lap
    int S = 0;  // Bien tong (phai gan = 0)

    // 2. Nhap du lieu
    printf("Nhap so nguyen n: ");
    scanf("%d", &n); // Dau & là bat buoc trong C

    // 3. Tính toán
    for (i = 1; i <= n; i++) {
        S = S + i;
    }

    // 4. In ket qua
    printf("Tong S = %d", S);
}

void Bai3(){
	
}

int main(){
	int choice = -1;
	while(choice != 0){
		printf("\n+--------------Menu--------------+\n \n");
		printf("  1.Nhap thong tin ca nhan\n");
		printf("  2.Tinh Tong\n");
		printf("  3.Thong tin sinh vien cac lop\n");
		printf("  0.Thoat\n");
		printf("\n+--------------------------------+\n");
		printf("\nMoi chon: ");
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
				printf("\nThoat.\n");
				break;
			default:
				printf("\nKhong co lua chon nay \nXin moi nhap lai.\n");
				break;
		}
	}
}
