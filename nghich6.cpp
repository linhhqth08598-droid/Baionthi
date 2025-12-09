#include <stdio.h>

int main() {
    char op;
    double a, b;
    
    printf("Nhap phep tinh (+, -, *, /): ");
    scanf("%c", &op);
    
    printf("Nhap hai so: ");
    scanf("%lf %lf", &a, &b);
    
    if (op == '+') {
        printf("Ket qua: %.2lf\n", a + b);
    } else if (op == '-') {
        printf("Ket qua: %.2lf\n", a - b);
    } else if (op == '*') {
        printf("Ket qua: %.2lf\n", a * b);
    } else if (op == '/') {
        if (b != 0) {
            printf("Ket qua: %.2lf\n", a / b);
        } else {
            printf("Loi: Khong the chia cho 0!\n");
        }
    } else {
        printf("Phep tinh khong hop le!\n");
    }
    
    return 0;
}
