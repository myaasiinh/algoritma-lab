#include <iostream>
#include <conio.h>

using namespace std;

int main () {
    int cm, m, km, a, b, c;
    cout << "Nama: Muhammad Yaasiin Hidayatulloh\n";
    cout << "NIM: 32602200107\n\n";
    
    cout << "Konversi dari cm ke km, m, dan cm " << endl;
    cout << "Masukkan nilai dalam cm: ";
    cin >> a;
    km = a / 100000;
    b = a % 100000;
    m = b / 100;
    c = b % 100;
    cm = c;
    cout << endl <<endl;
    cout << "Km: " << a/100000 << endl << endl;
    cout << "M: " << b/100 << endl << endl;
    cout << "Cm: " << c << endl << endl;
    getch();

}