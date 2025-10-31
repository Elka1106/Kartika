#include <iostream>
#include <sstream> 
#include <string>
using namespace std;

int main() {
    string teks;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, teks);

    stringstream ss(teks);
    string kata;
    int jumlah = 0;

    while (ss >> kata) {
        jumlah++;
    }
    cout << "Jumlah kata dalam kalimat: " << jumlah << endl;
    return 0;
}
