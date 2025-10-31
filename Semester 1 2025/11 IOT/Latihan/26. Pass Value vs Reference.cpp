#include <iostream>
using namespace std;

void ubahValue(int a) {
    a = a + 10;
    cout << "Nilai di dalam fungsi (pass by value) : " << a << endl;
}
void ubahReference(int &b) {
    b = b + 10;
    cout << "Nilai di dalam fungsi (pass by reference) : " << b << endl;
}

int main() {
    int x = 5;
    int y = 5;

    cout << "Sebelum fungsi dipanggil:" << endl;
    cout << "x = " << x << " (untuk pass by value)" << endl;
    cout << "y = " << y << " (untuk pass by reference)" << endl;

    cout << "\nMemanggil fungsi pass by value..." << endl;
    ubahValue(x);
    cout << "Nilai x setelah fungsi (pass by value) : " << x << endl;

    cout << "\nMemanggil fungsi pass by reference..." << endl;
    ubahReference(y);
    cout << "Nilai y setelah fungsi (pass by reference) : " << y << endl;

    return 0;
}
