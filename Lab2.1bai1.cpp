#include<stdio.h>
int main(){
	double a, b;
	printf("Nhap vao tu ban phim 2 so:\n");
	printf("Xin moi nhap so a:");
	scanf("%lf", &a);
	printf("Xin moi nhap so b:");
	scanf("%lf", &b);
	double tong, hieu;
	tong = a + b;
	hieu = a - b;
	printf("Tong cua 2 so la: %lf\n", tong);
	printf("Hieu cua 2 so la: %lf\n", hieu);
	return 0;
}
