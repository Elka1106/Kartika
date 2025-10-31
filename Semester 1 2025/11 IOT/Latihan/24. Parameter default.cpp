#include <iostream>
using namespace std;

double hitungTotal(double harga, double diskon = 0.10) {
    return harga - (harga * diskon);
}

int main() {
    double hargaBarang;

    cout << "Masukkan harga barang: ";
    cin >> hargaBarang;

    cout << "Total harga dengan diskon default (10%): Rp" 
         << hitungTotal(hargaBarang) << endl;

    double diskonUser;
    cout << "Masukkan diskon (dalam persen, contoh: 0.2 untuk 20%): ";
    cin >> diskonUser;
    cout << "Total harga dengan diskon " << (diskonUser * 100) << "%: Rp" 
         << hitungTotal(hargaBarang, diskonUser) << endl;
    return 0;
}
