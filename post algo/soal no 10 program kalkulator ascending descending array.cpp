#include <iostream>
#include <algorithm>

using namespace std;

int main() {

cout << "Nama: Muhammad Yaasiin Hidayatulloh \n";
cout << "NIM: 32602200107\n\n";

// Array untuk menyimpan hasil penghitungan
int hasil[3];

// Penghitungan pertama: penjumlahan
cout << "Masukkan angka pertama: ";
int a;
cin >> a;

cout << "Masukkan angka kedua: ";
int b;
cin >> b;

hasil[0] = a + b;
cout << "Hasil penjumlahan: " << hasil[0] << endl;

// Penghitungan kedua: pengurangan
cout << "Masukkan angka pertama: ";
cin >> a;

cout << "Masukkan angka kedua: ";
cin >> b;

hasil[1] = a - b;
cout << "Hasil pengurangan: " << hasil[1] << endl;

// Penghitungan ketiga: perkalian
cout << "Masukkan angka pertama: ";
cin >> a;

cout << "Masukkan angka kedua: ";
cin >> b;

hasil[2] = a * b;
cout << "Hasil perkalian: " << hasil[2] << endl;

// Menampilkan isi array dan menyortirnya (ascending)
cout << "Isi array (ascending): ";
sort(hasil, hasil + 3);
for (int i = 0; i < 3; i++) {
    cout << hasil[i] << " ";
}
cout << endl;

// Menampilkan isi array dan menyortirnya (descending)
cout << "Isi array (descending): ";
reverse(hasil, hasil + 3);
for (int i = 0; i < 3; i++) {
    cout << hasil[i] << " ";
}
cout << endl;

return 0;
}