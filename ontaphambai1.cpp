#include<stdio.h>

float NhapCanh(){
    float canh;
    scanf("%f", &canh);
    return canh;
}

int KTCHL(float canh){
    return (canh > 0); 
}

int CMTGTT(float canh1, float canh2, float canh3){
    if (canh1 + canh2 > canh3 && 
        canh1 + canh3 > canh2 && 
        canh2 + canh3 > canh1) {
        return 1;
    } else {
        return 0;
    }
}

int KTTGC(float canh1, float canh2, float canh3){
    if (canh1 == canh2 || canh1 == canh3 || canh2 == canh3) {
        return 1;
    } else {
        return 0;
    }
}

void BaiToanCMTG(){
    printf("Xin moi nhap canh a: ");
    float a = NhapCanh();
    
    if(!KTCHL(a)){
        printf("LOI: Canh tam giac phai lon hon 0!\n");
        return;  
    }
    
    printf("Xin moi nhap canh b: ");
    float b = NhapCanh();
    if(!KTCHL(b)){
        printf("LOI: Canh tam giac phai lon hon 0!\n");
        return;
    }
    
    printf("Xin moi nhap canh c: ");
    float c = NhapCanh();
    if(!KTCHL(c)){
        printf("LOI: Canh tam giac phai lon hon 0!\n");
        return;
    }
    
    if(CMTGTT(a, b, c)){
        printf("Tam giac nay ton tai. ");
        
        if(KTTGC(a, b, c)){
            printf("Day la tam giac can.\n");
        } else {
            printf("Day la tam giac thuong.\n");
        }
    } else {
        printf("Tam giac nay KHONG ton tai.\n");
    }
}

int main(){
    BaiToanCMTG();
    return 0;
}
