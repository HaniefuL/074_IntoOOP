#include <iostream>
using namespace std;

class bangunDatar {
    
    //akses modifier
    private:
        float panjang, lebar;
    public:
        float Luas;

        void input() { // methode input persegi panjang

            cout << "Masukan panjangnya = ";
            cin >> panjang;
            cout << "Masukan Lebarnya = ";
            cin >> lebar;
        }

        float hitungLuas() {
            return panjang * lebar;
        }

        void display(); {
            cout << "Panjangnya = " << panjang << endl;
            cout << "Lebarnya = " << Lebar << endl;
            cout << "Luasnya = " << hitunglah() << endl;
        }
};

int main() {
    bangunDatar pp; // deklarasi objek pp dari class bangunDatar
    pp.input();
    pp.display();

    return 0;
}