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

        void.display(); {
            
        }
};