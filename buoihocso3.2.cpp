#include<stdio.h>
/*
    <dieu kien>: bien boolean || phep so sanh: < > <= >= == !=
    = la is/are    == bang la equal  != la khac | khong bang | khong bang bang
    if(<dieu kien 1>){
        // code thuc thi neu dieu kien 1 = true
    } else if (<dieu kien 2>){
	    // code thuc thi neu dieu kien 2 = true
	} else if (<dieu kien n>){
	    // code thuc thi neu dieu kien n = true
    } else {
        // code thu thi neu tat ca dieu kien = false
    }
*/
int main(){
	//if else else if : chia nhanh, 
	//khi ma dat hay ko dat 1 dk gi do, su kien xay ra se khac nhau
	double luong;
	printf("Xin moi nhap luong: ");
	scanf("%lf", &luong);
	printf("Luong cua ban la: %lf", luong);
	if(luong > 1000){
		printf("luong cao the\n");
	}
    double thuNhap;
    printf("Xin moi nhap luong/h: ");
    scanf("%lf", &thuNhap);
    printf("thu nhap theo h cua toi la : %lf\n", thuNhap);
    if(thuNhap > 25){
    	printf("thu nhap cao\n");
    } else  {
    	printf("thu nhap thap\n");
	}
    double diemDH;
    printf("Xin moi nhap diem: ");
	scanf("%lf", &diemDH);
	printf("diemDH cua ban la: %lf", diemDH);
	if(diemDH > 25){
		printf("Nguyen vong 1\n");
	} else if (diemDH <= 25 && diemDH >= 18){
		printf("Nguyen vong 2\n");
	} else {
		printf("Truot dh\n");
	}
	// && : &, || : hoac
}
