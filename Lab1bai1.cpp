#include<stdio.h>
int main(){
	char masv[7], ten[20], ngaySinh[10];
	double toan, van, anh;
	printf("Ten: ");
	gets(ten);
	fflush(stdin);
	printf("MSSV: ");
	scanf("%s", &masv);
	printf("Ngay sinh: ");
	scanf("%s", &ngaySinh);
	printf("Diem Toan: ");
	scanf("%lf", &toan);
	printf("Diem Van: ");
	scanf("%lf", &van);
	printf("Diem Anh: ");
	scanf("%lf", &anh);
	printf("--------------------------------\n");
	printf("Toi ten la: %s, sinh nhat ngay: %s va ma sinh vien: %s. Diem Toan Van Anh cua toi lan luot la: %lf, %lf, %lf.", ten, ngaySinh, masv, toan, van, anh);
	return 0;
}
