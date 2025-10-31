#include <iostream>
using namespace std;

// Fungsi rekursif untuk menyelesaikan Menara Hanoi
void hanoi(int jumlahPiringan, char asal, char bantu, char tujuan) {
    if (jumlahPiringan == 1) {
        cout << "Pindahkan piringan 1 dari " << asal << " ke " << tujuan << endl;
        return;
    }

    // Langkah 1: Pindahkan n-1 piringan dari asal ke bantu
    hanoi(jumlahPiringan - 1, asal, tujuan, bantu);

    // Langkah 2: Pindahkan piringan terakhir dari asal ke tujuan
    cout << "Pindahkan piringan " << jumlahPiringan << " dari " << asal << " ke " << tujuan << endl;

    // Langkah 3: Pindahkan n-1 piringan dari bantu ke tujuan
    hanoi(jumlahPiringan - 1, bantu, asal, tujuan);
}

int main() {
    int jumlahPiringan;

    cout << "Masukkan jumlah piringan: ";
    cin >> jumlahPiringan;

    cout << "\nLangkah-langkah penyelesaian Menara Hanoi:\n";
    hanoi(jumlahPiringan, 'A', 'B', 'C'); // A: Asal, B: Bantu, C: Tujuan

    return 0;
}
