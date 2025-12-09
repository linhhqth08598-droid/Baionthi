#include<stdio.h>
int main(){
	double delta;
	printf("Nhap delta cua phuong trinh ax2 + bx + c = 0: ");
	scanf("%lf", &delta);
	if(delta > 0){
		printf("Phuong trinh co 2 nghiem phan biet.");
	} else if (delta = 0){
		printf("Phuong trinh co nghiem kep.");
	} else {
		printf("Phuong trinh vo nghiem.");
    }
    return 0;
}
