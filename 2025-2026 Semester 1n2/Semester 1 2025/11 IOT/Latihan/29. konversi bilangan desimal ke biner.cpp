#include <iostream>
#include <stack>

using namespace std;

void konversiDesimalKeBiner(int desimal) {
    if (desimal == 0) {
        cout << "Biner: 0" << endl;
        return;
    }

    stack<int> s;

    while (desimal > 0) {
        s.push(desimal % 2);
        desimal /= 2;
    }

    cout << "Biner: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;
}

int main() {
    int angka;

    cout << "Masukkan bilangan desimal: ";
    cin >> angka;

    if (angka < 0) {
        cout << "Program hanya mendukung bilangan desimal non-negatif." << endl;
    } else {
        konversiDesimalKeBiner(angka);
    }

    return 0;
}
