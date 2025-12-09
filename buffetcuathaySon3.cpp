#include<stdio.h>

int main(){
    int SLNV;
    printf("Xin moi nhap so luong nhan vien: ");
    scanf("%d", &SLNV);
    
    double Luong[SLNV];
    double TNhan[SLNV];
    
    for(int i = 0; i < SLNV; i++){
        printf("Xin moi nhap luong cua nhan vien so %d: ", i + 1); 
        scanf("%lf", &Luong[i]);
    }
    
    printf("\nDanh sach thuc nhan voi thuc nhan = 95%% cua tung nhan vien.\n");
    for(int i = 0; i < SLNV; i++){
    	TNhan[i] = Luong[i] * 0.95;
        printf("Thuc nhan cua nhan vien so %d la %.0lf va thuc nhan = 95%% la %.0lf.\n", 
               i + 1, Luong[i], TNhan[i]);  
    }
}
