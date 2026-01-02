#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    
    cout << "PROGRAM MENCARI NILAI TERBESAR DARI 3 ANGKA" << endl;
    cout << "===========================================" << endl;
    
    // Input tiga angka
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << "Masukkan angka ketiga: ";
    cin >> c;
    
    // Mencari nilai terbesar
    if (a >= b && a >= c) {
        cout << "Nilai terbesar adalah: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "Nilai terbesar adalah: " << b << endl;
    } else {
        cout << "Nilai terbesar adalah: " << c << endl;
    }
    
    return 0;
}
