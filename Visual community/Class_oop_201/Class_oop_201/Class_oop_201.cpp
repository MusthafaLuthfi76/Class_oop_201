#include <iostream>
using namespace std;

class mahasiswa {
public: 
    int nim;
    string nama;
    void tampil() {
        cout << "NIM = " << nim;
        cout << "\nNama = " << nama;
    }
};

class matakuliah {
private :
    int sks;
    string kode;
    string namaMK;
public :
    void inputMK() {
        cout << "\nMasukkan jumlah SKS = ";
        cin >> sks;
        cout << "Masukkan Kode MK = ";
        cin >> kode;
        cout << "Masukkan Nama MK = ";
        cin >> namaMK;
    }
    void tampilMK() {
        cout << "\nJumlah sks = " << sks;
        cout << "\nKode MK = " << kode;
        cout << "\nNama MK = " << namaMK << endl;
    }
};

int main()
{
    mahasiswa mhs;
    matakuliah mk;

    cout << "Input Data Mahasiswa" << endl;
    cout << "\nMasukkan Nama = ";
    cin >> mhs.nama;
    cout << "Masukkan NIM = ";
    cin >> mhs.nim;

    cout << "\nInput Data Mata Kuliah" << endl;
    mk.inputMK();
    cout << "\nData Mahasiswa = \n";
    mhs.tampil();
    cout << "\n\nData Mata Kuliah =";
    mk.tampilMK();


}
