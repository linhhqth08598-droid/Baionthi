#include<stdio.h>
int main(){
    int a, b;
    printf("Nhap 2 so nguyen a va b de tinh.\n");
    printf("Nhap so a:");
    scanf("%d", &a);
    printf("Nhap so b:");
    scanf("%d", &b);
    int tong, hieu, tich, phanDu;
	double thuong;
    tong = a + b;
    hieu = a - b;
    tich = a * b;
    thuong = (double)a / b;
    phanDu = a % b;
    printf("Tong: %d\n", tong);
    printf("Hieu: %d\n", hieu);
    printf("Tich: %d\n", tich);
    printf("Thuong: %lf\n", thuong);
    printf("Phan du: %d\n", phanDu);
    return 0;
}
