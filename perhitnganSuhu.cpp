//PROGRAM PERHITUNGAN SUHU
#include <iostream>
using namespace std;

//VARIABEL GLOBAL
float suhu[7];

//INPUT SUHU
void inputSuhu() {
		cout<<"=== INPUT SUHU SELAMA 7 HARI ===\n";
		for (int i = 0; i < 7; i++) {
			cout<<"Hari ke -"<<i+1<<endl;
			cout<<"Suhu (Celcius) : ";
			cin>>suhu[i];
			cout<<endl;
			}
		cout<<"Data Berhasil Di Input\n";
		cout<<endl;
}

//RATA RATA SUHU
void ratarata() {
		float jumlah;
		for (int i = 0; i < 7; i++) {
			jumlah = jumlah + suhu[i];
			}
		float rataRata = jumlah / 7;
		cout<<"=== RATA RATA SUHU SELAMA SEMINGGU ===\n";
		cout<<"NO	|	HARI	|	SUHU\n";
		cout<<"======================================\n";
		for (int i = 0; i < 7; i++) {
		cout<<i+1<<"	|	"<<i+1<<"	|	"<<suhu[i]<<endl;
		}
		cout<<"======================================\n";
		cout<<"Rata-rata :		"<<rataRata<<" "<<endl;
		cout<<"======================================\n";	
}

//SUHU TERBESAR
void maxSuhu() {
	float max = suhu[0];
	int hariMax = 0;
	
	for (int i = 1; i < 7; i++) {
		if (suhu[i] > max) {
			max = suhu[i];
			hariMax = i;
		}
	}
	
	cout<<"=== SUHU TERTINGGI SELAMA SEMINGGU ===\n";
	cout<<"NO	|	HARI	|	SUHU\n";
	cout<<"======================================\n";
	cout<<hariMax+1<<"	|	"<<hariMax+1<<"	|	"<<max<<endl;
	cout<<"======================================\n";
}

//SUHU TERKECIL
void minSuhu() {
	float min = suhu[0];
	int hariMin = 0;
	
	for (int i = 1; i < 7; i++) {
		if (suhu[i] < min) {
			min = suhu[i];
			hariMin = i;
		}
	}
	
	cout<<"=== SUHU TERTINGGI SELAMA SEMINGGU ===\n";
	cout<<"NO	|	HARI	|	SUHU\n";
	cout<<"======================================\n";
	cout<<hariMin+1<<"	|	"<<hariMin+1<<"	|	"<<min<<endl;
	cout<<"======================================\n";
}

//MAIN FUNCTION
int main () {
		int menu;
		char balik;
	do {	
		cout<<"=== PROGRAM PERHITUNGAN SUHU ===\n";
		cout<<"1. Input Suhu Selama 7 hari\n";
		cout<<"2. Rata-rata suhu\n";
		cout<<"3. Suhu Tertinggi suhu\n";
		cout<<"4. Suhu Terendah suhu\n";
		cout<<"5. Keluar\n";
		cout<<"Pilih Menu : ";
		cin>>menu;
		cout<<endl;
		
		switch (menu) {
			case 1 : inputSuhu();
					 break;
			case 2 : ratarata();
					 break;
			case 3 : maxSuhu();
					 break;
			case 4 : minSuhu();
					 break;
			case 5 : cout<<"Keluar dari program. Terima kasih\n";
					 return 0;
			default : cout<<"Opsi Tidak Valid!\n";
					  break;
			
		}
		cout<<"Kembali Ke menu utama (y/n) : ";
		cin>>balik;
		cin.ignore();
		cout<<endl;
	} while (balik == 'y' || balik == 'Y');
}
