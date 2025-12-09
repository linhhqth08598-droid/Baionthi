#include<stdio.h>
int main(){
	double v, t, s;
	printf("Tinh quang duong\n");
	printf("Nhap van toc (km/h): ");
	scanf("%lf", &v);
	printf("Nhap thoi gian (h): ");
	scanf("%lf", &t);
	s = v * t;	
	printf("Quang duong (km): %lf\n", s);
	if(s >= 30){
		printf("Quang duong xa");
	} else if (s >= 10 && s < 30){
		printf("Quang duong trung binh");
	} else {
		printf("Quang duong gan");
	}
	return 0;
}
