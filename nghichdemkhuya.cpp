#include<stdio.h>

int main(){
    char name[25], lop[6], msv[7], gtinh[4]; // gtinh c?n 4 d? ch?a 2 ký t? + newline + null? Th?c t? fgets c?n ít nh?t 4 d? d?c 2 ký t?, newline và null.
    int i;

    printf("Xin moi nhap ten: ");
    fgets(name, 25, stdin);
    // Xóa newline trong name
    for(i=0; i<25; i++) {
        if(name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }

    printf("Xin moi nhap gioi tinh: ");
    fgets(gtinh, 4, stdin); // Ð?c t?i da 3 ký t? và thêm null
    // Xóa newline trong gtinh
    for(i=0; i<4; i++) {
        if(gtinh[i] == '\n') {
            gtinh[i] = '\0';
            break;
        }
    }

    printf("Xin moi nhap lop: ");
    fgets(lop, 6, stdin);
    for(i=0; i<6; i++) {
        if(lop[i] == '\n') {
            lop[i] = '\0';
            break;
        }
    }

    printf("Xin moi nhap MSV: ");
    fgets(msv, 7, stdin);
    for(i=0; i<7; i++) {
        if(msv[i] == '\n') {
            msv[i] = '\0';
            break;
        }
    }

    // So sánh gtinh
    if( (gtinh[0]=='N' || gtinh[0]=='n') && gtinh[1]=='u' && gtinh[2]=='\0' ){
        printf("Toi ten la %s toi la, %s bi les, toi o lop %s, va msv cua toi la %s.", name, gtinh, lop, msv);
    } else {
        printf("Toi ten la %s toi la, %s bi gay, toi o lop %s, va msv cua toi la %s.", name, gtinh, lop, msv);
    }
    return 0;
}
