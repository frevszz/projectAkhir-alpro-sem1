#include <iostream>
#include <string>
using namespace std;

string tim[13];
int jumlah;
int count;

void inputData() {
	cout<<"\n=== INPUT DATA TIM ===\n";
	cout<<"Masukkan Jumlah tim (Max 13): ";
	cin>>jumlah;
	if (jumlah < 1 || jumlah > 13) {
		cout<<"Input gagal. Jumlah tim tidak sesuai";
		}
	for (int i = 0; i < jumlah; i++) {
		cout<<"Masukkan Nama Tim ke-"<<i+1<<" : ";
		cin>>tim[i];
		count++;
		}
	cout<<"Data Berhasil di input.\n";
	}
	
void tampilData() {
	cout<<"== DATA TIM PIALA DUNIA ==\n";
	for (int i = 0; i < jumlah; i++) {
		cout<<"1. "<<tim[i]<<endl;
		}	
	cout<<"Jumlah tim : "<<count<<endl;
	
}

int main() {
	int pilih;
	char balik;
	
	do {
		cout<<"=== PIALA DUNIA ===\n";
		cout<<"1. Input Data Tim.\n";
		cout<<"2. Tampilkan Data Tim.\n";
		cout<<"3. Keluar.\n";
		cout<<"Pilih Menu : ";
		cin>>pilih;
		
		switch (pilih) {
			case 1 : inputData();
					 cout<<endl;
					 cout<<"Kembali ke Menu (y/n) : ";
					 cin>>balik;
					 break;	
			case 2 : tampilData();
					 cout<<endl;
					 cout<<"Kembali ke Menu (y/n) : ";
					 cin>>balik;
					 cout<<endl;
					 break;
			case 3 : cout<<"Program Selesai. Sampai Jumpa\n";
					 return 0;
			}
		} while (balik == 'y' || balik == 'Y');
		
		cout<<endl;
		cout<<"Program Selesai. Sampai Jumpa\n";
}

