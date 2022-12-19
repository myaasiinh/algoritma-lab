
#include <iostream>
#include <conio.h>


int main () {

cout << "Nama: Muhammad Yaasiin Hidayatulloh\n";
cout << "NIM: 32602200107\n\n";
    
int jam = 3600;
int menit = 60;
int a, b, c, d, e, f;

a = 4*jam+56*menit+12;
b = 3*jam+21*menit+56;
c = 10*jam+34*menit+1;
d = 8*jam+32*menit+31;
e = 6*jam+42*menit+11;
f = a+b+c+d+e;

cout<<" hasil dari 4 jam 56 menit 12 detik adalah : "<<a<<" detik "<<endl;
cout<<" hasil dari 3 jam 21 menit 56 detik adalah : "<<b<<" detik "<<endl;
cout<<" hasil dari 10 jam 34 menit 1 detik adalah : "<<c<<" detik "<<endl;
cout<<" hasil dari 8 jam 32 menit 31 detik adalah : "<<d<<" detik "<<endl;
cout<<" hasil dari 6 jam 42 menit 11 detik adalah : "<<e<<" detik "<<endl;
cout<<"jumlah dari semua total konversi tersebut adalah : "<<f<<" detik "<<endl;
getch();

}