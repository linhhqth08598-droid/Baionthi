#include<stdio.h>
int main(){
	double toan, ly, hoa;
	char msv[7], ten[50];
	printf("Sinh Vien: ");
	gets(ten);
	printf("Ma Sinh Vien: ");
	gets(msv);
	fflush(stdin);
	printf("Diem Toan: ");
	scanf("%lf", &toan);
	printf("Diem Ly: ");
	scanf("%lf", &ly);
	printf("Diem Hoa: ");
	scanf("%lf", &hoa);
	printf("--------------------------------\n");
	printf("Sinh vien %s co ma %s dat diem thi dai hoc khoi B nhu sau:\nToan: %lf Ly: %lf Hoa: %lf", ten, msv, toan, ly, hoa);
	return 0;
}
