#include<stdio.h>

int main(){
	int SLKT;
	printf("Xin moi nhap so luong cu khoai tay: ");
	scanf("%d", &SLKT);
	
	float TLKT[SLKT];
	
	for(int i = 0; i < SLKT; i++){
		printf("Xin moi nhap trong luong cua cu khoai tay so %d: ", i + 1);
		scanf("%f", &TLKT[i]);
	}
	
	float Tong = 0;
	float TBTL;
    for(int i = 0; i < SLKT; i++){
        Tong += TLKT[i];
    }
	TBTL = Tong/SLKT;
    printf("\nTrong luong trung binh: %.2f\n", TBTL);
    printf("\nDanh sach khoai to (lon hon trung binh):\n");
    for(int i = 0; i < SLKT; i++){
    	if(TLKT[i] > TBTL){
    		printf("Cu khoai thu %d: %.2f\n", i + 1, TLKT[i]);
		}
    }
}
