#include <iostream>
using namespace std;

int main(){
    // // goto label -> lompat ke bagian yang lain
    // // Hello world, Fasilkom-TI, Ilmu Komputer, IKLC
    // // -> Hello world, IKLC, Ilmu Komputer, Fasilkom-TI

    // a:
    //     cout << "Hello World" << endl;
    //     goto d;
    // b:
    //     cout << "Fasikom-TI" << endl;
    //     return 0;
    // c:
    //     cout << "Ilmu Komputer" << endl;
    //     goto b;
    // d:
    //     cout << "IKLC" << endl;
    //     goto c;

    // // menampilkam bilangan genap 1 -> 2 dengan goto
    // int i = 10;
    // genap:
    // if (i % 2 == 0){
    //     cout << i << " ";
    // } i--;

    // if (i >= 2){
    //     goto genap;
    // }

    // //statement while => ngecek dulu
    // int i = 1;
    // while (i <= 10){ // false kondisi i > 10
    //     if (i % 2 ==0) {
    //         cout << i << " ";
    //     } i++;
    // }

    // // statement DO - While => bakal ngelakuin dulu benar apa salah
    // int i = 1;
    // do {
    //     cout << i << endl;
    // } while (i <= 0); // false

    // // statement for => melakukan perulangan selagi true 
    // // for (inisialisasi, kondisi, increase)
    // for (int i = 1; i <= 10; i+=2) {
    //     cout << "Hello World" << endl;
    // }

    // Nested for => ada perulangan di dalam perulangan
    // * * * * * 5 x 5
    // for (int i = 1; i <= 5; i++){
    //     for (int j = 1; j <=5; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // // segitiga siku-siku
    // for (int i = 1; i <= 5; i++){
    //     for (int j = 1; j <= i; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

}