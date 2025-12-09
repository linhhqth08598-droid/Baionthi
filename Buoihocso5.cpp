#include<stdio.h>

//Ham : 1 doan code tach biet
//    : dung vao muc dich cu the, hoac
//    : tai su dung

// ham co 2 loai: khong tra ve (void)
//              : co tra ve (int, float, ...)
// su dung pho bien : ham khong tham so va co tham so 
// main khong chua cau lenh, chi chay ham

// ham khong tra ve, ko tham so
void NhapTuoi(){
	int tuoi;
	printf("xin moi nhap tuoi: ");
	scanf("%d", &tuoi);
	printf("Toi %d tuoi", tuoi);
}

// neu xuat hien ko phai void => ham tra ve
int NhapDiem(){
	int diemVan;
	scanf("%d", &diemVan);
	return diemVan;
}

int main(){
	NhapTuoi();
	printf("Xin moi nhap diem Van:");
	int diemVan = NhapDiem();
	printf("Diem van = %d", diemVan);
	return 1000;
}
