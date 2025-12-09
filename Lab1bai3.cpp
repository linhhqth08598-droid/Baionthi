#include<stdio.h>
int main(){
	char sdt[10], ten[50], hKiem[20];
	double diemMC;
	printf("Phu huynh cua em: ");
	gets(ten);
	fflush(stdin);
	printf("Diem mon C: ");
	scanf("%lf", &diemMC);
	fflush(stdin);
	printf("Hanh kiem: ");
	gets(hKiem);
	printf("So dien thoai: ");
	scanf("%s", &sdt);
	printf("--------------------------------\n");
	printf("Phu huynh cua em %s co diem mon C la %lf va dat hanh kiem %s, vui long lien he %s de biet them", ten, diemMC, hKiem, sdt);
	return 0;
}
