#include <iostream>
#include <string>
#include <cctype> // untuk tolower
using namespace std;

int main() {
    string teks;
    int vokal = 0, konsonan = 0;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, teks);

    for (char c : teks) {
        if (isalpha(c)) { // cek apakah huruf
            char huruf = tolower(c);
            if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o') {
                vokal++;
            } else {
                konsonan++;
            }
        }
    }
    cout << "Jumlah huruf vokal     : " << vokal << endl;
    cout << "Jumlah huruf konsonan : " << konsonan << endl;
    return 0;
}
