#include <iostream>
#include <string.h>
using namespace std;

struct pegawai{
  int id;
  string nama[50];
  int tgl_lahir;
  string bln_lahir;
  int thn_lahir;
  char jk;
  string jabatan;
  int gaji;
	pegawai *next;
  pegawai *prev;
};

typedef pegawai *nodePeg;
typedef nodePeg listPeg;
    
struct murid{
	int id;
  string nama;
  int tgl_lahir;
  string bln_lahir;
  int thn_lahir;
  char jk;
  string alamat;
  int kelas;
  string jurusan;
  string no_telp;
  murid *next;
  murid *prev;
};

typedef murid *nodeMurid;
typedef nodeMurid listMurid;

void mainMenu(listPeg &head, listMurid &head){
  char pilihan;
  cout << "+---------------------------------------+" << endl;
  cout << "|              RedelgiKu                |" << endl;
  cout << "+---------------------------------------+" << endl;
  cout << "| Aplikasi Pengatur Data Bimbel Redelgi |" << endl;
  cout << "+---------------------------------------+" << endl;
  cout << endl;
  cout << "Pilihan: \n";
  cout << "A.Tampilkan data pegawai\n";
  cout << "B.Tampilkan data murid\n";
  cout << "C.Tambah data pegawai\n";
  cout << "D.Tambah data murid\n";
  cout << "E.Hapus data pegawai\n";
  cout << "F.Hapus data murid\n";
  cout << "G.Edit data murid\n";
  cout << "H.Edit data murid\n";
  cout << "I.Layanan Konsultasi\n";
  cout << " .Tutup aplikasi\n";
  cout << endl;
  cout << "Masukkan pilihan (dengan huruf): "; cin >> pilihan;
  switch(pilihan){
    case "A":
    case "B":
    case "C":
    case "D":
    case "E":
    case "F":
    case "G":
    case "H":
    case "I":
  }
}

void traversalPeg(listPeg &head){
  if(head == nullptr){
  	cout << "Data tidak tersedia!\n";
  } else{
  	nodePeg pHelp = head;
    while(pHelp != nullptr){
    	cout << "ID Pegawai				: " << pHelp->id << endl;
      cout << "Nama	Pegawai			: " << pHelp->nama << endl;
      cout << "Tanggal Lahir		: " << pHelp->tgl_lahir << "/" << pHelp->bln_lahir << "/" << pHelp->thn_lahir << endl;
      if(pHelp->jk == 'L' || pHelp->jk == 'l'){
        cout << "Jenis Kelamin	: Laki-laki\n";
      } else if(pHelp->jk == 'P' || pHelp->jk == 'p'){
        cout << "Jenis Kelamin	: Perempuan\n";
      } else{
      	cout << "Jenis Kelamin	: Tidak diketahui\n";
      }
      cout << "Jabatan					: " << pHelp->jabatan << endl;
      cout << "Gaji							: " << pHelp->gaji << endl;
      pHelp = pHelp->next;
    }
    cout << "------------------------------------------------------------------------------------\n";
  } 
}

void traversalMurid(listMurid &head){
	if(head == nullptr){
  	cout << "Data tidak tersedia!\n";
  } else{
  	nodeMurid pHelp = head;
    while(pHelp != nullptr){
    	cout << "ID Murid 				: " << pHelp->id << endl;
      cout << "Nama	Murid			  : " << pHelp->nama << endl;
      cout << "Tanggal Lahir		: " << pHelp->tgl_lahir << "/" << pHelp->bln_lahir << "/" << pHelp->thn_lahir << endl;
      if(pHelp->jk == 'L' || pHelp->jk == 'l'){
        cout << "Jenis Kelamin		: Laki-laki\n";
      } else if(pHelp->jk == 'P' || pHelp->jk == 'p'){
        cout << "Jenis Kelamin		: Perempuan\n";
      } else{
      	cout << "Jenis Kelamin		: Tidak diketahui\n";
      }
      cout << "Alamat				    	: " << pHelp->alamat << endl;
      cout << "Kelas						  : " << pHelp->kelas << endl;
      cout << "Jurusan					  : " << pHelp->jurusan << endl;
      cout << "No Telepon				  : " << pHelp->no_telp << endl;
      pHelp = pHelp->next;
    }
    cout << "------------------------------------------------------------------------------------\n";
  } 
}
    
