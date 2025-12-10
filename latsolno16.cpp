//PROGRAM PERHITUNGAN NILAI TUGAS (NIM GENAP)
#include <iostream>
using namespace std;

int main() {
    //VARIABEL - Nilai sudah diinisialisasi sesuai tabel
    const int jumlahMhs = 4;
    float nilaiTugas1[4] = {100, 54, 75, 70};
    float nilaiTugas2[4] = {80, 65, 85, 65};
    float nilaiTugas3[4] = {80, 65, 85, 65};
    
    //HITUNG RATA-RATA TUGAS 1 DAN TUGAS 2
    float jumlahT1 = 0, jumlahT2 = 0;
    for (int i = 0; i < jumlahMhs; i++) {
        jumlahT1 += nilaiTugas1[i];
        jumlahT2 += nilaiTugas2[i];
    }
    float rataT1 = jumlahT1 / jumlahMhs;
    float rataT2 = jumlahT2 / jumlahMhs;
    
    //CARI NILAI TERTINGGI TUGAS 1 DAN TUGAS 2
    float maxT1 = nilaiTugas1[0];
    float maxT2 = nilaiTugas2[0];
    for (int i = 1; i < jumlahMhs; i++) {
        if (nilaiTugas1[i] > maxT1) maxT1 = nilaiTugas1[i];
        if (nilaiTugas2[i] > maxT2) maxT2 = nilaiTugas2[i];
    }
    
    //CARI NILAI TERENDAH TUGAS 1 DAN TUGAS 2
    float minT1 = nilaiTugas1[0];
    float minT2 = nilaiTugas2[0];
    for (int i = 1; i < jumlahMhs; i++) {
        if (nilaiTugas1[i] < minT1) minT1 = nilaiTugas1[i];
        if (nilaiTugas2[i] < minT2) minT2 = nilaiTugas2[i];
    }
    
    //TAMPILKAN TABEL
    cout<<"=== TABEL NILAI MAHASISWA (NIM GENAP) ===\n";
    cout<<"No\t|\tTugas1\t|\tTugas2\t|\tTugas3\n";
    cout<<"========================================================\n";
    for (int i = 0; i < jumlahMhs; i++) {
        cout<<i+1<<"\t|\t"<<nilaiTugas1[i]<<"\t|\t"<<nilaiTugas2[i]<<"\t|\t"<<nilaiTugas3[i]<<endl;
    }
    cout<<"========================================================\n";
    cout<<"Rata-rata:\t"<<rataT1<<"\t|\t"<<rataT2<<"\t|\t...\n";
    cout<<"Nilai Tertinggi: "<<maxT1<<"\t|\t"<<maxT2<<"\t|\t...\n";
    cout<<"Nilai Terendah:  "<<minT1<<"\t|\t"<<minT2<<"\t|\t...\n";
    cout<<"========================================================\n";
    
    return 0;
}
