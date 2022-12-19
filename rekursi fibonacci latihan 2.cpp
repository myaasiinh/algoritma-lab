#include <iostream> 
using namespace std;
long int fib (unsigned int n){ 
    if (n == 0){
        return 0;

    }else if (n == 1){ 
        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }

}

int main(){ 
    int n;
    long int hasil;
    cout << "Nama : Muhammad Yasiin 'Hidayatulloh\n"; 
    cout <<"NIM : 32602200107\n";
    cout<<"n = "; 
    cin>>n;
    hasil = fib(n); 
    cout<<"fibonaci("<<n<<") = "<<hasil;
    return 0;

}
