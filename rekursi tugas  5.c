#include <stdio.h> 
#include <conio.h> 
int x,balik;
 
void proses(){
    printf("Nama : Muhammad Yaasiin 'Hidayatulloh\n"); 
    printf("NIM : 32602200107\n");
    printf("membalik angka yang ingin dibalik\n");
    printf("masukan angka : "); 
    scanf("%d", &x);
    balik=0; 
    while (x>0)
    for (int i=0; i<=x; i++){
        balik = (balik*10)+(x%10); 
        x/=10;
    }

    
}

void keluaran(){
    printf("angka yang telah dibalik menjadi : %d\n", balik);
}

void membalik(){ 
    proses(); 
    keluaran();   
}

int main(int argc, char**argv){ 
    membalik();
    return 0;
}
