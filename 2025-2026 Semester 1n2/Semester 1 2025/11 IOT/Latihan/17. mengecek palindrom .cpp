#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string teks, asli;
    cout << "Masukkan sebuah kata/kalimat: ";
    getline(cin, teks);
    asli = teks;
    
    teks.erase(remove(teks.begin(), teks.end(), ' '), teks.end());
    transform(teks.begin(), teks.end(), teks.begin(), ::tolower);
    string terbalik = teks;
    reverse(terbalik.begin(), terbalik.end());

    if (teks == terbalik) {
        cout << "\"" << asli << "\" adalah palindrome." << endl;
    } else {
        cout << "\"" << asli << "\" bukan palindrome." << endl;
    }
    return 0;
}
