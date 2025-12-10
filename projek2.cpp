#include <iostream>
#include <cstring>
using namespace std;

void balikKalimat(char huruf[]) {
	char kata [50][50];
	int jumlahKata = 0;
	int j = 0;
	int i = 0;
	
	while (huruf[i] != '\0') {
		if (huruf[i] != ' ') {
			kata[jumlahKata][j] = huruf[i];
			j++;
		} else {
			kata[jumlahKata][j] = '\0';
			jumlahKata++;
			j = 0;
		}
		i++;
	}
	kata [jumlahKata][j] = '\0';
	jumlahKata++;
	
	cout << endl;
	cout << "=== Hasil ===\n";
	cout << "Kalimat : " << huruf << endl;
	cout << "Hasil : ";
	
	i = jumlahKata - 1;
	while (i >= 0) {
		cout << kata[i];
		if (i > 0) cout << " ";
		i--;
	}
	cout << endl;
}




int main () {
	char huruf[99];
	cout << "Kalimat : ";
	cin.getline(huruf, 99);
	
	balikKalimat(huruf);
	
	return 0;
	
	
	
}
