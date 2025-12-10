#include <iostream>
#include <string>
using namespace std;


void konversiSatuan(int bilangan) {
	int km, m, cm, mm;
	
	km = bilangan / 1000000;
	bilangan = bilangan % 1000000;
	m = bilangan / 1000;
	bilangan = bilangan % 1000;
	cm = bilangan / 10;
	bilangan = bilangan % 10;
	mm = bilangan;
	
	cout << "Hasil Konversi = " << km << " km, " << m << " m, " << cm << " cm, " << mm << " mm." << endl;
}

int main() {
	int bilangan;
	cout << "Bilangan (dalam mm) = ";
	cin >> bilangan;
	konversiSatuan(bilangan);
	
	return 0;
	
}


