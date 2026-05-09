#include <iostream>
using namespace std;

class ContohAkses{
    private: // bisa di akses hnya dalam class yang sama
        int privateVar;
    
    protected: // bisa di akses dr dalam class itu sendiri & class turunan
        int protectedVar;

    public: // bisa di akses dimana aja 
        int publicVar; 

        // Constructor >> pemberian nilai awal
    ContohAkses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkansemua(){
            cout << "Akses dari dalam class : " << endl;
            cout << privateVar << endl;
            cout << protectedVar << endl;
            cout << publicVar << endl;
    }

};

// inheritance (pewarisan), class turunan 
class Turunan : public ContohAkses {
    public:
    void aksesProtected() {
       // cout << privateVar << endl; //error
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

int main() {
    ContohAkses obj;
    obj.tampilkansemua();

    cout << "\n Akses dari luar class : " << endl;
    // cout << obj.privateVar << endl; //error
    // cout << obj.protectedVar << endl; // error
    cout << obj.publicVar << endl;

    cout << "\n Akses dari class turunan : " << endl;
    Turunan tur;
    tur.aksesProtected(); 
}
