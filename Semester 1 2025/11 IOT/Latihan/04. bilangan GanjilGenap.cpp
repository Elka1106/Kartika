#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "=== Program Menentukan Bilangan Ganjil/Genap ===" << endl;
    cout << "Masukkan sebuah bilangan: ";
    cin >> angka;

    if (angka % 2 == 0) {
        cout << angka << " adalah bilangan GENAP." << endl;
    } else {
        cout << angka << " adalah bilangan GANJIL." << endl;
    }

    return 0;
}
