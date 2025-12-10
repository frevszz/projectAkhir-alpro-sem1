//PROGRAM KONVERSI NILAI KE GRADE (A-E)
#include <iostream>
using namespace std;

const int maks = 100;
string nama[maks], nim[maks], grade[maks];
float nilai[maks];
int jumlah = 0, tambahan;
char tambah;

void inputData() {
    cout<<"=== INPUT DATA MAHASISWA ===\n";
    cout<<"Masukkan jumlah mahasiswa: ";
    cin>>tambahan;
    cin.ignore();
    for (int i = jumlah; i < jumlah + tambahan; i++) {
        cout<<"Data Mahasiswa ke-"<<i+1<<"\n";
        cout<<"Nama: ";
        getline(cin, nama[i]);
        cout<<"NIM: ";
        cin>>nim[i];
        cin.ignore();
        //VALIDASI INPUT NILAI
        do {
        cout<<"Nilai: ";
        cin>>nilai[i];
        if (nilai[i] < 0 || nilai[i] > 100) {
            cout<<"Nilai harus antara 0-100. Silakan input ulang.\n";
        }
        } while (nilai[i] < 0 || nilai[i] > 100);
        cin.ignore();
        cout<<"Data berhasil disimpan!\n\n";
    }
    jumlah += tambahan;
    cout<<"Total data saat ini : "<<jumlah<<" mahasiswa.\n\n";
}

void lihatGrade() {
    if (jumlah == 0) { // TAMBAHAN: cek jika belum ada data
        cout<<"Belum ada data mahasiswa!\n\n";
        return;
        }
    string keterangan;

    cout<<"=== DAFTAR MAHASISWA ===\n";
    for (int i = 0; i < jumlah; i++) {
        if (nilai[i] >= 85 && nilai[i] <= 100) {
            grade[i] = "A";
            keterangan = "Lulus dengan sangat baik";
        } else if (nilai[i] >= 70 && nilai[i] < 85) {
            grade[i] = "B";
            keterangan = "Lulus dengan baik";
        } else if (nilai[i] >= 55 && nilai[i] < 70) {
            grade[i] = "C";
            keterangan = "Lulus";
        } else if (nilai[i] >= 40 && nilai[i] < 55) {
            grade[i] = "D";
            keterangan = "Tidak lulus";
        } else {
            grade[i] = "E";
            keterangan = "Tidak lulus";
        }
        cout<<"Mahasiswa no-"<<i+1<<"\n";
        cout<<"Nama : "<<nama[i]<<endl;
        cout<<"Nim : "<<nim[i]<<endl;
        cout<<"Nilai : "<<nilai[i]<<endl;
        cout<<"Grade : "<<grade[i]<<endl;
        cout<<"Keterangan : "<<keterangan<<endl;
        cout<<endl;
    }
    cout<<endl;
}

int main () {
	int menu;
    char balik;

    do {
    cout<<"=== KONVERSI NILAI ===\n";
    cout<<"1. Input Data Mahasiswa\n";
    cout<<"2. Lihat Grade\n";
    cout<<"3. Keluar\n";
    cout<<"Pilih menu (1-3): ";
    cin>>menu;
    cout<<endl<<endl;

    switch (menu) {
        case 1 : do {
                 inputData();
                 cout<<"Apakah ingin menambah data (y/n) : ";
                 cin>>tambah;
                 cin.ignore();
                 cout<<endl;
                 } while (tambah == 'y' || tambah == 'Y');
                 break;
        case 2 : lihatGrade();
                 break;
        case 3 : cout<<"Terima kasih telah menggunakan program ini!\n";
                 return 0;
                 break;
        default : cout<<"Menu tidak valid. Silakan pilih menu 1-3.\n";
                 break;
    }
	cout<<"Kembali ke menu (y/n) : ";
    cin>>balik;
    cin.ignore();
    cout<<endl;
    } while (balik == 'y' || balik == 'Y');

    cout<<"Terima kasih telah menggunakan program ini!\n";
    return 0;
}
