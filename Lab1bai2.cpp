#include<stdio.h>
int main(){
	char manv[10], ten[50], cvu[50], sdt[10], luong[10];
	printf("Ma nhan vien: ");
	gets(manv);
	fflush(stdin);
	printf("Ten: ");
	gets(ten);
	printf("Chuc vu: ");
	gets(cvu);
	printf("So dien thoai: ");
	scanf("%s", &sdt);
	printf("Luong: ");
	scanf("%s", &luong);
	printf("--------------------------------\n");
	printf("Ma nhan vien %s, voi ten la %s. Duoc thang chuc lam %s voi muc luong %s VND. \nVui long lien he %s. De biet them thong tin chi tiet", manv, ten, cvu, luong, sdt);
	return 0;
}
