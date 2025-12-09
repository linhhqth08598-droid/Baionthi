#include <stdio.h>

int main() {
    int score;
    printf("Nhap diem: ");
    scanf("%d", &score);
    
    if (score >= 8) {
        printf("Gioi!\n");
    } else if (score >= 6.5) {
        printf("Kha!\n");
    } else {
        printf("Can co gang!\n");
    }
    
    return 0;
}
