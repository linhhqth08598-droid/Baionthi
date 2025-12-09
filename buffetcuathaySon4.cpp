#include<stdio.h>

int main(){
	int SLDT;
	printf("Xin moi nhap so luong dien thoai: ");
    scanf("%d", &SLDT);
    
    int Ram[SLDT];
    
    for(int i = 0; i < SLDT; i++){
    	printf("Xin moi nhap dung luong ram cua dien thoai so %d: ", i + 1);
    	scanf("%d", &Ram[i]);
	}
    
    printf("\nDanh sach RAM cua cac dien thoai.\n");
    for(int i = 0; i < SLDT; i++){
    	printf("Dien thoai %d: %dGB\n", i + 1, Ram[i]);
	}
	
	int min_ram = Ram[0];
    int vi_tri_min = 0;
    
    for(int i = 0; i < SLDT; i++){
        if(Ram[i] < min_ram){
            min_ram = Ram[i];
            vi_tri_min = i;
        }
    }
    printf("\nDien thoai co RAM nho nhat: %dGB\n", min_ram);
    printf("Vi tri: Dien thoai so %d\n", vi_tri_min + 1);
} 
