#include<stdio.h>

//MANG + FOR
int main(){
	int laptop;
	printf("Xin moi nhap gia laptop: ");
	scanf("%d", &laptop);
	printf("lap co gia = %d", laptop);
	//mang : chua nhieu gia tri cung kieu du lieu
	char ten[50] = "O I I";
	//char ten[50] = {"O", " ","I", " ", "I"};
	printf("\n----------------\n");
	int arr_laptop[10] = {1000, 2000, 750, 2500};
	printf("%d\n", arr_laptop[0]);//1000
	printf("%d\n", arr_laptop[1]);//2000
	printf("%d\n", arr_laptop[2]);//750
	printf("%d\n", arr_laptop[3]);//2500
	printf("%d\n", arr_laptop[4]);//0
	printf("%d\n", arr_laptop[-1]);//0
	int arr[5] = {5, 2, 6, 1, 7};
	//index       0  1  2  3  4
	//gia tri     5  2  6  1  7
	printf("------------------\n");
	int i = 0;
	while(i < 10){
		printf("%d\n", arr_laptop[0]);
		i++;
	}
	printf("--------------------");
	//for (int i = 0; i < <do dai mang>; i++)
	//for (bat dau; dieu kien lap; buoc nhay)
	for(int i = 0; i < 4; i++){
		printf("%d\n", arr_laptop[i]);
	}
	printf("--------------------");
}
