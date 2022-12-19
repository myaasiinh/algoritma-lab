#include <iostream>
using namespace std;
void bubblesort(){
    int i,j,n,data[10],simpan,k, pilih;
    cout<<"\nMengurutkan Data\n";
    cout<<"1. Ascending\n";
    cout<<"2. Descending\n";
    cout<<"pilih salah satu : ";
    cin>>pilih;

    if (pilih==1){
        cout<<"masukkan banyak data= ";
        cin>>n;
        
        for(i=1;i<=n;i++)
        {
            cout<<"data "<<i<<" = ";cin>>data[i];
        }
        cout<<"awal = ";
            
        for(i=1;i<=n;i++)
            cout<<data[i]<<" ";
            cout<<endl;
        
            for(i=1;i<n;i++)
            {
                for(j=1;j<n;j++)
                {
                    if(data[j]>data[j+1])
                    {
                    simpan=data[j];
                    data[j]=data[j+1];
                    data[j+1]=simpan;
                    }
                }
            }
            cout<<"hasil= "; 
            for(i=1;i<=n;i++)
            cout<<data[i]<<" ";
    }
    else{
        cout<<"masukkan banyak data= ";
        cin>>n;
        
        for(i=1;i<=n;i++)
        {
            cout<<"data "<<i<<" = ";cin>>data[i];
        }
        cout<<"awal = ";
            
        for(i=1;i<=n;i++)
            cout<<data[i]<<" ";
            cout<<endl;
        
            for(i=1;i<n;i++)
            {
                for(j=1;j<n;j++)
                {
                    if(data[j]<data[j+1])
                    {
                    simpan=data[j];
                    data[j]=data[j+1];
                    data[j+1]=simpan;
                    }
                }
            }
            cout<<"hasil= "; 
            for(i=1;i<=n;i++)
            cout<<data[i]<<" ";
    }
}

void insertionsort(){ 
    int banyakData, i, j;
    int pilih;

    cout<<"\nMengurutkan Data\n";
    cout<<"1. Ascending\n";
    cout<<"2. Descending\n";
    cout<<"pilih salah satu : ";
    cin>>pilih;

    if(pilih==1){
        cout<<"Masukkan Banyak Data : ";
        cin>>banyakData;
        int data[banyakData];

        for(i = 0; i < banyakData; i++)
        {
            cout<<"data "<<i+1<<" = ";
            cin>>data[i];
        }

        
        for(i = 0; i < banyakData; i++)
        {
            for(j = i; j > 0 && data[j] < data[j-1]; j--)
            {
            int temp = data[j-1];
            data[j-1] = data[j];
            data[j] = temp;
            }
        }

        cout<<"Hasil Pengurutan Data   : ";
        for (i = 0; i < banyakData; i++)
        {
            cout<<data[i]<<" ";
        }
        cout<<"\n";
    }
    else{
        cout<<"Masukkan Banyak Data : ";
        cin>>banyakData;
        int data[banyakData];

        for(i = 0; i < banyakData; i++)
        {
            cout<<"data "<<i+1<<" = ";
            cin>>data[i];
        }

        
        for(i = 0; i < banyakData; i++)
        {
            for(j = i; j > 0 && data[j] > data[j-1]; j--)
            {
            int temp = data[j-1];
            data[j-1] = data[j];
            data[j] = temp;
            }
        }

        cout<<"Hasil Pengurutan Data   : ";
        for (i = 0; i < banyakData; i++)
        {
            cout<<data[i]<<" ";
        }
        cout<<"\n"; 
    }
}

void selectionsort(){
    int n, tukar, A[100];
    int pilih;

    cout<<"\nMengurutkan Data\n";
    cout<<"1. Ascending\n";
    cout<<"2. Descending\n";
    cout<<"pilih salah satu : ";
    cin>>pilih;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    if(pilih==1){
        for (int i = 0; i < n; i++) {
            cout << "Data ke-" << i + 1 << " = " ;
            cin >> A[i];
        }

        for (int i = 0; i < n-1; i++) {
            tukar = i;
            int temp;
            for(int j = i+1; j < n; j++){
                if(A[j] < A[tukar]){
                    tukar = j;
                }
            }   
            temp = A[tukar];
            A[tukar] = A[i];
            A[i] = temp;
        }

        cout<<"hasil pengurutan data : ";
        for(int i = 0; i < n; i++){
            cout << A[i] << " ";
        }
        cin.get();
    }
    else{
        for (int i = 0; i < n; i++) {
            cout << "Data ke-" << i + 1 << " = " ;
            cin >> A[i];
        }

        for (int i = 0; i < n-1; i++) {
            tukar = i;
            int temp;
            for(int j = i+1; j < n; j++){
                if(A[j] > A[tukar]){
                    tukar = j;
                }
            }   
            temp = A[tukar];
            A[tukar] = A[i];
            A[i] = temp;
        }

        cout<<"hasil pengurutan data : ";
        for(int i = 0; i < n; i++){
            cout << A[i] << " ";
        }
        cin.get();
    }
}

int main(){
    printf("Nama : Muhammad Yaasiin 'Hidayatulloh"); 
    printf("\nNIM : 32602200107\n\n");
    int pilih;

    cout<<"pilih metode sorting\n";
    cout<<"1. Buble Sort\n";
    cout<<"2. Insertion Sort\n";
    cout<<"3. Selection Sort\n";
    cout<<"pilih salah satu : ";
    cin>>pilih;

    if(pilih==1){
        bubblesort();
    }
    else if(pilih==2){
        insertionsort();
    }
    else{
        selectionsort();
    }
    return 0;
}
