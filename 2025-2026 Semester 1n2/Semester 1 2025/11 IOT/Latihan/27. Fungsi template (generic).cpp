#include <iostream>
using namespace std;

template <typename T>
void tukar(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T maksimum(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    int a = 10, b = 20;
    cout << "Sebelum tukar (int): a = " << a << ", b = " << b << endl;
    tukar(a, b);
    cout << "Setelah tukar (int): a = " << a << ", b = " << b << endl;

    double x = 5.5, y = 3.3;
    cout << "\nNilai maksimum (double): " << maksimum(x, y) << endl;

    string s1 = "Teknik", s2 = "Jaringan";
    cout << "\nSebelum tukar (string): s1 = " << s1 << ", s2 = " << s2 << endl;
    tukar(s1, s2);
    cout << "Setelah tukar (string): s1 = " << s1 << ", s2 = " << s2 << endl;
    return 0;
}
