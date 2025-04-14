#include <iostream>
using namespace std;

#include <string>

struct Buku  {
    string judul;
    string JumlahHalaman;
    string pengarang;
};

int main(){
    Buku bk[2];

    for (int i = 0; i < 2; i++)
    {
    cout << " masukkan judul = ";
    getline(cin, bk[i].judul);
    cout << " masukkan jumlah halaman = ";
    cin >> bk[i].JumlahHalaman;
    cin.ignore();
    cout << " Masukkan Pengarang = ";
    getline(cin, bk[i].pengarang);
    

    }


    cout << endl;
    cout << "tampilkan data buku " << endl;
    cout << endl;
    for (int i = 0; i < 2; i++)

    {
    cout << "Judul buku = " << bk[i].judul << endl;
    cout << " jumlah halaman buku = " << bk[i].JumlahHalaman << endl;
    cout << " pengarang buku = " << bk[i].pengarang << endl;
    }
    


}