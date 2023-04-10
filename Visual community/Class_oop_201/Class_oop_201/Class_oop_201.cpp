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
        cout << "\nMasukkan Kode MK = ";
        cin >> kode;
        cout << "\nMasukkan Nama MK = ";
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

    cout << "Masukkan Nama = ";
    cin >> mhs.nama;
    cout << "Masukkan NIM = ";
    cin >> mhs.nim;

    mhs.tampil();
    mk.inputMK();
    mk.tampilMK();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
