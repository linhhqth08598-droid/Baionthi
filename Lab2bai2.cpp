#include<stdio.h>
int main(){
	double a, b, c;
	printf("Nhap a, b, c la do dai 3 cua 1 tam giac\n");
	printf("Nhap so a: ");
	scanf("%lf", &a);
	printf("Nhap so b: ");
	scanf("%lf", &b);
	printf("Nhap so c: ");
	scanf("%lf", &c);
	if(a + b > c && b + c > a && a + c > b && a > 0 && b > 0 && c > 0){
		printf("Tam giac do co ton tai.");
	} else {
		printf("Tam giac do khong ton tai.");
	}
	return 0;
}
