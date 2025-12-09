#include<stdio.h>
int main(){
	char maThuCung[7], ten[50];
	printf("Ma thu cung: ");
	scanf("%s", &maThuCung);
	printf("Ten thu cung: ");
	scanf("%s", &ten);
	int tuoi;
	printf("Tuoi cua thu cung: ");
	scanf("%d", &tuoi);
	printf("--------------------------------\n");
	printf("Ma thu cung la: ");
	puts(maThuCung);
	printf("Ten: %s, Tuoi: %d", ten, tuoi);
	return 0;
}
