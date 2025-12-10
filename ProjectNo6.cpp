#include <iostream>
using namespace std;

void konversiBilangan(int bilangan, int*jam, int*menit, int*detik) {
    *jam = bilangan / 3600;
    bilangan = bilangan % 3600;
    
    *menit = bilangan / 60;
    *detik = bilangan % 60;  
}


int main() {
	int bilangan, jam, menit, detik;
	cout << "Bilangan = ";
	cin >> bilangan;
	konversiBilangan(bilangan, &jam, &menit, &detik);
	
	cout << bilangan << " Detik = " << jam << " Jam " << menit << " Menit " << detik << " Detik " << endl;
	
	return 0;
		
}
