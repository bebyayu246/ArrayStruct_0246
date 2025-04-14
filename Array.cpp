#include <iostream>
using namespace std;

string nama[] = {"joko", "jako", "juko",};

float kecepatan[3] = {73.3 , 83.9 , 99.9};

float waktu [4];

int main(){
    cout << "data ke- 2" << nama[1] << endl;
    nama[1] = "gibran";
    cout << "data ke- 2" << nama[1] << endl;
    

    for (int i = 0; i < 3; i++)
    {
        cout << " kecepatan ke- " << i+1 << " = " << kecepatan[1] << endl;
    }

    for ( int i = 0; i < 4; i++ )
    {
        cout << "Data ke-" << i + 1 << endl;
        cout << " Masukkan waktu = ";
        cin >> waktu[i];
    }
    cout << endl;
    cout << "Tampilkan waktu" << endl;

    cout << endl;

    
    for (int i = 0; i < 4; i++)
    {
        cout << " Waktu ke- " << i + 1 <<  " = " << waktu[i] << endl;
    }
};