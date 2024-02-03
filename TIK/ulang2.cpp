#include <iostream>

using namespace std;


int ra(){
	int alas;
    int tinggi;
    int luas;
    cout << "Masukkan alas: ";
    cin >> alas;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;

    luas = alas * tinggi / 2;

    cout << "Luas segitiga adalah: " << luas << endl;
	
	
}
int main() {
    char ulangi = 'y';
    int counter = 0;

    // Perulangan while
    while (ulangi == 'y' || ulangi == 'Y') {
        

        cout << "Apakah kamu mau mengulang? (y/t): ";
        cin >> ulangi;

        // Increment counter
        counter++;
    }

    cout << "\n----------\n";
    cout << "Perulangan Selesai!\n";
    cout << "Kamu mengulang sebanyak " << counter << " kali.\n";

    return 0;
}
