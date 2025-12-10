#include <iostream>
using namespace std;

int main() {
		int nilai[10];
		int nilaiTinggi;
		int i, jmlMhs;
		
		i = 0;
		while (i < 10) { 
		cout<<"Masukkan Nilai : ";
		cin>>nilai[i];
		i++;
		}
		
		nilaiTinggi = nilai[0];
		i = 1;
		while (i < 10) {
			if (nilai[i] > nilaiTinggi) {
				nilaiTinggi = nilai[i];
				}
				i++;
			}
		
		jmlMhs = 0;	
		i = 0;
		while (i < 10) {
			if (nilai[i] == nilaiTinggi) {
				jmlMhs++;
				}
			i++;
		}
			
		cout<<"Nilai Tertinggi : "<<nilaiTinggi<<endl;
		cout<<"Jumlah Mahasiswa dengan nilai tertinggi : "<<jmlMhs<<endl;
		
		return 0;
		
}
