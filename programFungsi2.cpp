#include <iostream>
using namespace std;

void cariBilanganTerbesarTerkecil(int a, int b, int c, int &terbesar, int &terkecil) {
    terbesar = a;
    terkecil = a;
    
    if (b > terbesar) {
        terbesar = b;
    }
    if (b < terkecil) {
        terkecil = b;
    }
    
    if (c > terbesar) {
        terbesar = c;
    }
    if (c < terkecil) {
        terkecil = c;
    }
}

int main() {
    int bil1, bil2, bil3;
    int terbesar, terkecil;
    
    cout << "Program Mencari Bilangan Terbesar dan Terkecil" << endl;
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;
    cout << "Masukkan bilangan ketiga: ";
    cin >> bil3;
    
    // Panggil fungsi void dengan passing by reference
    cariBilanganTerbesarTerkecil(bil1, bil2, bil3, terbesar, terkecil);
    
    // Tampilkan hasil
    cout << "\n=== Hasil ===" << endl;
    cout << "Bilangan terbesar: " << terbesar << endl;
    cout << "Bilangan terkecil: " << terkecil << endl;
}
