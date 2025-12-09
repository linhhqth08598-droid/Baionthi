#include<stdio.h>
int main(){
	double diemTK;
	printf("Kiem tra xem ban xep hang hoc sinh gi:\n");
	printf("Nhap diem tong ket cua ban: ");
	scanf("%lf", &diemTK);
	if(diemTK >= 9){
		printf("Hoc Sinh Xuat Sac");
	} else if (diemTK >= 8 && diemTK < 9){
		printf("Hoc Sinh Gioi");
	} else if (diemTK >= 7 && diemTK < 8){
		printf("Hoc Sinh Kha");
	} else if (diemTK >= 5 && diemTK < 7){
		printf("Hoc Sinh Trung Binh");
	} else {
		printf("Hoc Sinh Yeu");
	}
	return 0;
}
