#include<stdio.h>

int main(){
	int n;
	printf("Xin moi nhap so luong chai sua: ");
	scanf("%d", &n);
	//khai bao mang voi do dai n
	int sua[n];
	for(int i = 0; i < n; i++){
		printf("Xin moi nhap gia cua sua %d:", i);
		scanf("%d", &sua[i]);
	}
	printf("Danh sách giá cua sua: \n");
	for(int i = 0; i < n; i++){
		printf("gia cua sua %d la %d\n", i, sua[i]);
	}
}
