#include <iostream>
using namespace std;

struct DataMahasiswa {
    int npm;
    string nama_mahasiswa;
    string alamat_mahasiswa;
};

int main() {
    DataMahasiswa mahasiswa;

    cout << "APLIKASI SEDERHANA DATA MAHASISWA\n";
    cout << "NPM : "; cin >> mahasiswa.npm;
    cout << "Nama : "; cin.ignore(); getline(cin, mahasiswa.nama_mahasiswa);
    cout << "Alamat : "; getline(cin, mahasiswa.alamat_mahasiswa);

    cout << "\nData Mahasiswa:\n";
    cout << "NPM : " << mahasiswa.npm << endl;
    cout << "Nama : " << mahasiswa.nama_mahasiswa << endl;
    cout << "Alamat : " << mahasiswa.alamat_mahasiswa << endl;

    return 0;
}
