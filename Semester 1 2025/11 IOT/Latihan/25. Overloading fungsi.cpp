#include <iostream>
using namespace std;

int luas(int sisi) {
    return sisi * sisi;
}

int luas(int panjang, int lebar) {
    return panjang * lebar;
}

double luas(double jari) {
    return 3.14 * jari * jari;
}

int main() {
    int sisi, panjang, lebar;
    double jari;

    cout << "Masukkan sisi persegi : ";
    cin >> sisi;
    cout << "Luas persegi = " << luas(sisi) << endl;

    cout << "\nMasukkan panjang persegi panjang : ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang : ";
    cin >> lebar;
    cout << "Luas persegi panjang = " << luas(panjang, lebar) << endl;

    cout << "\nMasukkan jari-jari lingkaran : ";
    cin >> jari;
    cout << "Luas lingkaran = " << luas(jari) << endl;

    return 0;
}
