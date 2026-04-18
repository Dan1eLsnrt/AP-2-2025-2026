#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    // Array deciaration & initialization
    // 2 cara membuat array

    // // cara 1 : array kosong > punya array tapi masih kosong (isi manual)
    // string nama[5];
    // nama[0] = "Alya";
    // nama[1] = "Parul";
    // nama[2] = "Hana";
    // nama[3] = "Dewi";
    // nama[4] = "Padhil";

    // // Cara 2 : array langsung diisi
    string nama[5] = {"Alya", "Parul", "Hana", "Dewi", "Padhil"};  // hanya 1 dimensi
    // string nama[] = {"Alya", "Parul", "Hana", "Dewi", "Padhil"};

    // // Menampilkan dara dalam array
    // cout << nama[0] << endl;
    // cout << nama[4] << endl;

    // // Menggunakan Looping ascending
    // for(int i = 0; i < 5; i++){
    //     cout << nama[i] << endl;
    // }

    // // descending
    // for(int i = 4; i >= 0; i--){
    //     cout << nama[i] << endl;
    // }

    //     // Multidimensi Array
    //     // 1 2 3
    //     // 4 5 6

    //     int matrix[2][3] = {{1,2,3}, {4,5,6}};
    //     for(int i = 0; i < 2; i++){
    //         for(int j = 0; j < 3; j++){
    //         cout << matrix[i][j]<< " ";
    //     }
    //     cout << endl;
    //   }

    // // String (Array of char)
    // string nama = "Daniel";
    // cout << nama[0] << endl;
    // cout << nama[2] << endl;

    // cout << nama.length(); // untuk menghitung jumlah karakter di dalam string


    // string s1 = "Hello";
    // string s2 = "World";

    // // 1. s1 = s2
    // s1 = s2;
    // cout << "s1 sekarang = " << s1 << endl;

    // // 2. s1 = s1 + s2
    // s1 = "Hello"; //reset nilai
    // cout << "hasil gabungan = " << s1 + s2 << endl;

    // // 3. s1.length()
    // cout << s1.length() << endl; //5
    // cout << (s1 + s2).length() << endl; //10

    // // 4. s1.substring(n,m) n mulai dari berapa, m panjang dari berapa
    // cout << s1.substr(2, 3) << endl;

    // // Operator sizeof >> ngecek berapa memori yang kita pakai dan brpa yang disediain compailer
    // int angka = 10;
    // cout << sizeof(angka); //4

    // int nilai[] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai);

    // // Array Library
    // // Misal Array biasa : float nilai[5]

    // array<float,5> nilai = {87.5, 90, 100, 95.7, 78.3};
    // cout << "Nilai : ";
    
    // for(int i = 0; i < nilai.size(); i++){
    //     cout << nilai[i] << " ";
    // }

    
 }