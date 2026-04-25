#include <iostream>
using namespace std;

string VariabelGlobal = "Ilmu"; // contoh variabel global

void namaVariabel(){
    string VariabelLokal = "Komputer"; // contoh variabel lokal 

    // coba akses 1
    cout << VariabelLokal << endl; 

    // akses 2
    cout << VariabelGlobal << endl; // bisa dipakai di fungsi manapun
}

int main(){
    namaVariabel();

    //coba akses
    //cout << VariabelLokal << endl; // ga bisa, hanya bisa dipakai lokal sprt di atas

    //akses 3
    cout << VariabelGlobal << endl;
}