#include <stdio.h>
// switch case + while
int main(){
	int choice;
	printf("Menu\n");
	printf("1. Ga ran\n");
	printf("2. Ga nuong\n");
	printf("0. Thoat\n");
	printf("Xin moi nhap lua chon: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("ban chon ga ran 100k\n");
			break; // thoat khoi { }  gan nhat
			// ko chay bat ki dong code nao o duoi (trong{})
		case 2:
			printf("ban chon ga nuong 140k\n");
			break;
		case 0:
			printf("tam biet\n");
			break;
		default:
			printf("Ko co trong menu\n");
			printf("xin moi nhap lai\n");
			break;
	}
	
}
