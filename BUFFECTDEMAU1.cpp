#include<stdio.h>

int NhapSo(int so){
    scanf("%d", &so);
    return so;
}

// --- CAC HAM CHUC NANG ---

void Bai1(){
    char ten[50], diaChi[100], kyHoc[20], chuyenNganh[50];
    int tuoi;
    printf("\n            Chuc nang 1.            \n");
    
    // Xoa bo nho dem de tranh bi troi lenh 'gets' do phim Enter tu Menu
    fflush(stdin); 
    
    printf("Xin moi nhap ten: ");
    gets(ten);
    printf("Xin moi nhap tuoi: ");
    tuoi = NhapSo(tuoi);
    
    fflush(stdin); // Xoa bo nho dem sau khi nhap tuoi
    printf("Xin moi nhap dia chi: ");
    gets(diaChi);
    printf("Xin moi nhap ky hoc: ");
    gets(kyHoc);
    printf("Xin moi nhap chuyen nganh: ");
    gets(chuyenNganh);
    
    printf("Ten: %s, Tuoi: %d, Dia chi: %s, Ky hoc: %s, Chuyen nganh: %s.\n", ten, tuoi, diaChi, kyHoc, chuyenNganh);
}

void Bai2() {
    int n, i, S = 0;
    
    printf("\n            Chuc nang 2.            \n");
    printf("Nhap so nguyen n: ");
    scanf("%d", &n); 

    for (i = 1; i <= n; i++) {
        S = S + i;
    }

    printf("Tong S = %d\n", S);
}

// Ham tim gia tri nho nhat (Duoc dua ra ngoai de Bai3 goi)
int timMin(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

void Bai3() {
    int TSL;
    printf("\n            Chuc nang 3.            \n");
    printf("\n+---Thong tin Sinh Vien cac lop--+\n");
    printf(" Xin moi nhap tong so lop: ");
    scanf("%d", &TSL);

    int SLSV[TSL]; // Khai bao mang

    // 1. Nhap mang
    for (int i = 0; i < TSL; i++) {
        printf("Xin moi nhap so luong sinh vien lop %d: ", i + 1);
        scanf("%d", &SLSV[i]);
    }

    printf("\n+----Xuat thong tin Sinh Vien----+\n");

    // 2. Xuat so luong cac lop
    printf(" So luong cac lop la : %d\n", TSL);

    // 3. Liet ke vi tri cac lop co so luong SV nho hon 30
    printf(" Liet ke vi tri cac lop co so luong SV nho hon 30 : ");
    int count = 0;
    for (int i = 0; i < TSL; i++) {
        if (SLSV[i] < 30) {
            printf("%d ", i + 1); 
            count++;
        }
    }
    if (count == 0) printf("Khong co"); 
    printf("\n");

    // 4. Vi tri cac lop co kich co sinh vien nho nhat
    int minSV = timMin(SLSV, TSL); 
    
    printf(" Vi tri cac lop co kich co sinh vien nho nhat la : ");
    for (int i = 0; i < TSL; i++) {
        if (SLSV[i] == minSV) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
}

int main(){
    int choice = -1;
    while(choice != 0){
        printf("\n+--------------Menu--------------+\n");
        printf("\n  1.Nhap thong tin ca nhan\n");
        printf("  2.Tinh Tong\n");
        printf("  3.Thong tin sinh vien cac lop\n");
        printf("  0.Thoat\n");
        printf("\n+--------------------------------+\n");
        printf("\nMoi chon: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                Bai1();
                break;
            case 2:
                Bai2();
                break;
            case 3:
                Bai3();
                break;
            case 0:
                printf("\nThoat.\n");
                break;
            default:
                printf("\nKhong co lua chon nay \nXin moi nhap lai.\n");
                break;
        }
    }
    return 0;
}
