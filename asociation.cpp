#include <iostream>
#include <vector>
using namespace std;
// nama repo :
// RelasidanInheritance

class dokter;
class pasien
{ // asosiasi
public:
    string nama;
    vector<dokter *> daftar_dokter;
    pasien(string pNama) : nama(pNama)
    {
        cout << "pasien \"" << nama << "\" ada \n";
    }
    ~pasien()
    {
        cout << "pasien \"" << nama << "\" tidak ada \n";
    }
    void tambahDokter(dokter *);
    void cetakDokter();
};
