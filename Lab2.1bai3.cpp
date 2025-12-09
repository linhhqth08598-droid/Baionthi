#include<stdio.h>
int main(){
	double R;
	printf("Nhap ban kinh cua duong tron.\n");
	printf("Xin moi nhap ban kinh(R): ");
	scanf("%lf", &R);
	double chuVi, dienTich;
	chuVi = 2 * R * 3.14;
	dienTich = 3.14 * R * R;
	printf("Chu vi cua hinh tron: %lf\n", chuVi);
	printf("Dien tich cua hinh tron: %lf\n", dienTich);
	return 0;
}