void addPeg(listPeg &head){
	if (head = nullptr){
    head = pNew;
  } else{
  	nodePeg temp = head;
    while (temp-> != nullptr) {
      temp = temp->next;
    }
    temp->next = pNew;
  }
}
    
void addMurid(listMurid &head){
	if (head == nullptr) {
  	head = pNew;
  } else {
    nodeMurid temp = head;
    while (temp-> != nullptr) {
      temp = temp->next;
    }
    temp->next = pNew;
  }
}

void searchMurid(listMurid &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->data == key)
      break;
    pSearch = pSearch->next;
  }
}

void searchPeg(listPeg &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->data == key)
      break;
    pSearch = pSearch->next;
  }
}

void removePeg(){
	searchPeg(head, pDelete, key);
	if (head == nullptr || pDelete == nullptr) {
  	cout << "Node yang dicari tidak ditemukan" << '\n';
  } else {
    if (pDelete == head) {
      head = head->nextPeg;
      pDelete->nextPeg = nullptr;
    } else if (pDelete->nextPeg = nullptr) {
      pDelete->prevPeg->nextPeg = nullptr;
      pDelete->prevPeg = nullptr;
    } else {
      pDelete->prevPeg->nextPeg = pDelete->nextPeg;
      pDelete->nextPeg->prevPeg = pDelete->prevPeg;
      pDelete->nextPeg = nullptr;
      pDelete->prevPeg = nullptr;
    }
    delete pDelete;
  }
}
                 
void removeMurid(listMurid &head, NodePtr &pDelete, char key){
	searchMurid(head, pDelete, key);
	if (head == nullptr || pDelete == nullptr) {
  	cout << "Node yang dicari tidak ditemukan" << '\n';
  } else {
    if (pDelete == head) {
      head = head->nextMurid;
      pDelete->nextMurid = nullptr;
    } else if (pDelete->nextMurid = nullptr) {
      pDelete->prevMurid->nextMurid = nullptr;
      pDelete->prevMurid = nullptr;
    } else {
      pDelete->prevMurid->nextMurid = pDelete->nextMurid;
      pDelete->nextMurid->prevMurid = pDelete->prevMurid;
      pDelete->nextMurid = nullptr;
      pDelete->prevMurid = nullptr;
    }
    delete pDelete;
  }
}

void editPeg(){}
    
void editMurid(){}
    

//Implementasi Queue
struct Node{
	string data;
  int priority;
  Node *next;
};
typedef Node* pointer;
  
struct Queue{
	pointer Head;
  pointer Tail;
};
Queue Q;

void createQueue(Queue& Q){
	Q.Head = nullptr;
  Q.Tail = nullptr;
}
      
void createElement(pointer& newElement, int data, int priority){
	newElement = new Node;
  newElement->data = data;
  newElement->priority;
  newElement->next = nullptr;
}
 
void front(Queue Q){
	cout << Q.Head->data;
}
      
bool isEmpty(Queue Q){
	if(Q.Head == nullptr && Q.Tail == nullptr){
  	return true;
  } else{
  	return false;
  }
}
      
void enqueue(Queue& Q, pointer newElement){
	pointer pRev = nullptr;
  pointer pHelp = Q.Head;
  if(isEmpty(Q)){
  	Q.Head = newElement;
    Q.Tail = newElement;
  } else{
  	while(newElement->priority >= pHelp->priority){
    	if(pHelp->next == nullptr)
        break;
      pRev = pHelp;
      pHelp = pHelp->next;
    }
    //Insert First
    if(pHelp == Q.Head && newElement->priority < pHelp>priority){
    	newElement->next = pHelp;
      Q.Head = newElement;
    }
    //Insert Last
    else if (pHelp == Q.Tail && newElement->priority > pHelp->priority){
    	pHelp->next = newElement;
      Q.Tail = newElement;
    }
    //Insert Middle
    else{
    	pRev->next = newElement;
      newElement->next = pHelp
    }
  } 
}
      
void dequeue(Queue& Q, pointer delElement){
	if(isEmpty(Q)){
  	delElement = nullptr;
  } else if(Q.Head->next == nullptr){
  	delElement = Q.Head;
    Q.Head = nullptr;
    Q.Tail = nullptr;
  } else{
  	delElement = Q.Head;
    Q.Head = Q.Head->next;
    delElement->next = nullptr;
  }
}

//Implementasi Stack
void stackImplementation(){}
    
int main(){
  listPeg dataPeg = nullptr;
  listMurid dataMurid = nullptr;
  mainMenu(dataPeg, dataMurid);
	return 0;
}