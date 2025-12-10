#include <iostream>
using namespace std;

void inputNilai(float nilai[], int jumlah) {
    cout << "\n=== INPUT NILAI SISWA ===" << endl;
    for(int i = 0; i < jumlah; i++) {
        cout << "Masukkan nilai siswa ke-" << (i+1) << ": ";
        cin >> nilai[i];
    }
}

float rataRata(float nilai[], int jumlah) {
    float total = 0;
    for(int i = 0; i < jumlah; i++) {
        total += nilai[i];
    }
    return total / jumlah;
}

float MaxNilai(float nilai[], int jumlah) {
    float Max = nilai[0];
    for(int i = 1; i < jumlah; i++) {
        if(nilai[i] > Max) {
            Max = nilai[i];
        }
    }
    return Max;
}

float MinNilai(float nilai[], int jumlah) {
    float min = nilai[0];
    for(int i = 1; i < jumlah; i++) {
        if(nilai[i] < min) {
            min = nilai[i];
        }
    }
    return min;
}

// Fungsi untuk menampilkan hasil
void tampilkanHasil(float nilai[], int jumlah) {
    cout << "\n=== HASIL ANALISIS NILAI KELAS ===" << endl;
    cout << "Jumlah siswa: " << jumlah << endl;
    cout << "\nDaftar nilai:" << endl;
    for(int i = 0; i < jumlah; i++) {
        cout << "Siswa " << (i+1) << ": " << nilai[i] << endl;
    }
    
    cout << "\n--- STATISTIK ---" << endl;
    cout << "Rata-rata nilai: " << rataRata(nilai, jumlah) << endl;
    cout << "Nilai tertinggi: " << MaxNilai(nilai, jumlah) << endl;
    cout << "Nilai terendah: " << MinNilai(nilai, jumlah) << endl;
}

int main() {
    int jumlahSiswa;
    
    cout << "========================================" << endl;
    cout << "   PROGRAM MANAJEMEN NILAI SISWA" << endl;
    cout << "========================================" << endl;
    
    cout << "Masukkan jumlah siswa : " << endl;
    cin >> jumlahSiswa;
    
    if(jumlahSiswa <= 0) {
        cout << "Jumlah siswa harus lebih dari 0!" << endl;
        return 1;
    }
    
    float nilai[jumlahSiswa];
    
    inputNilai(nilai, jumlahSiswa);
    
    tampilkanHasil(nilai, jumlahSiswa);
    
    cout << "\n========================================" << endl;
    
    return 0;
}
