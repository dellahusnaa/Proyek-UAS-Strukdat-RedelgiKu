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
cout << "J.Tampilkan data pegawai menurut kategori\n";
cout << "K.Tampilkan data murid menurut kategori\n";
cout << " .Tutup aplikasi\n";
cout << endl;
cout << "Masukkan pilihan (dengan huruf): "; cin >> pilihan;
  switch(pilihan){
    case "A": 
      break;
    case "B": 
      cout << "";
      break; 
    case "C":
      cout << "ID Pegawai 	 : "; cin >> newElementPeg->id_Peg;
      cout << "Nama Pegawai  : "; cin >> newElementPeg->nama_Peg;
      cout << "Tanggal Lahir : "; cin >> newElementPeg->tgl_Lahir_Peg;
      cout << "Jenis Kelamin : "; cin >> newElementPeg->JK_Peg;
      cout << "Jabatan			 : "; cin >> newElementPeg->Jabatan;
      cout << "Gaji					 : "; cin >> newElementPeg->Gaji;
      cout << "-------------------------- \n";
      cout << "Kembali ke Menu? (Y/N) \n"; cin >> yn;
      if (yn == "Y" ||  yn == 'y'){
      	goto menu;
        	break;
      } else if (yn == 'N' || yn == 'n'){
        	break;
      } else {
        	cout << "Input salah \n";
      } 
      break;}
          
    case "D": 
      cout << "ID Murid 		 : "; cin >> newElementMrd->id_Mrd;
      cout << "Nama Murid	   : "; cin >> newElementMrd->nama_Mrd;
      cout << "Tanggal Lahir : "; cin >> newElementMrd->tgl_Lahir_Mrd;
      cout << "Jenis Kelamin : "; cin >> newElementMrd->JK_Mrd;
      cout << "Alamat 			 : "; cin >> newElementMrd->Alamat;
      cout << "Kelas				 : "; cin >> newElementMrd->Kelas;
      cout << "Jurusan    	 : "; cin >> newElementMrd->Jurusan;
      cout << "Nomor Telepon : "; cin >> newElementMrd->noTelp;
      cout << "-------------------------- \n";
      cout << "Kembali ke Menu? (Y/N) \n"; cin >> yn;
      if (yn == "Y" ||  yn == 'y'){
      	goto menu;
        	break;
      } else if (yn == 'N' || yn == 'n'){
        	break;
      } else {
        	cout << "Input salah \n";
      } 
      break;}
      break;
    case "E": 
      cout << "";
      break;
    case "F": 
      cout << "";
      break;
    case "G":
      cout << "";
      break;
    case "H":
      cout << "";
      break;
    case "I":
      cout << "";
      break;
    case "J":
      cout << "";
			break;
    case "": //Menutup aplikasi
      break;	
  }
}

void createElementPeg(pointer& new_Element_Peg, string id_Peg, string nama_Peg, string tgl_Lahir_Peg, string JK_Peg, string jabatan, int gaji){
	newElementPeg = new Node;
  newElementPeg->id_Peg = id_Peg;
  newElementPeg->nama_Peg = nama_Peg;
  newElementPeg->tgl_Lahir_Peg = tgl_Lahir_Peg;
  newElementPeg->JK_Peg = JK_Peg;
  newElementPeg->Jabatan = jabatan;
  newElementPeg->Gaji = gaji;
  newElementPeg->nextPeg = nullptr;
}

void createElementMrd(pointer& new_Element_Mrd, string id_Mrd, string nama_Mrd, string tgl_Lahir_Mrd, string JK_Mrd, string alamat, string kelas, string jurusan, string noTelp){
	newElementMrd = new Node;
  newElementMrd->id_Mrd = id_Mrd;
  newElementMrd->nama_Mrd = nama_Mrd;
  newElementMrd->tgl_Lahir_Mrd = tgl_Lahir_Mrd;
  newElementMrd->JK_Mrd = JK_Mrd;
  newElementMrd->Alamat = alamat;
  newElementMrd->Kelas = kelas;
  newElementMrd->Jurusan = jurusan;
  newElementMrd->noTelp = no_Telp;
  newElementMrd->nextPeg = nullptr;
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
      pHelp = pHelp->nextPeg;
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
      cout << "Nomor Telepon		  : " << pHelp->no_telp << endl;
      pHelp = pHelp->nextMurid;
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
      temp = temp->nextPeg;
    }
    temp->nextPeg = pNew;
  }
}
    
void addMurid(listMurid &head){
	if (head == nullptr) {
  	head = pNew;
  } else {
    nodeMurid temp = head;
    while (temp-> != nullptr) {
      temp = temp->nextMurid;
    }
    temp->nextMurid = pNew;
  }
}

