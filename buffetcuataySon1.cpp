#include<stdio.h>

int main(){
	int SLHS;
	printf("Xin moi nhap so luong hoc sinh cua lop SD2002: ");
	scanf("%d", &SLHS);
	
	int DiemTDH[SLHS];
	
	for(int i = 0; i < SLHS; i++){
		printf("Xin moi nhap diem thi cua hoc sinh so %d: ", i + 1);
		scanf("%d", &DiemTDH[i]);
	}
	
	printf("\nDanh sach hoc va diem thi dai hoc cua tung hoc sinh:\n");
	for(int i = 0; i < SLHS; i++){
		printf("Hoc sinh thu %d va diem thi dai hoc %d diem.\n", i +1, DiemTDH[i]);
    }
}
