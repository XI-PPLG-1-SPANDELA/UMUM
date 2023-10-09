#include <iostream>
#include <stdlib.h>
using namespace std;

struct datasiswasd{
  char nisn[50];
  char nik[50];
  char nama[50];
  char sekolah[50];
  char jenis_kelamin[50];
  char TTL[50];
  char Note![50];
};

struct node{
  datasiswasd _data;
  node* next;
};

node* head;
node* tail; 
node* baru;
node* curr;

void initial(){
  head = NULL;
  tail = NULL;
}

int isEmpty (){
  if (head == NULL){
    return 1;
  }
  else {
    return 0;
  }
}

void input(datasiswasd dt){
  baru = (node* )malloc(sizeof(node));
  baru -> _data = dt;
  baru -> next = NULL;
  if (isEmpty() == 1){
    head = baru;
    tail = head;
  }else{
    tail -> next = baru;
    tail = baru;
  }
}

void display(){
  curr = head;
  if (isEmpty() == 1){
    cout << "Data is empty" << endl;
  }
  else {
    cout << "==========================" << endl;
    system("cls");
    cout << "\n";
    cout << "Data Siswa SD YPKS 2" << endl;
    cout << "==========================" << endl;
    while (curr != NULL){
      cout << "Nama \t\t: " << curr -> _data.nama << endl;
      cout << "Hobi \t\t: " << curr -> _data.hobi << endl;
      cout << "Alamat \t\t: " << curr -> _data.alamat << endl;
      cout << "Nisn \t\t: " << curr -> _data.nisn << endl;
      cout << "Nomor Telpon \t: " << curr -> _data.nomortelp << endl;
      cout << "\n\n";
      curr = curr -> next;
    }
  }
}

int main(){
  initial();
  node temp;
  char index;
  char repeat;
  do{
    system("cls");
    cout << "Menu : " << endl;
    cout << "1. Input data" << endl;
    cout << "2. Print data" << endl;
    cout << "3. Exit" << endl;
    cout << "==================" <<  endl;
    cout << "Masukkan pilihan anda : ";
    cin >> index;
    switch (index){
      case '1':
        system("cls");
        cout << "\nNama siswa \t\t: ";cin >> temp._data.nama;
        cout << "Hobi siswa \t\t: ";cin >> temp._data.hobi;
        cout << "Alamat siswa \t\t: ";cin >> temp._data.alamat;
        cout << "NISN siswa \t\t: ";cin >> temp._data.nisn;
        cout << "Nomor Telpon siswa \t: ";cin >> temp._data.nomortelp;
        input(temp._data);
        cout << "\n";
        break;
      case '2':
        system("cls");
        display();
        break;
      case '3':
        system("cls");
        exit(0);
        break;
      default:
        cout << "Wrong input!!!";
    }
    cout << "repeat ? (y/n) : ";
    cin >> repeat;
  } while (repeat == 'y' || repeat == 'Y');
  
  return 0;
}