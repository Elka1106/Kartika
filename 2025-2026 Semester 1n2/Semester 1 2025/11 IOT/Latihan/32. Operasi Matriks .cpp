#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;
    cout << "Masukkan jumlah baris dan kolom matriks pertama: ";
    cin >> m >> n;
    cout << "Masukkan jumlah baris dan kolom matriks kedua: ";
    cin >> p >> q;

    if (n != p) {
        cout << "Perkalian matriks tidak bisa dilakukan karena kolom matriks pertama tidak sama dengan baris matriks kedua.\n";
        return 0;
    }

    int matriksA[m][n], matriksB[p][q], hasilPenjumlahan[m][n], hasilPerkalian[m][q];

    cout << "Masukkan elemen matriks pertama:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriksA[i][j];
        }
    }

    cout << "Masukkan elemen matriks kedua:\n";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> matriksB[i][j];
        }
    }

    // Penjumlahan matriks dilakukan hanya jika ukurannya sama
    if (m == p && n == q) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                hasilPenjumlahan[i][j] = matriksA[i][j] + matriksB[i][j];
            }
        }
        cout << "Hasil penjumlahan matriks:\n";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << hasilPenjumlahan[i][j] << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "Matriks tidak memiliki dimensi yang sama sehingga penjumlahan tidak dapat dilakukan.\n";
    }

    // Perkalian matriks
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            hasilPerkalian[i][j] = 0;
            for (int k = 0; k < n; k++) {
                hasilPerkalian[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    cout << "Hasil perkalian matriks:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << hasilPerkalian[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
