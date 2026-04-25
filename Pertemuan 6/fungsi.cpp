#include <iostream>
using namespace std;

//Fungsi tanpa nilai balikan (void)
void tampilkanPesan() {
    cout << "======== Selamat Datang di AP 2 ! ========" << endl;
}

//Fungsi dengan nilai balikan (int, double, float dsb...)
int tambah(int a, int b){
    return a + b;
}

//Fungsi overload, fungsi dengan nama yang sama, tapi parameter nya beda, tipe nya beda
int kali(int a, int b){
    return a * b;
}

double kali(double a, double b){
    return a * b;
}

//Fungsi recursive, fungsi yang memanggil dirinya sendiri
int faktorial (int n){
    if (n == 0 || n == 1) { //base case, memberhentikan program
        return 1;
    } else {
        return n * faktorial(n-1); // recursive case, memanggil fungsi itu sendiri
    }
}

int main() {
    system("CLS");

    // memanggil fungsi tanpa nilai balikan
    tampilkanPesan();

    // memanggil fungsi dengan nilai balikan
    int x = 5, y = 3;
    int hasilTambah = tambah(x, y);
    cout << "Hasil Penjumlahan : " << hasilTambah << endl;

    // menggunakan fungsi oberload
    int hasil_kali_int = kali(x, y);

    double n = 3, m = 5;
    double hasil_kali_double = kali(n, m);

    cout << "Hasil Perkalian (int) : " << hasil_kali_int << endl;
    cout << "Hasil Perkalian (double) : " << hasil_kali_double << endl;

    // menggunakan fungsi recursive 
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl; 

}