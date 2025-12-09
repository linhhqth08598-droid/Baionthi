#include<stdio.h>
int main(){
	int tuoi = 18;
	printf("ban bao nhieu tuoi\n");
	printf("Xin moi nhap tuoi: ");
	//nhap tu ban phim
	//cu phap: scanf("%d <ky hieu>", &<bien>);
	scanf("%d", &tuoi);
	printf("Toi %d tuoi\n", tuoi);
	double chieuCao;
	printf("ban cao bnh\n");
	printf("Xin moi nhap chieu cao: ");
	scanf("%lf", &chieuCao);
	printf("Toi cao %lf m\n", chieuCao);
	//--------Nhap chuoi-------------------
	// lang nhang hon 1 chut
	fflush(stdin); // loai bo ky tu \n
	char ten[50];
	printf("Xin moi nhap ten: ");
	gets(ten);
	printf("Ten cua ban la :");
	puts(ten);
	printf("--------------------------------\n");
	printf("Ten: ");
	puts(ten);
	printf("Tuoi: %d, chieu cao: %lf", tuoi, chieuCao);
	return 0;
}
