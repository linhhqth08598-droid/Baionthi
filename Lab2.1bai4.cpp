#include<stdio.h>
int main(){
	double toan, ly, hoa;
	printf("Nhap diem mon Toan, Ly, Hoa de tinh diem trung binh.\n");
	printf("Nhap diem Toan: ");
	scanf("%lf", &toan);
	printf("Nhap diem Ly: ");
	scanf("%lf", &ly);
	printf("Nhap diem Hoa: ");
	scanf("%lf", &hoa);
	double diemTB;
	diemTB = (toan * 3 + ly * 2 + hoa * 1) / 6;
	printf("Diem trung binh la: %lf\n", diemTB);
	return 0;
}
