#include <iostream>
#include <string.h>

using namespace std;

struct nilaiMatKul {
  string nim;
  string nama;
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
  return Q.first == -1;
}

int isFull(queue Q){
  return Q.last == 9 && Q.first != -1;
}

void add(string nim, string nama, float nilai, queue *Q){
  if(isEmpty(*Q)){
    (*Q).first = 0;
    (*Q).last = 0;
  }else{
    (*Q).last++;
  }
  (*Q).data[(*Q).last].nim = nim;
  (*Q).data[(*Q).last].nama = nama;
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
    (*Q).first++;
  }
}

void printQueue(queue Q){
  if(Q.first != -1){
    for(int i = Q.first; i <= Q.last; i++){
      cout <<"---Isi Queue---" << endl;
      cout << "Index : " << i << endl;
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
  createEmpty(&Q);
  printQueue(Q);

  cout<<"------------------------" << endl;
  add("13517001", "Rangga", 64.67, &Q);
  add("13517002", "Anggy", 75.11, &Q);
  add("13517003", "Intan", 84.63, &Q);
  printQueue(Q);

  cout<<"------------------------" << endl;
  del(&Q);
  del(&Q);


  printQueue(Q);
  
  return 0;

}
