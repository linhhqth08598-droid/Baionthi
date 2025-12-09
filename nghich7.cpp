#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int soBiMat = rand() % 100 + 1;
    int doan;
    int soLan = 0;
    
    printf("?? TRO CHOI DOAN SO (1-100) ??\n");
    
    do {
        printf("Nhap so ban doan: ");
        scanf("%d", &doan);
        soLan++;
        
        if (doan > soBiMat) {
            printf("So ban doan LON hon roi! ?\n");
        } else if (doan < soBiMat) {
            printf("So ban doan NHO hon roi! ?\n");
        } else {
            printf("?? CHUC MUNG! Ban doan dung sau %d lan!\n", soLan);
        }
    } while (doan != soBiMat);
    
    return 0;
}
 
