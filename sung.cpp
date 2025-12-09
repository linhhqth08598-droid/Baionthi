#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SO_LUONG_SUNG 100
#define SO_LUONG_DAN 100
#define SO_LUONG_TRANG_BI 100
#define SO_LUONG_VUNG_BAN 4

typedef struct {
    int id;
    char ten[50];
    int satThuongCoBan;
    float heSoVung[SO_LUONG_VUNG_BAN];
    int tocDoBan;
    int doChinhXac;
    int khaNangXuyenGiap;
    float heSoGiamSatThuong;
    int giaBan;
    int doHiem;
    char loaiSung[20];
} Sung;

typedef struct {
    int id;
    char ten[50];
    int satThuongBonus;
    int xuyenGiapBonus;
    int tocDoBanBonus;
    int doChinhXacBonus;
    float heSoSatThuong;
    int giaBan;
    char loaiDan[20];
} Dan;

typedef struct {
    int id;
    char ten[50];
    int giapBonus;
    int mauBonus;
    int satThuongBonus;
    int tocDoDiChuyenBonus;
    int giaBan;
    char loaiTrangBi[20];
} TrangBi;

typedef struct {
    int mau;
    int giap;
    int satThuong;
    int tocDoDiChuyen;
} Dich;

typedef struct {
    Sung sung;
    Dan dan;
    TrangBi trangBi[5];
    int soTrangBi;
    int tien;
} NguoiChoi;

void khoiTaoSung(Sung danhSachSung[]) {
    char tenSung[][50] = {
        "AK-47", "M4A4", "AWP", "Desert Eagle", "P90", "MP9", "Nova", "XM1014",
        "MAG-7", "Sawed-Off", "PP-Bizon", "UMP-45", "MP7", "FAMAS", "Galil AR",
        "SSG 08", "SCAR-20", "G3SG1", "Negev", "M249", "MAC-10", "Tec-9", "CZ75-Auto",
        "R8 Revolver", "Five-SeveN", "Glock-18", "P250", "Dual Berettas", "USP-S",
        "P2000", "MP5-SD", "AUG", "SG 553", "SCAR-17", "AK-74", "M16", "UZI",
        "Thompson", "Vector", "Kriss", "Barrett", "Dragunov", "L96A1", "PSG1",
        "M40", "M24", "AWM", "Blaser", "Accuracy", "CheyTac", "HK416", "G36",
        "TAR-21", "QBZ-95", "Type-95", "F2000", "Steyr", "VHS", "Beryl", "AKM",
        "AK-12", "AN-94", "AS Val", "VSS", "SR-3", "9A-91", "OC-14", "Groza",
        "OTs-14", "AEK-971", "AK-101", "AK-102", "AK-103", "AK-104", "AK-105",
        "M4A1-S", "M4A1", "HK433", "SCAR-L", "SCAR-H", "ACR", "Bushmaster",
        "Remington", "Winchester", "Mossberg", "Benelli", "Franchi", "Stoeger",
        "Baikal", "Zastava", "FB", "Wz", "Norinco", "Polytech", "CETME",
        "H&K", "SIG", "Beretta", "Colt", "Smith & Wesson", "Ruger", "Walther"
    };
    
    char loaiSung[][20] = {
        "Trung binh", "Tan cong", "Sung truong", "Sung luc", "Shotgun",
        "Sung tieu lien", "Sung ban tia", "Sung may", "Sung cuu long"
    };
    
    for(int i = 0; i < SO_LUONG_SUNG; i++) {
        danhSachSung[i].id = i + 1;
        strcpy(danhSachSung[i].ten, tenSung[i % 85]);
        danhSachSung[i].satThuongCoBan = 10 + (rand() % 191);
        danhSachSung[i].heSoVung[0] = 1.0 + (rand() % 100) / 10.0;
        danhSachSung[i].heSoVung[1] = 0.2 + (rand() % 30) / 10.0;
        danhSachSung[i].heSoVung[2] = 0.5 + (rand() % 50) / 10.0;
        danhSachSung[i].heSoVung[3] = 0.1 + (rand() % 20) / 10.0;
        danhSachSung[i].tocDoBan = 1 + (rand() % 20);
        danhSachSung[i].doChinhXac = 50 + (rand() % 51);
        danhSachSung[i].khaNangXuyenGiap = rand() % 101;
        danhSachSung[i].heSoGiamSatThuong = 0.1 + (rand() % 90) / 100.0;
        danhSachSung[i].giaBan = 100 + (rand() % 9900);
        danhSachSung[i].doHiem = rand() % 6;
        strcpy(danhSachSung[i].loaiSung, loaiSung[rand() % 9]);
    }
}

