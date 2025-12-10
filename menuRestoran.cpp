#include <iostream>
using namespace std;

int main() {
    int jumlahmkn = 0, jumlahmnm = 0;

    cout<<"=== RUMAH MAKAN SARI LAUT ===\n";
    cout<<"Makanan : \n";
    cout<<"1. Gurameh Bakar     Rp. 60000\n";
    cout<<"2. Ayam Bakar        Rp. 20000\n";
    cout<<"3. Ayam Goreng       Rp. 15000\n";
    cout<<"4. Bebek Goreng      Rp. 30000\n";
    cout<<"5. Bebek Bakar       Rp. 35000\n";
    cout<<"6. Nasi              Rp. 5000\n";
    cout<<"Mau Pesan Makan Berapa : ";
    cin>>jumlahmkn;
    
    float hargamkn[jumlahmkn];
    int mkn[jumlahmkn];
    string makan[jumlahmkn];
    
    for(int i = 0; i < jumlahmkn; i++) {
        cout << "Pilih Makanan ke-" << (i+1) << " : ";
        cin >> mkn[i];
        
        switch(mkn[i]) {
        case 1: makan[i] = "Gurameh Bakar";
                hargamkn[i] = 60000; break;
        case 2: makan[i] = "Ayam Bakar";
                hargamkn[i] = 20000; break;
        case 3: makan[i] = "Ayam Goreng";
                hargamkn[i] = 15000; break;
        case 4: makan[i] = "Bebek Goreng";
                hargamkn[i] = 30000; break;
        case 5: makan[i] = "Bebek Bakar";
                hargamkn[i] = 35000; break;
        case 6: makan[i] = "Nasi";
                hargamkn[i] = 5000; break;
        default: cout << "Pilihan tidak valid!\n";
                 hargamkn[i] = 0;
        }
    }
    
    cout<<endl;
    cout<<"Minuman :\n";
    cout<<"1. Es Teh            Rp. 5000\n";
    cout<<"2. Es Jeruk          Rp. 7000\n";
    cout<<"3. Es Teler          Rp. 10000\n";
    cout<<"Mau Pesan Minum Berapa : ";
    cin>>jumlahmnm;
    
    float hargamnm[jumlahmnm];
    int mnm[jumlahmnm];
    string minum[jumlahmnm]; 
  
     for(int i = 0; i < jumlahmnm; i++) {
        cout << "Pilih Minuman ke-" << (i+1) << " : ";
        cin >> mnm[i];
        
        switch(mnm[i]) {
        case 1: minum[i] = "Es Teh";
                    hargamnm[i] = 5000; break;
        case 2: minum[i] = "Es Jeruk";
                    hargamnm[i] = 7000; break;
        case 3: minum[i] = "Es Teler";
                    hargamnm[i] = 10000; break;
        default: cout << "Pilihan tidak valid!\n";
                     minum[i] = "Tidak Valid";
                     hargamnm[i] = 0;
        }
     }
     cout<<endl;
     cout<<"===== STRUK PESANAN =====\n";
     cout<<"Makanan : \n";
     for (int i = 0; i < jumlahmkn; i++) {
     cout<<makan[i]<<"	Rp. "<<hargamkn[i]<<endl;
     }
     
     cout<<endl;
     cout<<"Minuman : \n";
     for (int i = 0; i < jumlahmnm; i++) {
        cout<<minum[i]<<"	Rp. "<<hargamnm[i]<<endl;
     }
     
     cout<<endl;
     cout<<"------ TOTAL PEMBAYARAN -----\n";
     float total = 0;
     for(int i = 0; i < jumlahmkn; i++) {
        total += hargamkn[i];
     }
     for(int i = 0; i < jumlahmnm; i++) {
        total += hargamnm[i];
     }
     
     cout<<"Total :	Rp. "<<total<<endl;
    
}
