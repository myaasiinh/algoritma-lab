#include <iostream>
#include <cmath>



using namespace std;

main() {
    
    char jenis;
    
    int panjang, lebar;

    cout << "Nama: Muhammad Yaasiin Hidayatulloh " << endl;
    cout << "NIM: 32602200107 " << endl;
    
    cout << "Fungsi persegi panjang" << endl;
    
    cout << "Luas (L)" << endl;
    
    cout << "Keliling (K)" << endl;
    
    cout << "Diagonal (D)" << endl;
    
    cout << "Pilih fungsi persegi panjang: ";
    
    cin >> jenis;
    
    jenis = tolower(jenis);
    
    if (jenis != 'l' && jenis != 'k' && jenis != 'd') {
    
        cout << "Fungsi yang anda masukkan salah";
    
        return 0;
    }

    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;

    if (jenis == 'l') {

        int luas = panjang * lebar;

        cout << "Luas = " << luas;

    } else if (jenis == 'k') {
        
        int keliling = (2 * panjang) + (2 * lebar);
    
        cout << "Keliling = " << keliling;
    
    } else if (jenis == 'd') {
      
        float diagonal = sqrt((panjang * panjang) + (lebar * lebar));
      
        cout << "Diagonal = " << diagonal;
    
    }

}
