#include <iostream>
#include <string>
using namespace std;

string satuanBelasan(int angka) {
	string bilangan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
		return bilangan[angka];
}

string konversiPuluhan(int angka) {
	if (angka < 20)
		return satuanBelasan(angka);
	
	string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};
	int digit_puluh = angka / 10;
	int digit_satu = angka % 10;
	
	if (digit_satu == 0)
		return puluhan[digit_puluh];
	else
		return puluhan[digit_puluh] + " " + satuanBelasan(digit_satu);
}
		
string angkaTerbilang(int angka) {
	if (angka == 0)
	return "nol";
	else if (angka < 0)
	return "minus " + angkaTerbilang(-angka);
		
	if (angka < 100)
		return konversiPuluhan(angka);
		
	return "Melebihi Limit!";
}
	
int main() {
	int angka;
	char ulang;
	
	do {
		cout << "Masukan Angka : ";
		cin >> angka;
		cout << "Terbilang : " << angkaTerbilang(angka) << endl;
		cout << "Ulangi(y/t)? : ";
		cin >> ulang;
		cout << endl;
	} while (ulang == 'y' || ulang == 'Y');
	
	return 0;

	
}
