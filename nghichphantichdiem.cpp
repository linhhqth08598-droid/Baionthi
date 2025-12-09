#include <stdio.h>

int main() {
    float diem[5];
    float tong = 0, trungBinh;
    int i;
    
    printf("?? PHAN TICH DIEM SINH VIEN ??\n");
    
    // Nh?p ði?m
    for(i = 0; i < 5; i++) {
        printf("Nhap diem mon %d: ", i + 1);
        scanf("%f", &diem[i]);
        tong += diem[i];
    }
    
    trungBinh = tong / 5;
    
    // Phân lo?i
    char *xepLoai;
    if (trungBinh >= 8.5) xepLoai = "Gioi";
    else if (trungBinh >= 7.0) xepLoai = "Kha";
    else if (trungBinh >= 5.5) xepLoai = "Trung Binh";
    else if (trungBinh >= 4.0) xepLoai = "Yeu";
    else xepLoai = "Kem";
    
    printf("\n--- KET QUA ---\n");
    printf("Diem trung binh: %.2f\n", trungBinh);
    printf("Xep loai: %s\n", xepLoai);
    
    // Ði?m cao nh?t, th?p nh?t
    float max = diem[0], min = diem[0];
    for(i = 1; i < 5; i++) {
        if(diem[i] > max) max = diem[i];
        if(diem[i] < min) min = diem[i];
    }
    printf("Diem cao nhat: %.2f\n", max);
    printf("Diem thap nhat: %.2f\n", min);
    
    return 0;
}
