#include<stdio.h>

int main(){
	//tinh toan trong C
	int a, b;
	printf("Xin moi nhap so a: ");
	scanf("%d", &a);
	printf("Xin moi nhap so b: ");
	scanf("%d", &b);
	int tong, hieu, tich;
	tong = a + b;
	printf("tong cua a va b la: %d\n", tong);
	hieu = a - b;
	printf("hieu cua a va b la: %d\n", hieu);
	tich = a * b;
	printf("tich cua a va b la: %d\n", tich);
	// ep kieu
	// double thuong =(double)a/b;
	// double thuong = 1.0 * a / b;
	double thuong  = (double)a / b;
	printf("thuong cua a va b la: %lf\n", thuong);
	a++; // + 1 don vi
	++a; // + 1 don vi
	//tong = a++ + b;// + 1 truoc sau do moi tinh toan
	//tong = ++a + b;// + 1 sau khi tinh toan xong ket qua
	printf("tong cua a va b la: %d\n", a);
	// co ++ --. ko co ** //
	int mod;
	mod = a % b;
	printf("du cua a / b la: %d\n", mod);
	return 0;
}
