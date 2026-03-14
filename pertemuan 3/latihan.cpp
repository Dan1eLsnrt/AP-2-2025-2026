#include <iostream>
using namespace std;

int main() {
    float berat, tinggi, bmi;

    cout << "Masukkan berat badan anda (kg) : ";
    cin >> berat;
    cout << "Masukkan tinggi anda (m) : ";
    cin >> tinggi;

    bmi = berat / (tinggi * tinggi);

    cout << "Bmi anda : " << bmi << endl;

    if (bmi < 18.5) {
        cout << "berat badan kurang" << endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "berat badan normal" << endl;
    } else if (bmi >= 25 && bmi < 30) {
        cout << "berat badan berlebih" << endl;
    } else {
        cout << "obesitas" << endl;
    }
}