
#include <iostream>
#include <string.h>

using namespace std;

struct nilaiMatKul {
  char nim[10];
  char nama[50];
  float nilai;
};


struct queue {
  int first;
  int last;
  nilaiMatKul data[10];
};

void createEmpty(queue *Q){
  (*Q).first = -1;
  (*Q).last = -1;
}

int isEmpty(queue Q){
  int hasil = 0;
  if(Q.first == -1){
    hasil = 1;
  }
  return hasil;
}

int isFull(queue Q){
  int hasil = 0;
  if(Q.last == 9){
    hasil = 1;
  }
  return hasil;
}

void add(char nim[], char nama[], float nilai, queue *Q){
  if(isEmpty(*Q) == 1){
    (*Q).first = 0;
    (*Q).last = 0;
  }else{
    (*Q).last++;
  }
  strcpy((*Q).data[(*Q).last].nim, nim);
  strcpy((*Q).data[(*Q).last].nama, nama);
  (*Q).data[(*Q).last].nilai = nilai;
}

void del(queue *Q){
  int i;
  if((*Q).first == (*Q).last){
    createEmpty(Q);
  }else{
    for(i=(*Q).first; i<(*Q).last; i++){
      (*Q).data[i] = (*Q).data[i+1];
    }
    (*Q).last--;
  }
}

void printQueue(queue Q){
  if(isEmpty(Q) == false){
    for(int i = Q.first; i <= Q.last; i++){
      cout << "NIM : " << Q.data[i].nim << endl;
      cout << "Nama : " << Q.data[i].nama << endl;
      cout << "Nilai : " << Q.data[i].nilai << endl;
      cout << endl;
    }
  }else{
    cout << " Data Kosong " << endl;
  }
}

int main(){
  queue Q;
  int pilih;
  char nim[10];
  char nama[50];
  float nilai;
  do{
    cout << "1. Tambah Data" << endl;
    cout << "2. Hapus Data" << endl;
    cout << "3. Tampilkan Data" << endl;
    cout << "4. Keluar" << endl;
    cout << "Pilih : ";
    cin >> pilih;
    switch(pilih){
      case 1:
        cout << "NIM : ";
        cin >> nim;
        cout << "Nama : ";
        cin >> nama;
        cout << "Nilai : ";
        cin >> nilai;
        add(nim, nama, nilai, &Q);
        break;
      case 2:
        del(&Q);
        break;
      case 3:
        printQueue(Q);
        break;
    }
  }while(pilih != 4);
}
