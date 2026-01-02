#include <iostream>
#include <cmath> // untuk fungsi sqrt()
using namespace std;
bool isPrime(int n) {
    if (n <= 1) {
        return false; // bilangan <= 1 bukan prima
    }
    if (n == 2) {
        return true; // 2 adalah bilangan prima
    }
    if (n % 2 == 0) {
        return false; // bilangan genap selain 2 bukan prima
    }
        // Cek pembagi dari 3 hingga akar kuadrat n
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false; // ditemukan pembagi
        }
    }
    return true; // bilangan prima
}

int main() {
    int number;
    
    cout << "Masukkan sebuah bilangan: ";
    cin >> number;
    
    if (isPrime(number)) {
        cout << number << " adalah bilangan PRIMA" << endl;
    } else {
        cout << number << " adalah BUKAN bilangan prima" << endl;
    }
    
    return 0;
}
