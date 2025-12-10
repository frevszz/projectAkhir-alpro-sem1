#include <iostream>
#include <string>
using namespace std;

int main() {
		int pilih;
		string nama, nim, notasi, sifat;
		char pilihPadu;
		cout << "--------------------------------------------------------------------\n";
		cout << " 	Nama	: "; getline(cin, nama);
		cout << " 	NIM	: "; getline(cin, nim); 
		cout << "--------------------------------------------------------------------\n";
		cout<<endl;
		cout << "Program menentukan Notasi, Sifat Warna, dan Perpaduan Warna Harmonis\n";
		cout << "Warna-warna : \n";
		cout << "1. Orange	  2. Red-Orange	3. Red\n";
		cout << "4. Red-Violet	  5. Violet	6. Blue-Violet\n";
		cout << "7. Blue		  8. Blue-Green	9. Green\n";
		cout << "10. Yellow-Green  11. Yellow	12. Yellow-Orange\n";
		cout << endl;
		cout << "Pilihan Warna nomor : ";
		cin >> pilih;
		cout << endl;
		
		if (pilih == 3 || pilih == 7 || pilih == 11)
        notasi = "Primer";
		else if (pilih == 1 || pilih == 5 || pilih == 9)
        notasi = "Sekunder";
		else
        notasi = "Tersier";

		if (pilih == 1 || pilih == 2 || pilih == 3 || pilih == 4 || pilih == 5 || pilih == 12 || pilih == 11)
        sifat = "Hangat";
		else
        sifat = "Dingin";
		
		
		cout << "Notasi Warna : " << notasi << endl;
		cout << "Sifat Warna : " << sifat <<endl;
					
		cout << "Perpaduan Warna Harmonis\n";
		cout << "a. Perpaduan Warna Analogus\n";
		cout << "b. Perpaduan Warna Complementary\n";
		cout << "c. Perpaduan Warna Split Complementary\n";
		cout << "d. Perpaduan Warna Triadic Complementary\n";
		cout << "e. Perpaduan Warna Tetrad Complementary\n";
		cout << "Pilihan : ";
		cin >> pilihPadu;
		cout << endl;
		
		switch (pilihPadu) {
		case 'a' :  cout << "Perpaduan Warna Analogous dengan warna nomer :\n";
					if (pilih == 1) {
					cout << "2, 3 atau 11, 12 atau 2, 12\n";
					}
					else if (pilih == 2) {
					cout << "3, 4 atau 12, 1 atau 3, 1\n";
					}
					else if (pilih == 3) {
					cout << "4, 5 atau 1, 2 atau 2, 4\n";
					}
					else if (pilih == 4) {
					cout << "5, 6 atau 2, 3 atau 3, 5\n";
					}
					else if (pilih == 5) {
					cout << "6, 7 atau 3, 4 atau 4, 6\n";
					}
					else if (pilih == 6) {
					cout << "7, 8 atau 4, 5 atau 5, 7\n";
					}
					else if (pilih == 7) {
					cout << "4, 5 atau 1, 2 atau 2, 4\n";
					}
					else if (pilih == 8) {
					cout << "9, 10 atau 6, 7 atau 7, 9\n";
					}
					else if (pilih == 9) {
					cout << "10, 11 atau 7, 8 atau 8, 10\n";
					}
					else if (pilih == 10) {
					cout << "11, 12 atau 8, 9 atau 9, 11\n";
					}
					else if (pilih == 11) {
					cout << "12, 1 atau 9, 10 atau 10, 12\n";
					}
					else if (pilih == 12) {
					cout << "1, 2 atau 10, 11 atau 11, 1\n";
					}
					break;
		case 'b' :	cout << "Perpaduan Warna Complementary dengan warna nomer :\n";
					if (pilih == 1) {
					cout << "7\n";
					}
					if (pilih == 2) {
					cout << "8\n";
					}
					if (pilih == 3) {
					cout << "9\n";
					}
					if (pilih == 4) {
					cout << "10\n";
					}
					if (pilih == 5) {
					cout << "11\n";
					}
					if (pilih == 6) {
					cout << "12\n";
					}
					if (pilih == 7) {
					cout << "1\n";
					}
					if (pilih == 8) {
					cout << "2\n";
					}
					if (pilih == 9) {
					cout << "3\n";
					}
					if (pilih == 10) {
					cout << "4\n";
					}
					if (pilih == 11) {
					cout << "5\n";
					}
					if (pilih == 12) {
					cout << "6\n";
					}
					break;
		case 'c' :	cout << "Perpaduan Warna Split Complementary dengan warna nomer :\n";
					if (pilih == 1) {
					cout << "6 dan 8\n";
					}
					if (pilih == 2) {
					cout << "7 dan 9\n";
					}
					if (pilih == 3) {
					cout << "8 dan 10\n";
					}
					if (pilih == 4) {
					cout << "9 dan 11\n";
					}
					if (pilih == 5) {
					cout << "10 dan 12\n";
					}
					if (pilih == 6) {
					cout << "11 dan 1\n";
					}
					if (pilih == 7) {
					cout << "12 dan 2\n";
					}
					if (pilih == 8) {
					cout << "1 dan 3\n";
					}
					if (pilih == 9) {
					cout << "2 dan 4\n";
					}
					if (pilih == 10) {
					cout << "3 dan 5\n";
					}
					if (pilih == 11) {
					cout << "4 dan 6\n";
					}
					if (pilih == 12) {
					cout << "5 dan 7\n";
					}
					break;
		case 'd' :	cout << "Perpaduan Warna Triadic Complementary dengan warna nomer :\n";
					if (pilih==1){
					cout<<"4 dan 7\n";
					}
					if (pilih==2){
					cout<<"5 dan 8\n";
					}
					if (pilih==3){
					cout<<"6 dan 9\n";
					}
					if (pilih==4){
					cout<<"7 dan 10\n";
					}
					if (pilih==5){
					cout<<"8 dan 11\n";
					}
					if (pilih==6){
					cout<<"9 dan 12\n";
					}
					if (pilih==7){
					cout<<"10 dan 1\n";
					}
					if (pilih==8){
					cout<<"11 dan 2\n";
					}
					if (pilih==9){
					cout<<"12 dan 3\n";
					}
					if (pilih==10){
					cout<<"1 dan 4\n";
					}
					if (pilih==11){
					cout<<"2 dan 5\n";
					}
					if (pilih==12){
					cout<<"3 dan 6\n";
					}
					break;

        case 'e':	cout << "Perpaduan Warna tetrad Complementary dengan warna nomer :\n";
					if (pilih==1){
					cout<<"4,7,10\n";
					}if (pilih==2){
					cout<<"5,8,11\n";
					}if (pilih==3){
					cout<<"6,9,12\n";
					}if (pilih==4){
					cout<<"7,10,1\n";
					}if (pilih==5){
					cout<<"8,11,2\n";
					}if (pilih==6){
					cout<<"9,12,3\n";
					}if (pilih==7){
					cout<<"10,1,4\n";
					}if (pilih==8){
					cout<<"11,2,5\n";
					}if (pilih==9){
					cout<<"12,3,6\n";
					}if (pilih==10){
					cout<<"1,4,7\n";
					}if (pilih==11){
					cout<<"2,5,8\n";
					}if (pilih==12){
					cout<<"3,6,9\n";
					}
					break;
			}
			
			return 0;
}
