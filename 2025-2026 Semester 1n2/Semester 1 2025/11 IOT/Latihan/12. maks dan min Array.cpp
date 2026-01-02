#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "PROGRAM MENCARI NILAI MAKSIMUM DAN MINIMUM" << endl;
    cout << "==========================================" << endl;
    
    // Input jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    
    int arr[n];
    
    // Input elemen array
    cout << "Masukkan " << n << " elemen array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }
    
    // Inisialisasi nilai max dan min
    int max = arr[0];
    int min = arr[0];
    
    // Mencari nilai maksimum dan minimum
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    // Menampilkan hasil
    cout << "\n=== HASIL ===" << endl;
    cout << "Array: [";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "]" << endl;
    
    cout << "Nilai maksimum: " << max << endl;
    cout << "Nilai minimum: " << min << endl;
    cout << "Range: " << max - min << endl;
    
    return 0;
}
