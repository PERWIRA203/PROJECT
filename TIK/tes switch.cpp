#include <iostream>
using namespace std;


int main() {
	int cas;
  cout<<"masukkan case : ";
  cin>>cas;
  
  switch (cas) {
  case 1:
  	float a,t,luas;
    cout << "nilai alas = ";
    cin>>a;
    cout<<"nilai tinggi = ";
    cin>>t;
    luas = a*t*1/2;
    cout<<"jadi nilai alas segitiga = "
    <<luas;
    break;
  case 2:
    cout << "ulang  kembali";
    break;
  case 3:
    cout << "wow";
    break;

	default:
		cout<<"tidak terbaca";
		break;
  }
}

