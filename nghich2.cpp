#include<stdio.h>
#include<string.h>

int main(){
    char ten[] = "HA QUANG LINH";
    char ngay_sinh[] = "18/10/2009";
    char que_quan[] = "Thai Binh";
    
    // Tiêu d? in d?m
    printf("\033[1m");
    printf("THONG TIN CA NHAN\n");
    printf("\033[0m"); // Reset
    
    printf("Ho ten: ");
    printf("\033[1m"); // B?t d?m cho tên
    printf("%s\n", ten);
    printf("\033[0m"); // Reset
    
    printf("Ngay sinh: %s\n", ngay_sinh);
    printf("Que quan: %s\n", que_quan);
    
    return 0;
}
