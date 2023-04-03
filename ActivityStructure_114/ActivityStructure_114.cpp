#include <iostream>
using namespace std;

struct mahasiswa
{
    string NIM;
    string nama;
    string alamat;
    int umur;
};

int main() {
    mahasiswa mhs1, mhs2;

    mhs1.NIM = "20220140114";
    mhs1.nama = "Arya Anugrah";
    mhs1.alamat = "Medan";
    mhs1.umur = 19;

    cout << "Masukkan NIM :";
    cin >> mhs2.NIM;
    cout << "Masukkan Nama :";
    cin >> mhs2.nama;
    cout << "Masukkan Alamat :";
    cin >> mhs2.alamat;
    cout << "Masukkan Umur :";
    cin >> mhs2.umur;
    
  

    
}


