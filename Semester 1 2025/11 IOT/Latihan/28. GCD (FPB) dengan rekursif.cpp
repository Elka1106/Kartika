#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;       // Basis: jika b habis membagi a, kembalikan a
    else
        return gcd(b, a % b); // Rekurens: GCD(b, sisa a dibagi b)
}

int main() {
    int x, y;

    // Input dua bilangan
    cout << "Masukkan bilangan pertama: ";
    cin >> x;
    cout << "Masukkan bilangan kedua: ";
    cin >> y;

    // Hitung dan tampilkan GCD
    cout << "GCD (FPB) dari " << x << " dan " << y << " adalah: " << gcd(x, y) << endl;

    return 0;
}