void khoiTaoDan(Dan danhSachDan[]) {
    char tenDan[][50] = {
        "Dan thu?ng", "Dan xuyên giáp", "Dan n?", "Dan cháy", "Dan d?c",
        "Dan di?n", "Dan bang", "Dan t?", "Dan h?t nhân", "Dan plasma",
        "Dan laser", "Dan âm thanh", "Dan khí", "Dan hóa h?c", "Dan sinh h?c",
        "Dan th?i gian", "Dan không gian", "Dan lu?ng t?", "Dan ph?n v?t ch?t",
        "Dan h? den", "Dan vu tr?", "Dan th?n thánh", "Dan qu? d?", "Dan thiên th?n",
        "Dan r?ng", "Dan phu?ng hoàng", "Dan k? lân", "Dan sói", "Dan h?",
        "Dan d?i bàng", "Dan cá m?p", "Dan b?ch tu?c", "Dan nh?n", "Dan bò c?p",
        "Dan r?n", "Dan ong", "Dan ki?n", "Dan mu?i", "Dan ru?i", "Dan gián",
        "Dan chu?t", "Dan mèo", "Dan chó", "Dan ng?a", "Dan voi", "Dan su t?",
        "Dan g?u", "Dan kh?", "Dan chim", "Dan cá", "Dan cây", "Dan hoa",
        "Dan lá", "Dan nu?c", "Dan l?a", "Dan d?t", "Dan gió", "Dan s?m",
        "Dan sét", "Dan mua", "Dan tuy?t", "Dan bão", "Dan núi l?a", "Dan d?ng d?t",
        "Dan sóng th?n", "Dan bão t?", "Dan c?c quang", "Dan ngân hà", "Dan thiên hà",
        "Dan hành tinh", "Dan m?t tr?i", "Dan m?t trang", "Dan sao", "Dan v? tinh",
        "Dan tên l?a", "Dan tàu vu tr?", "Dan UFO", "Dan robot", "Dan AI",
        "Dan cyber", "Dan matrix", "Dan metaverse", "Dan NFT", "Dan crypto",
        "Dan bitcoin", "Dan ethereum", "Dan dogecoin", "Dan shiba", "Dan blockchain",
        "Dan web3", "Dan defi", "Dan dao", "Dan gamefi", "Dan socialfi",
        "Dan VR", "Dan AR", "Dan MR", "Dan XR", "Dan 5D", "Dan 6G", "Dan quantum"
    };
    
    for(int i = 0; i < SO_LUONG_DAN; i++) {
        danhSachDan[i].id = i + 1;
        strcpy(danhSachDan[i].ten, tenDan[i]);
        danhSachDan[i].satThuongBonus = rand() % 100;
        danhSachDan[i].xuyenGiapBonus = rand() % 50;
        danhSachDan[i].tocDoBanBonus = rand() % 10;
        danhSachDan[i].doChinhXacBonus = rand() % 30;
        danhSachDan[i].heSoSatThuong = 0.5 + (rand() % 150) / 100.0;
        danhSachDan[i].giaBan = 10 + (rand() % 990);
        sprintf(danhSachDan[i].loaiDan, "Loai %d", (i % 10) + 1);
    }
}

