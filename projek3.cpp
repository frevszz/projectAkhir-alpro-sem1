#include <iostream>
using namespace std;

void hitungNilai (float &jumlah, float &ratarata) {
	jumlah = 0;
	float nilai[10] = {2, 5, 1, 2, 4, 6, 3, 2, 7, 1};
	float count = 0;
	cout << "=== Data Dalam Array ===\n";
    for(int i = 0; i<10; i++) {
		cout << nilai[i] << " ";
		}
	
	cout<<endl<<endl;
	cout << "== Data Yang lebih kecil dari 5 dan lebih besar sama dengan 7 ==\n";
	for(int i = 0; i<10; i++) {
		if (nilai[i] < 5 || nilai[i] >= 7) {
		cout << nilai[i] << " ";
		}
	}
	
	for (int i = 0; i < 10; i++) {
		if (nilai[i] < 5 || nilai[i] >= 7) {
			jumlah += nilai[i];
			count++;
			}
		}
	if(count > 0) {
		ratarata = jumlah/count;
		}
}

int main() {
    float jumlah;
    float ratarata;
	
	hitungNilai(jumlah, ratarata);
	cout<<endl<<endl;
	cout << "=== HASIL HITUNG ===\n";
	cout << "Jumlah : " << jumlah << endl;
	cout << "Rata-Rata : " << ratarata;
	
}
