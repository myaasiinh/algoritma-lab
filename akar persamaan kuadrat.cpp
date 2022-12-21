#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {


float a, b, c, x1, x2;
cout<<"Masukkan nilai a: ";
cin>>a;
cout<<"Masukan nilai b : ";
cin >>b;
cout<<"Masukan nilai b : ";
cin >>c;
cout<<"Masukan nilai b : ";
cout<<endl<<endl;
x1 = (b + sqrt(b*b-4*a*c))/(2*a);
x2 = (b - sqrt(b*b-4*a*c))/(2*a);
cout<<"Nilai x1 adalah : "<<x1<<endl<<endl;
cout<<"Nilai x2 adalah : "<<x2<<endl<<endl;
getch();


}