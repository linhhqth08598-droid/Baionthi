#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char choiTiep;
    int tien = 1000;
    int usd = 0;  // USD thu ðý?c
    
    printf("GAME TAI XIU\n");
    printf("Ban co 1000 xu khoi dau\n");
    printf("Luat choi:\n");
    printf("- Duoi 10: Xiu (thuong x2)\n");
    printf("- Tren 12: Tai (thuong x2)\n");
    printf("- Bang 11: Nha cai an, +1 USD\n\n");
    
    do {
        int cuoc, luaChon;
        printf("So xu hien tai: %d | USD: %d\n", tien, usd);
        
        printf("\n--- CHON CUA ---\n");
        printf("1. Xiu (3-10)\n");
        printf("2. Tai (12-18)\n");
        printf("Chon cua (1-2): ");
        scanf("%d", &luaChon);
        
        if (luaChon < 1 || luaChon > 2) {
            printf("Lua chon khong hop le!\n");
            continue;
        }
        
        printf("Nhap so xu muon cuoc: ");
        scanf("%d", &cuoc);
        
        if (cuoc > tien || cuoc <= 0) {
            printf("So xu khong hop le!\n");
            continue;
        }
        
        // Lac xuc xac
        int xucXac1 = rand() % 6 + 1;
        int xucXac2 = rand() % 6 + 1;
        int xucXac3 = rand() % 6 + 1;
        int tong = xucXac1 + xucXac2 + xucXac3;
        
        printf("\nKet qua: [%d] [%d] [%d]\n", xucXac1, xucXac2, xucXac3);
        printf("Tong: %d - ", tong);
        
        if (tong < 10) {
            printf("XIU\n");
        } else if (tong > 12) {
            printf("TAI\n");
        } else if (tong == 11) {
            printf("NHA CAI AN\n");
        } else {
            printf("%d\n", tong);
        }
        
        // Kiem tra ket qua
        if (tong == 11) {
            // Nha cai an
            tien -= cuoc;
            usd += 1;
            printf("Nha cai an! Ban mat %d xu, nha cai +1 USD\n", cuoc);
        } else if (luaChon == 1 && tong < 10) {
            // Xiu thang
            int thuong = cuoc * 2;
            tien += thuong;
            printf("XIU THANG! Thuong: %d xu\n", thuong);
        } else if (luaChon == 2 && tong > 12) {
            // Tai thang
            int thuong = cuoc * 2;
            tien += thuong;
            printf("TAI THANG! Thuong: %d xu\n", thuong);
        } else {
            // Thua cuoc
            tien -= cuoc;
            printf("THUA CUOC! Mat: %d xu\n", cuoc);
        }
        
        // Ket thuc neu het tien
        if (tien <= 0) {
            printf("\nBan da het tien! Tro choi ket thuc.\n");
            break;
        }
        
        // Hoi choi tiep
        printf("\nTiep tuc? (y/n): ");
        scanf(" %c", &choiTiep);
        
    } while (choiTiep == 'y' || choiTiep == 'Y');
    
    printf("\n=== TONG KET ===\n");
    printf("So xu con lai: %d\n", tien);
    printf("So USD thu duoc: %d\n", usd);
    
    if (usd > 0) {
        printf("Ban da giup nha cai thu ve %d USD!\n", usd);
    }
    
    return 0;
}