void searchMurid(listMurid &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->data == key)
      break;
    pSearch = pSearch->nextMurid;
  }
}

void searchPeg(listPeg &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->data == key)
      break;
    pSearch = pSearch->nextPeg;
  }
}

void removePeg(listPeg &head, NodePtr &pDelete, char key){
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

	int id;
  string nama[50];
  int tgl_lahir;
  string bln_lahir;
  int thn_lahir;
  char jk;
  string jabatan;
  int gaji;
  string alamat;
  int kelas;
  string jurusan;
  string no_telp;
  
	
void editPeg(listPeg &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->id == key)
      break;
    pSearch = pSearch->nextPeg;
  }
  nodePtr temp = nullptr;
  cout "Masukkan update data: \n";
  cin >> temp -> id;
  pSearch -> id = temp -> id;
}

void editPeg(listPeg &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->nama == key)
      break;
    pSearch = pSearch->nextPeg;
  }
  nodePtr temp = nullptr;
  cout "Masukkan update data: \n";
  cin >> temp -> nama;
  pSearch -> nama = temp -> nama;
}

void editPeg(listPeg &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->tgl_lahir == key)
      break;
    pSearch = pSearch->nextPeg;
  }
  nodePtr temp = nullptr;
  cout "Masukkan update data: \n";
  cin >> temp -> tgl_lahir;
  pSearch -> tgl_lahir = temp -> tgl_lahir;
}

void editPeg(listPeg &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->bln_lahir == key)
      break;
    pSearch = pSearch->nextPeg;
  }
  nodePtr temp = nullptr;
  cout "Masukkan update data: \n";
  cin >> temp -> bln_lahir;
  pSearch -> bln_lahir = temp -> bln_lahir;
}

void editPeg(listPeg &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->thn_lahir == key)
      break;
    pSearch = pSearch->nextPeg;
  }
  nodePtr temp = nullptr;
  cout "Masukkan update data: \n";
  cin >> temp -> thn_lahir;
  pSearch -> thn_lahir = temp -> thn_lahir;
}

void editPeg(listPeg &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->jk == key)
      break;
    pSearch = pSearch->nextPeg;
  }
  nodePtr temp = nullptr;
  cout "Masukkan update data: \n";
  cin >> temp -> jk;
  pSearch -> jk = temp -> jk;
}

void editPeg(listPeg &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->jabatan == key)
      break;
    pSearch = pSearch->nextPeg;
  }
  nodePtr temp = nullptr;
  cout "Masukkan update data: \n";
  cin >> temp -> jabatan;
  pSearch -> jabatan = temp -> jabatan;
}

void editPeg(listPeg &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->gaji == key)
      break;
    pSearch = pSearch->nextPeg;
  }
  nodePtr temp = nullptr;
  cout "Masukkan update data: \n";
  cin >> temp -> gaji;
  pSearch -> gaji = temp -> gaji;
}

void editPeg(listPeg &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->alamat == key)
      break;
    pSearch = pSearch->nextPeg;
  }
  nodePtr temp = nullptr;
  cout "Masukkan update data: \n";
  cin >> temp -> alamat;
  pSearch -> alamat = temp -> alamat;
}

void editPeg(listPeg &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->kelas == key)
      break;
    pSearch = pSearch->nextPeg;
  }
  nodePtr temp = nullptr;
  cout "Masukkan update data: \n";
  cin >> temp -> kelas;
  pSearch -> kelas = temp -> kelas;
}

void editPeg(listPeg &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->jurusan == key)
      break;
    pSearch = pSearch->nextPeg;
  }
  nodePtr temp = nullptr;
  cout "Masukkan update data: \n";
  cin >> temp -> jurusan;
  pSearch -> jurusan = temp -> jurusan;
}

void editPeg(listPeg &head, NodePtr &pSearch, char key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->no_telp == key)
      break;
    pSearch = pSearch->nextPeg;
  }
  nodePtr temp = nullptr;
  cout "Masukkan update data: \n";
  cin >> temp -> no_telp;
  pSearch -> no_telp = temp -> no_telp;
}

void editMurid(){}
    

//Implementasi Queue
struct Node{
  string id;
	string nama;
  string keterangan
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
      
void createElement(pointer& newElement, string id, string nama, string keterangan, int priority){
	newElement = new Node;
  newElement->id = id;
  newElement->nama = nama;
  newElement->keterangan = keterangan;
  newElement->priority;
  newElement->next = nullptr;
}
 
void front(Queue Q){
	cout << Q.Head->id;
  cout << Q.Head->nama;
  cout << Q.Head->keterangan;
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
  menu:
  mainMenu(dataPeg, dataMurid);
	return 0;
}