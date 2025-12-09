#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap chieu cao: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        // In kho?ng tr?ng
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // In sao
        for (int k = 1; k <= 2*i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
