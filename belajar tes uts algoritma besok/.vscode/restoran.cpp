#include <iostream>

using namespace std;
	 
	 int main(){
	 	
	 	int angka;
		cout<<"Menu Makanan"<<endl;
		cout<<"1. Nasi Padang"<<endl;
		cout<<"2. Nasi Goreng"<<endl;
		cout<<"Masukkan Pilihan Anda : ";
		cin>>angka;
		
		if (angka==1){
		cout<<"Anda memesan nasi padang";
		}
		else if (angka==2){
		cout<<"Anda memesan nasi goreng";
		}
		else{
		cout<<"Pilihan yang anda masukkan salah";
		
		}
		
	 }