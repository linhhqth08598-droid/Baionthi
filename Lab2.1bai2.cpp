#include<stdio.h>
int main(){
	double dai, rong;
	printf("Nhap chieu dai va chieu rong cua hinh chu nhat.\n");
	printf("Xin moi nhap chieu dai:");
	scanf("%lf", &dai);
	printf("Xin moi nhap chieu rong:");
	scanf("%lf", &rong);
	double chuVi, dienTich;
	chuVi = ( dai + rong ) * 2;
	dienTich = dai * rong;
	printf("Chu vi cua hinh chu nhat la: %lf\n", chuVi);
	printf("Dien tich cua hinh chu nhat la: %lf\n", dienTich);
	return 0;
}
