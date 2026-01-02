#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int angka;
    cout << "Masukkan bilangan: ";
    cin >> angka;

    if (angka < 0) {
        cout << "Faktorial tidak terdefinisi untuk bilangan negatif." << endl;
    } else {
        cout << "Faktorial dari " << angka << " adalah: " << faktorial(angka) << endl;
    }
    return 0;
}
