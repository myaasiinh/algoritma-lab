#include <iostream> 
#include <conio.h> 
using namespace std; 
class membalik{ 
    public:
    int proses(); 
    void keluaran ();
 
    private:

    int x,balik;
};

int membalik::proses(){

    cout << "Nama : Muhammad Yaasiin 'Hidayatulloh\n"; 
    cout << "NIM : 32602200107\n";
    cout<<"membalik angka yang ingin dibalik"<<endl<<endl;
    cout<<"masukan angka : "; 
    cin>>x;
    balik=0; 
    while (x>0)
    for (int i=0; i<=x; i++){
        balik = (balik*10)+(x%10); 
        x/=10;
    }

    return balik;
}

void membalik::keluaran(){
    cout<<"angka yang telah dibalik menjadi : "<<balik<<endl;
}

int main(int argc, char**argv){ 
    membalik bilangan;
    bilangan.proses(); 
    bilangan.keluaran();
    return 0;
}

