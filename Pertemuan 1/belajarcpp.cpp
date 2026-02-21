#include <iostream> // header standar c++, conio.h, stdio.h
#include <conio.h> //header untuk getche() dan getch()
using namespace std;

int main () {
    string nama;
    char kom, jeniskelamin;
    int nim;
    float ip;

    cout << "hello world" << endl;

    cout << "masukkan nama: ";
    // cin >> nama;
    getline(cin, nama); //agar karakter spasi bisa terbaca
    
    cout << "masukkan kom: ";
    cin >> kom;

    cout << "masukkan nim: ";
    cin >> nim;

    cout << "masukkan ip: ";
    cin >> ip;

    cout << "masukkan jenis kelamin (L/P) : "; //getche
    jeniskelamin = getche(); //agar karakter langsung tampil, jadi ga perlu tekan enter

    /* ini output */
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    // cout << jeniskelamin << endl;
    putchar(jeniskelamin); // untuk menampilkan karakter "jenis kelamin"

    getch(); //karakter yang kita ketik tidak ditampilkkan di layar
}
