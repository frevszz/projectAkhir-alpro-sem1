#include <iostream>
using namespace std;

int main() {
	string nama;
	int p, l, a, t, r, sisi, a1, a2, d1, d2, tlimas, tprisma, nim;
	float luas, luasSegitiga, volume, phi = 3.14;
	cout << "-----------------------------------------------------------" << endl;
	cout << "			Nama : ";
	cin >> nama;
	cout << "			Nim  : ";
	cin >> nim;
	cout << "-----------------------------------------------------------" << endl;
	
	int pilihan;
	cout << "Program Menghitung Luas Bangun Datar atau Volume Bangun Ruang" << endl;
	cout << "Bangun Datar [1] / Ruang [2] : ";
	cin >> pilihan;
	cout << endl;
	
	if (pilihan == 1) {
		cout << "Menghitung Luas Bangun Datar : " << endl;
		cout << "1. Persegi" << endl;
		cout << "2. Persegi Panjang" << endl;
		cout << "3. Segitiga" << endl;
		cout << "4. Lingkaran" << endl;
		cout << "5. Jajar Genjang" << endl;
		cout << "6. Belah Ketupat" << endl;
		cout << "7. Layang-Layang" << endl;
		cout << "8. Trapesium" << endl;
		cout << "Pilihan : ";
		cin >> pilihan;
		
		switch (pilihan) {
			case 1 :
				cout << "Menghitung Luas Persegi" << endl;
				cout << "Masukan Sisi Persegi = ";
				cin >> sisi;
				luas = sisi*sisi;
				cout << "Luas Persegi = " << luas << endl;
			break;
			
			case 2 : 
				cout << "Menghitung Luas Persegi Panjang" << endl;
				cout << "Masukan Panjang = " << endl;
				cin >> p;
				cout << "Masukan Lebar = " << endl;
				cin >> l;
				luas = p*l;
				cout << "Luas Persegi Panjang = " << luas << endl;
			break;
			
			case 3 :
				cout << "Menghitung Luas Segitiga" << endl;
				cout << "Masukan Alas = " << endl;
				cin >> a;
				cout << "Masukan Tinggi = " << endl;
				cin >> t;
				luas = 0.5*a*t;
				cout << "Luas Segitiga = " << endl;
			break;
			
			case 4 :
				cout << "Menghitung Luas Lingkaran" << endl;
				cout << "Masukan Jari-Jari = " << endl;
				cin >> r;
				luas = phi*r*r;
				cout << "Luas Lingkaran = " << luas << endl;
				break;
				
			case 5 :
				cout << "Menghitung Luas Jajar Genjang" << endl;
				cout << "Masukan Alas = ";
				cin >> a;
				cout << "Masukan Tinggi = ";
				cin >> t;
				luas = a*t;
				cout << "Luas Jajar Genjang = " << luas << endl;
				break;

			case 6:
				cout << "Menghitung Luas Belah Ketupat" << endl;
				cout << "Masukan Diagonal Satu = " << endl;
				cin >> d1;
				cout << "Masukan Diagonal Dua = " << endl;
				cin >> d2;
				luas = 0.5*d1*d2;
				cout << "Luas Belah Ketupat = " << luas << endl;
				break;

			case 7:
				cout << "Menghitung Luas Layang-Layang" << endl;
				cout << "Masukan Diagonal Satu = " << endl;
				cin >> d1;
				cout << "Masukan Diagonal Dua = " << endl;
				cin >> d2;
				luas = 0.5*d1*d2;
				cout << "Luas Layang-Layang = " << luas << endl;
				break;
        
			case 8:
				cout << "Menghitung Luas Trapesium" << endl;
				cout << "Masukan Panjang Alas Pertama : " << endl;
				cin >> a1;
				cout << "Masukan Panjang Alas Kedua = " << endl;
				cin >> a2;
				cout << "Masukan Tinggi = ";
				cin >> t;
				luas = 0.5*(a1+a2)*t;
				cout << "Luas Trapesium = " << luas << endl;
				break;
			}
		}
		if (pilihan == 2) {
			cout << "Menghitung Volume Bangun Ruang : " << endl;
			cout << "1. Kubus" << endl;
			cout << "2. Balok" << endl;
			cout << "3. Tabung" << endl;
			cout << "4. Bola" << endl;
			cout << "5. Kerucut" << endl;
			cout << "6. Limas Segitiga" << endl;
			cout << "7. Limas Segiempat" << endl;
			cout << "8. Prisma Segitiga" << endl;
			cout << "Pilihan : ";
			cin >> pilihan;
			
			switch (pilihan) {
				case 1 :
					cout << "Menghitung Volume Kubus" << endl;
					cout << "Masukkan Nilai Sisi = ";
					cin >> sisi;
					volume = sisi*sisi*sisi;
					cout << "Volume Kubus = " << volume << endl;
					break;
					
				case 2 :
					cout << "Mengitung Volume Balok" << endl;
					cout << "Masukkan Panjang = ";
					cin >> p;
					cout << "Masukkan Lebar = ";
					cin >> l;
					cout << "Masukkan Tinggi = ";
					cin >> t;
					volume = p*l*t;
					cout << "Volume Balok = " << volume << endl;
					break;
					
				case 3 :
					cout << "Menghitung Volume Tabung" << endl;
					cout << "Masukkan Jari-Jari Tabung = ";
					cin >> r;
					cout << "Masukkan Tinggi Tabung = ";
					cin >> t;
					volume = r*t;
					cout << "Volume Tabung = " << volume << endl;
					break;
					
				case 4 :
					cout << "Mengitung Volume Bola" << endl;
					cout << "Masukkan Jari-Jari = ";
					cin >> r;
					volume = 1.3*phi*r*r*r;
					cout << "Volume Bola = " << volume << endl;
					break;
					
				case 5 :
					cout << "Menghitung Kerucut" << endl;
					cout << "Masukkan Jari-Jari";
					cin >> r;
					cout << "Masukkan Tinggi";
					cin >> t;
					volume = 0.3*phi*r*r*r;
					cout << "Volume Kerucut = " << endl;
					break;
					
				case 6 :
					cout << "Menghitung Limas Segitiga" << endl;
					cout << "Masukkan Alas = ";
					cin >> a;
					cout << "Masukkan Tinggi Segitiga = ";
					cin >> t;
					cout << "Masukkan Tinggi Limas = ";
					cin >> tlimas;
					luasSegitiga = 0.5*a*t;
					volume = 0.3*luasSegitiga*tlimas;
					cout << "Volume Limas Segitiga = " << volume << endl;
					break;
					
				case 7 :
					cout << "Menghitung Limas Segiempat" << endl;
					cout << "Masukkan Panjang = ";
					cin >> p;
					cout << "Masukkan Lebar = ";
					cin >> l;
					cout << "Masukka Tinggi = ";
					cin >> t;
					volume = 0.3*p*l*t;
					cout << "Volume Limas Segiempat = " << volume << endl;
					break;
				
				case 8 :
					cout << "Menghitung Prisma Segitiga" << endl;
					cout << "Masukkan Alas = ";
					cin >> a;
					cout << "Masukkan Tinggi Segitiga = ";
					cin >> t;
					cout << "Masukkan Tinggi Prisma = ";
					cin >> tprisma;
					luasSegitiga = 0.5*a*t;
					volume = luasSegitiga*tprisma;
					cout << "Volume Prisma Segitiga = " << volume << endl;
					break;
				}
			}		
	
	
}