void khoiTaoTrangBi(TrangBi danhSachTrangBi[]) {
    char tenTrangBi[][50] = {
        "Áo giáp nh?", "Áo giáp n?ng", "Mu b?o hi?m", "Kính nhìn dêm", "?ng nhòm",
        "B? d? ng?y trang", "Giày tang t?c", "Gang tay", "Bao da súng", "Dây deo",
        "B? kit so c?u", "Thu?c tang máu", "Thu?c tang sát thuong", "Thu?c tang t?c d?",
        "L?u d?n khói", "L?u d?n cháy", "L?u d?n n?", "Bom khí", "Bom t?",
        "Mìn", "B?y", "Khiên", "Guong", "Laser ch? di?m", "Máy bay do thám",
        "Robot chi?n d?u", "Drone", "Xe tang", "Tr?c thang", "Tàu chi?n",
        "Tên l?a", "V? tinh", "Tr?m vu tr?", "C?ng không gian", "Máy th?i gian",
        "C? máy lu?ng t?", "Trí tu? nhân t?o", "Siêu máy tính", "M?ng lu?i th?n kinh",
        "Thu?t toán", "Ph?n m?m", "H? di?u hành", "Vi x? lý", "Chip", "Bo m?ch",
        "Ð?ng co", "Pin", "Nang lu?ng", "Nhiên li?u", "D?u", "Khí", "Nu?c",
        "Không khí", "Ánh sáng", "Bóng t?i", "Âm thanh", "Sóng", "T? tru?ng",
        "Tr?ng l?c", "L?c h?t nhân", "L?c di?n t?", "L?c y?u", "L?c m?nh",
        "V?t ch?t", "Ph?n v?t ch?t", "Nang lu?ng t?i", "V?t ch?t t?i",
        "L? den", "L? tr?ng", "L? sâu", "Vu tr? song song", "Ða vu tr?",
        "Chi?u không gian", "Th?i gian", "Không th?i gian", "Tuong d?i",
        "Lu?ng t?", "Th?ng nh?t", "Siêu dây", "Màng", "Vu tr? h?c",
        "Thiên van", "V?t lý", "Hóa h?c", "Sinh h?c", "Toán h?c",
        "Tri?t h?c", "Tâm linh", "Tôn giáo", "Th?n tho?i", "C? tích",
        "Huy?n tho?i", "Huy?n bí", "Siêu nhiên", "Phép thu?t", "Ma thu?t"
    };
    
    for(int i = 0; i < SO_LUONG_TRANG_BI; i++) {
        danhSachTrangBi[i].id = i + 1;
        strcpy(danhSachTrangBi[i].ten, tenTrangBi[i]);  // ÐÃ S?A L?I CHÍNH T? ? ÐÂY
        danhSachTrangBi[i].giapBonus = rand() % 100;
        danhSachTrangBi[i].mauBonus = rand() % 200;
        danhSachTrangBi[i].satThuongBonus = rand() % 50;
        danhSachTrangBi[i].tocDoDiChuyenBonus = rand() % 20;
        danhSachTrangBi[i].giaBan = 50 + (rand() % 4950);
        sprintf(danhSachTrangBi[i].loaiTrangBi, "Phu kien %d", (i % 10) + 1);
    }
}

void hienThiThongTinSung(Sung sung) {
    printf("=== THONG TIN SUNG ===\n");
    printf("ID: %d\n", sung.id);
    printf("Ten: %s\n", sung.ten);
    printf("Sat thuong co ban: %d\n", sung.satThuongCoBan);
    printf("He so vung ban:\n");
    printf("  - Dau: %.1fx\n", sung.heSoVung[0]);
    printf("  - Tay: %.1fx\n", sung.heSoVung[1]);
    printf("  - Nguc: %.1fx\n", sung.heSoVung[2]);
    printf("  - Chan: %.1fx\n", sung.heSoVung[3]);
    printf("Toc do ban: %d\n", sung.tocDoBan);
    printf("Do chinh xac: %d%%\n", sung.doChinhXac);
    printf("Kha nang xuyen giap: %d%%\n", sung.khaNangXuyenGiap);
    printf("He so giam sat thuong: %.2f\n", sung.heSoGiamSatThuong);
    printf("Gia ban: %d$\n", sung.giaBan);
    printf("Do hiem: %d/5\n", sung.doHiem);
    printf("Loai sung: %s\n", sung.loaiSung);
    printf("=====================\n");
}

void hienThiThongTinDan(Dan dan) {
    printf("=== THONG TIN DAN ===\n");
    printf("ID: %d\n", dan.id);
    printf("Ten: %s\n", dan.ten);
    printf("Sat thuong bonus: %d\n", dan.satThuongBonus);
    printf("Xuyen giap bonus: %d\n", dan.xuyenGiapBonus);
    printf("Toc do ban bonus: %d\n", dan.tocDoBanBonus);
    printf("Do chinh xac bonus: %d\n", dan.doChinhXacBonus);
    printf("He so sat thuong: %.2f\n", dan.heSoSatThuong);
    printf("Gia ban: %d$\n", dan.giaBan);
    printf("Loai dan: %s\n", dan.loaiDan);
    printf("====================\n");
}

