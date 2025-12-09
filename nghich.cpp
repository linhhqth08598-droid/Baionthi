#include<stdio.h>
#include<string.h>

int main(){
    printf("\033[1m");// in dam
    printf("THONG TIN CA NHAN\n");
    printf("\033[0m");// reset ve normal
    
    char name[] = "Ha Quang Linh";
    printf(" Ten: %s\n", name);
    
    int old = 16;
    printf(" Tuoi: %d\n", old);
    
    char lop[] = "SD2002";
    printf(" Lop: %s\n", lop);
    
    char truong[] = "FPT Polyschool";
    printf(" Truong: %s\n", truong);
    
    int ngay = 18;
    int thang = 10;
    int nam = 2009;
    printf(" Ngay sinh: %d/%d/%d\n", ngay, thang, nam);
    
    char que[] = "Thai Binh (Hung Yen)";
    printf(" Que quan: %s\n", que);
    
    char sdt[] = "0333588329"; // S?a thành chu?i
    printf(" SDT: %s\n", sdt);
    
    return 0;
}
