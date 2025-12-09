#include<stdio.h>
//while va dowhile
//while(<dieu kienn>){
//      //cac lenh dieu thuc hien neu <dieu kien> true
//}
int main(){
	int soA;
	printf("xin moi nhap so A: ");
	scanf("%d", &soA);
	while(soA < 10){
		printf("so A = %d\n", soA);
		soA++;
	}
	int soB;
	printf("xin moi nhap so B: ");
	scanf("%d", &soB);
	do{
		printf("so B = %d\n", soB);
		soB++;
		}while(soB < 10);
	//while : check truoc, lam sau
	//dowhile: lam truoc, check sau
}
