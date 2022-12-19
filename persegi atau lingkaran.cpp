#include <iostream>

using namespace std;

main() {
	char jenis;
	int panjang, lebar, luas, jari;
	float luaslingkar;
    
    cout << "Nama: Muhammad Yaasiin Hidayatulloh " << endl;
    cout << "NIM: 32602200107 " << endl;
	cout << "Pilih Persegi panjang<P> atau Lingkaran<L>: ";
	cin >> jenis;
	if (jenis == 'P' || jenis == 'p') {
	cout << "panjang = ";
	cin >> panjang;
	cout << "lebar = ";
	cin >> lebar;
	luas = panjang * lebar;
	cout << "Luas = " << luas << endl;
	} else if (jenis == 'L' || jenis == 'l') {
	cout << "jari-jari = ";
	cin >> jari;
	luaslingkar = 3.14 * jari * jari;
	cout << "Luas = " << luaslingkar << endl;
	} else {
        cout << "salah pilih" << endl;
	}
}
