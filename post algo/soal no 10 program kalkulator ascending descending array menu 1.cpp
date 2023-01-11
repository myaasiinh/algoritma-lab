#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cout << "Nama: Muhammad Yaasiin Hidayatulloh \n";
    cout << "NIM: 32602200107\n\n";

    // Array untuk menyimpan hasil penghitungan
    int hasil[3];
    int i = 0; // index untuk array hasil

    int choice;
    do {
        cout << "Menu: " << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Tampilkan dan sorting hasil" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Penghitungan pertama: penjumlahan
                int a, b;
                cout << "Masukkan angka pertama: ";
                cin >> a;
                cout << "Masukkan angka kedua: ";
                cin >> b;
                hasil[i] = a + b;
                cout << "Hasil penjumlahan: " << hasil[i] << endl;
                i++;
                break;
            }
            case 2: {
                // Penghitungan kedua: pengurangan
                int a, b;
                cout << "Masukkan angka pertama: ";
                cin >> a;
                cout << "Masukkan angka kedua: ";
                cin >> b;
                hasil[i] = a - b;
                cout << "Hasil pengurangan: " << hasil[i] << endl;
                i++;
                break;
            }
            case 3: {
                // Penghitungan ketiga: perkalian
                int a, b;
                cout << "Masukkan angka pertama: ";
                cin >> a;
                cout << "Masukkan angka kedua: ";
                cin >> b;
                hasil[i] = a * b;
                cout << "Hasil perkalian: " << hasil[i] << endl;
                i++;
                break;
            }
            case 4: {
                if (i == 0) {
                    cout << "Belum ada hasil yang ditampung" << endl;
                } else {
                    cout << "Isi array (ascending): ";
                    sort(hasil, hasil + i);
                    for (int j = 0; j < i; j++) {
                        cout << hasil[j] << " ";
                    }
                    cout << endl;
                    cout << "Isi array (descending): ";
                    reverse(hasil, hasil + i);
                    for (int j = 0; j < i; j++) {
                        cout << hasil[ j ] << " ";
                    }

                    cout << endl;   
                }
                break;
            }
            case 5: {
                cout << "Keluar" << endl;
                break;
            }
            default: {
                cout << "Pilihan tidak tersedia" << endl;
                break;
            }   
        }
    } while (choice != 5); 

    return 0;
}






