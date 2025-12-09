#include<stdio.h>
float NhapSo(){
	float so;
	scanf("%f", &so);
}

float TinhDelta(float a, float b, float c){
	return (b*b)-4*a*c;
}

void KetLuan(float delta){
	if (delta > 0) {  
		printf("Delta bang %f lon hon 0 => phuong trinh co 2 nghiem phan biet.\n");
	} else if (delta = 0) {
	    printf("Delta bang %f bang 0 => 2 phuong trinh 2 nghiem kep.\n");
	} else {
		printf("Delta bang %f nho hon 0 => phuong trinh vo nghiem.\n");
	}
}

void BaiToan(){
	printf("Xin moi nhap a, b, c de tinh delta cua phuong trinh bac 2 1 an\n");
	printf("Nhap so a: ");
	float a = NhapSo();
	printf("Nhap so b: ");
	float b = NhapSo();
	printf("Nhap so c: ");
	float c = NhapSo();
	float delta = TinhDelta(a, b, c);
	printf("Delta = %f", delta);
}

int main(){
	BaiToan();
}
