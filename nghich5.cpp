#include <stdio.h>

int main() {
    // Vong lap for
    printf("Vong lap for:\n");
    for (int i = 0; i <= 1000000; i++) {
        printf("%d", i);
    }
    printf("\n");
    
    // Vong lap while
    printf("Vong lap while:\n");
    int j = 0;
    while (j <= 1000000) {
        printf("%d", j);
        j++;
    }
    
    return 0;
}