void hienThiThongTinTrangBi(TrangBi trangBi) {
    printf("=== THONG TIN TRANG BI ===\n");
    printf("ID: %d\n", trangBi.id);
    printf("Ten: %s\n", trangBi.ten);
    printf("Giap bonus: %d\n", trangBi.giapBonus);
    printf("Mau bonus: %d\n", trangBi.mauBonus);
    printf("Sat thuong bonus: %d\n", trangBi.satThuongBonus);
    printf("Toc do di chuyen bonus: %d\n", trangBi.tocDoDiChuyenBonus);
    printf("Gia ban: %d$\n", trangBi.giaBan);
    printf("Loai trang bi: %s\n", trangBi.loaiTrangBi);
    printf("========================\n");
}

int tinhSatThuong(Sung sung, Dan dan, TrangBi trangBi[], int soTrangBi, int vungBan, int khoangCach) {
    float satThuong = sung.satThuongCoBan;
    
    satThuong *= sung.heSoVung[vungBan - 1];
    
    satThuong += dan.satThuongBonus;
    satThuong *= dan.heSoSatThuong;
    
    for(int i = 0; i < soTrangBi; i++) {
        satThuong += trangBi[i].satThuongBonus;
    }
    
    float heSoKhoangCach = 1.0 - (khoangCach * 0.01);
    if(heSoKhoangCach < 0.1) heSoKhoangCach = 0.1;
    satThuong *= heSoKhoangCach;
    
    satThuong *= (1.0 - sung.heSoGiamSatThuong);
    
    return (int)satThuong;
}

int main() {
    srand(time(NULL));
    
    Sung danhSachSung[SO_LUONG_SUNG];
    Dan danhSachDan[SO_LUONG_DAN];
    TrangBi danhSachTrangBi[SO_LUONG_TRANG_BI];
    NguoiChoi nguoiChoi;
    Dich dich = {1000, 100, 50, 10};
    
    printf("KHOI TAO HE THONG...\n");
    khoiTaoSung(danhSachSung);
    khoiTaoDan(danhSachDan);
    khoiTaoTrangBi(danhSachTrangBi);
    
    printf("HE THONG DA SAN SANG!\n");
    printf("So luong sung: %d\n", SO_LUONG_SUNG);
    printf("So luong dan: %d\n", SO_LUONG_DAN);
    printf("So luong trang bi: %d\n", SO_LUONG_TRANG_BI);
    
    nguoiChoi.sung = danhSachSung[0];
    nguoiChoi.dan = danhSachDan[0];
    nguoiChoi.soTrangBi = 0;
    nguoiChoi.tien = 10000;
    
    int vienDan = 0;
    while(dich.mau > 0) {
        vienDan++;
        int vungBan = 1 + (rand() % 4);
        int khoangCach = rand() % 100;
        
        int satThuong = tinhSatThuong(nguoiChoi.sung, nguoiChoi.dan, 
                                    nguoiChoi.trangBi, nguoiChoi.soTrangBi,
                                    vungBan, khoangCach);
        
        dich.mau -= satThuong;
        
        char tenVung[10];
        switch(vungBan) {
            case 1: strcpy(tenVung, "dau"); break;
            case 2: strcpy(tenVung, "tay"); break;
            case 3: strcpy(tenVung, "nguc"); break;
            case 4: strcpy(tenVung, "chan"); break;
        }
        
        printf("\n=== VIEN DAN THU %d ===\n", vienDan);
        printf("Sung: %s\n", nguoiChoi.sung.ten);
        printf("Dan: %s\n", nguoiChoi.dan.ten);
        printf("Vung ban: %s\n", tenVung);
        printf("Khoang cach: %dm\n", khoangCach);
        printf("Sat thuong: %d\n", satThuong);
        printf("Mau dich con lai: %d\n", dich.mau > 0 ? dich.mau : 0);
        
        if(dich.mau <= 0) {
            printf("\n=== CHIEN THANG ===\n");
            printf("Ban da tieu diet ke dich!\n");
            printf("Tong so vien dan: %d\n", vienDan);
            printf("Sung su dung: %s\n", nguoiChoi.sung.ten);
            printf("Dan su dung: %s\n", nguoiChoi.dan.ten);
        }
        
        if(vienDan % 10 == 0) {
            nguoiChoi.sung = danhSachSung[rand() % SO_LUONG_SUNG];
            nguoiChoi.dan = danhSachDan[rand() % SO_LUONG_DAN];
            printf("\n*** DA DOI SUNG VA DAN ***\n");
        }
    }
    
    return 0;
}
