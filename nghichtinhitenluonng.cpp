#include <stdio.h>

int main() {
    float luongGio, gioLam;
    float luongThue, luongThuc;
    
    printf(" MAY TINH TIEN LUONG \n");
    printf("Nhap luong/gio: ");
    scanf("%f", &luongGio);
    printf("Nhap so gio lam: ");
    scanf("%f", &gioLam);
    
    float luongGross = luongGio * gioLam;
    
    // Tính thu? (gi? s? 10%)
    float thue = luongGross * 0.1;
    luongThuc = luongGross - thue;
    
    printf("\n--- KET QUA ---\n");
    printf("Luong gross: %.0f VND\n", luongGross);
    printf("Thue (10%%): %.0f VND\n", thue);
    printf("Luong thuc nhan: %.0f VND\n", luongThuc);
    
    return 0;
}
