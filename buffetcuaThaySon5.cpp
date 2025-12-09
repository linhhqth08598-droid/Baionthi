#include<stdio.h>

int main(){
	int SLMT;
	printf("Xin moi nhap so luong may tinh: ");
    scanf("%d", &SLMT);
    
    int SSD[SLMT];
    
    for(int i = 0; i < SLMT; i++){
    	printf("Xin moi nhap dung luong SSD cua may tinh so %d: ", i + 1);
    	scanf("%d", &SSD[i]);
	}
    
    printf("\nDanh sach SSD cua cac may tinh.\n");
    for(int i = 0; i < SLMT; i++){
    	printf("May tinh %d: %dGB\n", i + 1, SSD[i]);
	}
	
	int max_SSD = SSD[0];
    int vi_tri_max = 0;
    
    for(int i = 0; i < SLMT; i++){
        if(SSD[i] > max_SSD){
            max_SSD = SSD[i];
            vi_tri_max = i;
        }
    }
    printf("\nMay tinh co SSD lon nhat: %dGB\n", max_SSD);
    printf("Vi tri: May tinh so %d\n", vi_tri_max + 1);
} 
