#include <iostream>
using namespace std;

int main() {
    float r, volume, luas;
    const float phi = 3.14;
    
    system("cls");
    cout << "Masukkan jari-jari bola: ";
    cin >> r;

    volume = (float)4 / (float)3 * phi * r * r * r;
    luas = 4 * phi * r * r;

    cout << "Volume bola = " << volume << endl;
    cout << "Luas permukaan bola = " << luas << endl;
}