#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks1, teks2, hasil;

    cout << "Masukkan string pertama: "; getline(cin, teks1);
    cout << "Masukkan string kedua: "; getline(cin, teks2);
    hasil = teks1 + " " + teks2;
    cout << "Hasil penggabungan: " << hasil << endl;

    return 0;
}
