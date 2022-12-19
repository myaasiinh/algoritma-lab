#include <stdio.h>
int data[10], data2[10], n; 
    void tukar(int a,int b) {
        int t;
        t = data[b]; data[b] = data[a]; data[a] = t;
    }


    void input(){
        printf("Masukkan jumlah data : "); scanf("%d", &n); printf("	\n");

        int i;
        for(i=0; i<n; i++){
        printf("Masukkan data ke- %d = ", i+1); scanf("%d", &data[i]); data2[i] = data[i];
        }
        printf("\n");
    }


    void tampil(){ 
        int i;
        for(i=0; i<n; i++){
        printf("%d ", data[i]);
        }
        printf("\n");
    }


    void bubblesort(){ 
        int i, j;
        for(i=1; i<n; i++)
        {
            for(j=n-1; j>=i; j--)
            {
                if(data[j]<data[j-1])
                { 
                    tukar(j,j-1);
                }
            }
        }
        tampil();
    }


int main(){
    printf("Nama : Muhammad Yaasiin 'Hidayatulloh"); 
    printf("\nNIM : 32602200107\n\n"); 
    printf("* Bubble Sort *");
    printf("\n"); 
    input();
    tampil(); 
    bubblesort ();
}
