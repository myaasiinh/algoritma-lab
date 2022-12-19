#include <iostream> 
#include <conio.h> 
#define max 20
using namespace std ;

void quick_sort(int data[max], int l, int b) { 
    int a;
    int up,down; int temp;

    if (l>=b)	return;
    a=data[l]; up=b; down=l;

    while (down < up)	{
        while (data[down] <= a)		down++; 
            while (data[up]>a)	up--;   
                if(down<up)	{
                    temp=data[down]; 
                    data[down]=data[up];
                    data[up]=temp;
                }
    }
    data[l]=data[up]; 
    data[up]=a;
    quick_sort(data,l,up-1); 
    quick_sort(data,up+1,b);
}

int main() {
    cout << "Nama: Muhammad Yaasiin 'Hidayatulloh\n";
    cout << "NIM : 32602200107\n\n";
    int data[max]; 
    int i,n,l,b; l=0;
    cout<<"Masukkan banyak data yang ingin diurutkan: "; 
    cin>>n;
    b=n;
    cout<<"Masukkan data-datanya: \n"; 
    for(i=1;i<=n;i++)	{
        cout<<"\tdata ke- "<<i<<" : "; 
        cin>>data[i];
    }
    quick_sort(data,l,b); 
    cout<<"\nHasil pengurutan data: "; 
    for(i=0; i<n;i++)
    cout<<" "<<data[i]; 
    getch();
}
