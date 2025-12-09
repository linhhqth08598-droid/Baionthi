#include<stdio.h>

// ham ko tra ve co tham so
float NhapSo(){
	float so;
	scanf("%f", &so);
	return so;
} 

float TinhTBC(float thamSo1, float thamSo2){
	return (thamSo1 + thamSo2)/2;
}

void BaiToanTBC(){
	printf("Xin moi nhap so a: ");
	float a = NhapSo();
	printf("Xin moi nhap so b: ");
	float b = NhapSo();
	float TBC = TinhTBC(a, b);
	printf("TBC = %f", TBC);
}

int main(){
	BaiToanTBC();
}
