#include <iostream>
#include <string>
#include <algorithm> // untuk fungsi reverse
using namespace std;

int main() {
    string teks;

    cout << "Masukkan sebuah string: ";
    getline(cin, teks);

    reverse(teks.begin(), teks.end());

    cout << "Hasil string setelah dibalik: " << teks << endl;

    return 0;
}
