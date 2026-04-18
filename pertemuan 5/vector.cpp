#include <iostream>
#include <vector>
using namespace std;
int main () {
    // Vector Declaration & Initialization
    vector<string> nama_karyawan = {"Alya", "Parul", "Hana", "Dewi", "Padhil"};

    // //Menampilkan Data Ascending
    // for(int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    // Add data to vector
    nama_karyawan.push_back("Edric");

    // //Menampilkan Data Ascending
    // for(int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    // Delete dara from vector >> 
    nama_karyawan.pop_back(); >> otomatis hapus paling belakang
    nama_karyawan.erase(nama_karyawan.begin() + 3); // hapus index ke-3 dari depan

    //Menampilkan Data Ascending
    for(int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
    }
}