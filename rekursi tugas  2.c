#include <stdio.h> 
#include <conio.h> 
int pangkat(int y, int n){ 
    int pangkat=1;
    for (int i=1;i<=n;i++){ 
        pangkat=pangkat*y;
    }
    return pangkat;
}

int main(){ int i,j;
printf("Nama : Muhammad Yaasiin 'Hidayatulloh\n"); 
printf("NIM : 32602200107\n");
printf("**program Menghitung Pangkat**\n");
 


printf("===============================\n");

printf("Masukan Angka :"); 
scanf("%d",&i);
printf("Masukan pangkat :"); 
scanf("%d",&j);
printf("hasil pangkat :"); 
printf("%d", pangkat(i,j));
}

