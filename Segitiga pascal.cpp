#include <iostream>
using namespace std;

int main() {
    int tinggi;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    for (int baris = 0; baris < tinggi; baris++) {

        for (int spasi = 0; spasi < baris; spasi++) {
            cout << " ";
        }

        int jumlahBintang = 2 * (tinggi - baris) - 1;
        for (int b = 0; b < jumlahBintang; b++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}