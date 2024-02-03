#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	float jl,jk,luas,keliling;
	float pi = M_PI;
	int cas;
	cout<<"daftar pilihan case :\n";
	cout<<"1. Program menghitung Luas lingkaran\n";
	cout<<"2. Program menghitung Keliling lingkaran\n";
	cout<<"3. Memberi nama programmer\n";
	cout<<"Selain dari 3 pilihan diatas anda keluar dari program\n";
	cout<<"Inputkan pilihan case : ";
	cin>>cas;
	
	switch (cas){
		case 1 :
			cout<<"Ini Program menghitung luas lingkaran\n";
			cout<<"Masukkan nilai Jari-jari lingkaran : ";
			cin>>jl;
			luas = pi*jl*jl;
			cout<<"Nilai luas lingkaran : "<<luas<<endl;
			cout<<"Terima kasih telah menggunakan program saya\n";
			break;
		case 2 :
			cout<<"Ini Program menghitung keliling lingkaran\n";
			cout<<"Masukkan nilai Jari-jari lingkaran : ";
			cin>>jk;
			keliling = 2*pi*jk;
			cout<<"Nilai keliling lingkaran : "<<keliling<<endl;
			cout<<"Terima kasih telah menggunakan program saya\n";
			break;
		case 3 :
			cout<<"Nama Programmer : Favian Hakim Perwira\n";
			cout<<"Kelas : 10 TKJ\n";
			cout<<"Terima kasih telah menggunakan program saya\n";
			break;
			
			default:
				cout<<"Mohon maaf pilihan anda tidak ada di daftar\n";
				cout<<"Terima kasih telah menggunakan program saya\n";
			
			
	
		}
	}
