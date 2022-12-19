#include <iostream>

using namespace std;

int main()
{
    int p, k, d, h;
    
    cout << "Apakah mempunyai kode ? ";
    cin >> p;
    
    if(p == 1){
        cout << "Masukkan kode : ";
        cin >> k;
        if(k == 123){
            cout << "Dapat diskon 15%" << endl;
            d = 15;
            h = 30000 - (30000*15)/100;
            cout << "Harga tiket : " << h;
        }else{
            cout << "Kode salah, tidak dapat diskon";
        }
    }else{
        cout << "Harga Normal";
    }
}