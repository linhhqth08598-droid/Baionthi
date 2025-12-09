#include<stdio.h>
int main() {
    int thang, nam;
    printf("Nhap thang nam.\n");
    printf("Xin moi nhap thang: ");
    scanf("%d", &thang);
    printf("Xin moi nhap nam: ");
    scanf("%d", &nam);
    // nam nhuan
    int namNhuan = 0;
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
    	// vi nam phai chi het cho 4 va khong chia het cho 100 moi la nam nhuan
    	// hoac chi het cho 400
        namNhuan = 1;
        printf("Nam %d la nam nhuan.\n", nam);
    } else {
        printf("Nam %d khong phai nam nhuan.\n", nam);
    }
    // tinh so ngay
    switch(thang) {
        case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10: 
		case 12:
            printf("Thang %d co 31 ngay.\n", thang);
            break;
        case 4: 
		case 6: 
		case 9: 
		case 11:
            printf("Thang %d co 30 ngay.\n", thang);
            break;
        case 2:
            if (namNhuan) {
                printf("Thang 2 co 29 ngay (Nam nhuan).\n");
            } else {
                printf("Thang 2 co 28 ngay.\n");
            }
            break;
        default:
            printf("Thang khong hop le!\n");
	}
}
