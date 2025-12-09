#include <stdio.h>

int main() {
    int chieuCao, i, j, k;

    printf("Nhap chieu cao cua cay thong (vi du: 10): ");
    scanf("%d", &chieuCao);

    printf("\n");

    // 1. Ve tan la
    for (i = 1; i <= chieuCao; i++) {
        // In khoang trang de can giua
        for (j = 1; j <= chieuCao - i; j++) {
            printf(" ");
        }
        // In dau sao (*) tao hinh la
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Xuong dong
        printf("\n");
    }

    // 2. Ve than cay
    // Than cay rong 3 ky tu, cao 3 dong (ban co the chinh sua tuy thich)
    for (i = 1; i <= 3; i++) {
        // Can giua than cay
        for (j = 1; j <= chieuCao - 2; j++) {
            printf(" ");
        }
        printf("***\n");
    }

    return 0;
}
