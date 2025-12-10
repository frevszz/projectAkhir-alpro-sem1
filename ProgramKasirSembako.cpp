#include <iostream>
#include <iomanip>
using namespace std;

string namaBarang[] = {"Beras 10kg", "Minyak Goreng 2L", "Gula 1kg", "Telur 1kg", "Susu Kotak"};
float hargaBarang[] = {130000, 30000, 15000, 30000, 15000};
int jumlahJenisBarang = 5;

struct Belanjaan {
    int nomorBarang;
    int jumlah;
    float subtotal;
};

void tampilkanMenu() {
    cout << "\n========================================" << endl;
    cout << "           DAFTAR BARANG" << endl;
    cout << "========================================" << endl;
    cout << "No  Nama Barang           Harga" << endl;
    cout << "----------------------------------------" << endl;
    for(int i = 0; i < jumlahJenisBarang; i++) {
        cout << (i+1) << ".  " << left << setw(20) << namaBarang[i] 
             << " Rp" << fixed << setprecision(0) << hargaBarang[i] << endl;
    }
    cout << "========================================" << endl;
}

float hitungTotal(Belanjaan keranjang[], int jumlahBelanja) {
    float total = 0;
    for(int i = 0; i < jumlahBelanja; i++) {
        int idx = keranjang[i].nomorBarang - 1;
        keranjang[i].subtotal = hargaBarang[idx] * keranjang[i].jumlah;
        total += keranjang[i].subtotal;
    }
    return total;
}

float hitungDiskon(float total) {
    float diskon = 0;
    if(total >= 200000) {
        diskon = total * 0.15; // Diskon 15%
        cout << "\n*** Selamat! Anda mendapat diskon 15% ***" << endl;
    }
    else if(total >= 100000) {
        diskon = total * 0.10; // Diskon 10%
        cout << "\n*** Selamat! Anda mendapat diskon 10% ***" << endl;
    }
    return diskon;
}

void tampilkanStruk(Belanjaan keranjang[], int jumlahBelanja, float total, float diskon, float bayar, float kembalian) {
    cout << "\n\n========================================" << endl;
    cout << "              STRUK BELANJA" << endl;
    cout << "========================================" << endl;
    cout << "Barang yang dibeli:" << endl;
    cout << "----------------------------------------" << endl;  
    for(int i = 0; i < jumlahBelanja; i++) {
        int idx = keranjang[i].nomorBarang - 1;
        cout << namaBarang[idx] << " x" << keranjang[i].jumlah << endl;
        cout << "  Rp" << fixed << setprecision(0) << hargaBarang[idx] 
             << " x " << keranjang[i].jumlah 
             << " = Rp" << keranjang[i].subtotal << endl;
    }
    
    cout << "----------------------------------------" << endl;
    cout << "Total Belanja		: Rp" << total << endl;
    if(diskon > 0) {
        cout << "Diskon			: Rp" << diskon << endl;
        cout << "Total Bayar	: Rp" << (total - diskon) << endl;
    } else {
        cout << "Total Bayar	: Rp" << total << endl;
    }
    
    cout << "Uang Dibayar	: Rp" << bayar << endl;
    cout << "Kembalian		: Rp" << kembalian << endl;
    cout << "========================================" << endl;
    cout << "      Terima Kasih Sudah Berbelanja Cuy" << endl;
    cout << "========================================" << endl;
}

int main() {
    Belanjaan keranjang[50]; 
    int jumlahBelanja = 0;
    char lanjut;
    cout << "========================================" << endl;
    cout << "        PROGRAM KASIR " << endl;
    cout << "========================================" << endl;

    do {
        tampilkanMenu();
        int pilihan, jumlah;
        cout << "\nPilih nomor barang (1-" << jumlahJenisBarang << ") : ";
        cin >> pilihan;
        if(pilihan < 1 || pilihan > jumlahJenisBarang) {
            cout << "1 - 5 Woy!" << endl;
            return pilihan;
        }
        
        cout << "Jumlah : ";
        cin >> jumlah;
        if(jumlah <= 0) {
            cout << "Minimal Satu Kalo Bertransaksi itu!" << endl;
            continue;
        }
        
        keranjang[jumlahBelanja].nomorBarang = pilihan;
        keranjang[jumlahBelanja].jumlah = jumlah;
        jumlahBelanja++;
        cout << "\n" << namaBarang[pilihan-1] << " x" << jumlah << " Ditambahkan ke Keranjang." << endl;
        cout << "\nTambah Barang Lagi? (y/n) : ";
        cin >> lanjut;
    } while(lanjut == 'y' || lanjut == 'Y');
    
    float totalBelanja = hitungTotal(keranjang, jumlahBelanja);
    float diskon = hitungDiskon(totalBelanja);
    float totalBayar = totalBelanja - diskon;
    float uangDibayar;
    cout << "\n========================================" << endl;
    cout << "Total Yang Harus Dibayar : Rp" << fixed << setprecision(0) << totalBayar << endl;
    cout << "Masukkan Uang Pembayaran : Rp";
    cin >> uangDibayar;
    if(uangDibayar < totalBayar) {
        cout << "\nGak cukup woy! Transaksi Tidak Sah!!!" << endl;
        return 1;
    }
    
    float kembalian = uangDibayar - totalBayar;
    tampilkanStruk(keranjang, jumlahBelanja, totalBelanja, diskon, uangDibayar, kembalian);
    return 0;
}
