#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct pegawai{
  int id;
  string nama;
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
  murid *next;
  murid *prev;
};

typedef murid *nodeMurid;
typedef nodeMurid listMurid;

void createElementPeg(nodePeg &pNew, int id, string nama, int tgl_lahir, string bln_lahir, int thn_lahir, char jk, string jabatan, int gaji){
	pNew = new pegawai;
  pNew->id = id;
  pNew->nama = nama;
  pNew->tgl_lahir = tgl_lahir;
  pNew->bln_lahir = bln_lahir;
  pNew->thn_lahir = thn_lahir;
  pNew->jk = jk;
  pNew->jabatan = jabatan;
  pNew->gaji = gaji;
  pNew->next = nullptr;
  pNew->prev = nullptr;
}

void createElementMurid(nodeMurid &pNew, int id, string nama, int tgl_lahir, string bln_lahir, int thn_lahir, char jk, string alamat, int kelas, string jurusan){
	pNew = new murid;
  pNew->id = id;
  pNew->nama = nama;
  pNew->tgl_lahir = tgl_lahir;
  pNew->bln_lahir = bln_lahir;
  pNew->thn_lahir = thn_lahir;
  pNew->jk = jk;
  pNew->alamat = alamat;
  pNew->kelas = kelas;
  pNew->next = nullptr;
  pNew->prev = nullptr;
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
      pHelp = pHelp->next;
    }
    cout << "------------------------------------------------------------------------------------\n";
  } 
}
    
void addPeg(listPeg &head, nodePeg pNew){
	if (head == nullptr){
    head = pNew;
  } else{
  	nodePeg temp = head;
    while (temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = pNew;
    pNew->prev = temp;
  }
}
    
void addMurid(listMurid &head, nodeMurid pNew){
	if (head == nullptr) {
  	head = pNew;
  } else {
    nodeMurid temp = head;
    while (temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = pNew;
    pNew->prev = temp;
  }
}

void searchMurid(listMurid &head, nodeMurid &pSearch, int key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->id == key)
      break;
    pSearch = pSearch->next;
  }
}

void searchPeg(listPeg &head, nodePeg &pSearch, int key){
  pSearch = head;
  while (pSearch != nullptr) {
    if (pSearch->id == key)
      break;
    pSearch = pSearch->next;
  }
}

void removePeg(listPeg &head, nodePeg &pDelete, int key){
	searchPeg(head, pDelete, key);
	if (head == nullptr || pDelete == nullptr) {
  	cout << "Node yang dicari tidak ditemukan" << '\n';
  } else {
    if (pDelete == head) {
      head = head->next;
      pDelete->next = nullptr;
    } else if (pDelete->next = nullptr) {
      pDelete->prev->next = nullptr;
      pDelete->prev = nullptr;
    } else {
      pDelete->prev->next = pDelete->next;
      pDelete->next->prev = pDelete->prev;
      pDelete->next = nullptr;
      pDelete->prev = nullptr;
    }
    delete pDelete;
  }
}
                 
void removeMurid(listMurid &head, nodeMurid &pDelete, int key){
	searchMurid(head, pDelete, key);
	if (head == nullptr || pDelete == nullptr) {
  	cout << "Node yang dicari tidak ditemukan" << '\n';
  } else {
    if (pDelete == head) {
      head = head->next;
      pDelete->next = nullptr;
    } else if (pDelete->next = nullptr) {
      pDelete->prev->next = nullptr;
      pDelete->prev = nullptr;
    } else {
      pDelete->prev->next = pDelete->next;
      pDelete->next->prev = pDelete->prev;
      pDelete->next = nullptr;
      pDelete->prev = nullptr;
    }
    delete pDelete;
  }
}
/*
void editPeg(listPeg &head, NodePtr &pSearch, char key){
  int pilihan;
  
  cout << "Pilihan: \n";
  cout << "1.Edit Data ID\n";
  cout << "2.Edit Data Nama\n";
  cout << "3.Edit Data Tanggal Lahir\n";
  cout << "4.Edit Data Bulan Lahir\n";
  cout << "5.Edit Data Tahun Lahir\n";
  cout << "6.Edit Data JK\n";
  cout << "7.Edit data Jabatan\n";
  cout << "8.Edit data Gaji\n";
  cout << endl;
  cout << "Masukkan pilihan (dengan nomor): "; cin >> pilihan;
  switch(pilihan){
		case 1:
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
    	break;

  	case 2:
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
  		break;
      
  	case 3:
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
 		 	break;
      
  	case 4:
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
  		break;
      
  	case 5:
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
      break;
      
  	case 6:
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
  		break;
      
  	case 7:
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
  		break;
      
  	case 8:
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

  		break;
  }
}

void editMurid(listPeg &head, NodePtr &pSearch, char key){
  int pilihan;
  
  cout << "Pilihan: \n";
  cout << "1.Edit Data ID\n";
  cout << "2.Edit Data Nama\n";
  cout << "3.Edit Data Tanggal Lahir\n";
  cout << "4.Edit Data Bulan Lahir\n";
  cout << "5.Edit Data Tahun Lahir\n";
  cout << "6.Edit Data JK\n";
  cout << "7.Edit data Alamat\n";
  cout << "8.Edit data Kelas\n";
  cout << "9.Edit data Jurusan\n";
  cout << "10.Edit data Nomor Telepon\n";
  cout << endl;
  cout << "Masukkan pilihan (dengan nomor): "; cin >> pilihan;
  switch(pilihan){
    case 1:
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
      break;
      
    case 2:
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
      break;
  	case 3:
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
      break;

		case 4:
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
      break;
  
		case 5:
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
      break;
  
		case 6:
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
      break;

		case 7:
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
      break;
  
    case 8:
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
      break;
  
    case 9:
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
      break;
  
    case 10:
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
    break;
  }
}    
*/
//Implementasi Queue
struct Node{
  string id;
	string nama;
  string keterangan;
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
    if(pHelp == Q.Head && newElement->priority < pHelp->priority){
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
      newElement->next = pHelp;
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
void stackImplementation(){
	
}
    
int main(){
  listPeg dataPeg = nullptr;
  listMurid dataMurid = nullptr;
  pointer newElement, pDel;
  createQueue(Q);
  menu:
  char pilihan;
  nodePeg pSearchPeg, pDeletePeg, pNewPeg;
  nodeMurid pSearchMurid, pDeleteMurid, pNewMurid;
  char pil;
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
  cout << "G.Layanan Konsultasi\n";
  cout << "H.Tutup aplikasi\n";
  cout << endl;
  cout << "Masukkan pilihan (dengan huruf): "; cin >> pilihan;
  switch(pilihan){
    case 'A': //Menampilkan data pegawai
      system("cls");
      char pil;
      cout << "+-----------------------------+\n";
      cout << "|   D A T A   P E G A W A I   |\n";
      cout << "+-----------------------------+\n";
      cout << endl;
      traversalPeg(dataPeg);
      cout << "Jika ingin ke menu utama, ketik huruf 'Y' dan tekan enter!\n";
      cin >> pil;
      if(pil == 'Y' | pil == 'y'){
      	system("cls");
        goto menu;
      } 
      break;
    case 'B': //Menampilkan data murid
      system("cls");
      cout << "+-------------------------+\n";
      cout << "|   D A T A   M U R I D   |\n";
      cout << "+-------------------------+\n";
      cout << endl;
      traversalMurid(dataMurid);
      cout << "Jika ingin ke menu utama, ketik huruf 'Y' dan tekan enter!\n";
      cin >> pil;
      if(pil == 'Y' | pil == 'y'){
      	system("cls");
        goto menu;
      } 
      break; 
    case 'C':{ //Case Input Pegawai
      system("cls");
      int id_peg;
      string nama_peg;
      int tgl_lahir_peg;
      string bln_lahir_peg;
      int thn_lahir_peg;
      char jk_peg;
      string jabatan_peg;
      int gaji_peg;
      cout << "+---------------------------------------+" << endl;
  		cout << "|       I N P U T    P E G A W A I      |" << endl;
  		cout << "+---------------------------------------+" << endl;
      cout << "ID Pegawai 	 : "; cin >> id_peg;
      cout << "Nama Pegawai  : "; cin >> nama_peg;
      cout << "Tanggal Lahir : "; cin >> tgl_lahir_peg;
      cout << "Bulan Lahir	 : "; cin >> bln_lahir_peg;
      cout << "Tahun Lahir	 : "; cin >> thn_lahir_peg;
      cout << "Jenis Kelamin : "; cin >> jk_peg;
      cout << "Jabatan			 : "; cin >> jabatan_peg;
      cout << "Gaji					 : "; cin >> gaji_peg;
      cout << "----------------------------------------- \n";
      createElementPeg(pNewPeg, id_peg, nama_peg, tgl_lahir_peg, bln_lahir_peg, thn_lahir_peg, jk_peg, jabatan_peg, gaji_peg);
      addPeg(dataPeg, pNewPeg);
      cout << "Data berhasil diinput!\n";
      cout << "Untuk ke menu utama, ketik 'Y' dan tekan enter\n"; cin >> pil;
      if(pil == 'Y' ||  pil == 'y'){
        system("cls");
      	goto menu;
      }
      }break;
          
    case 'D':{ // Case Input Murid
  		system("cls");
      int id_murid;
      string nama_murid;
      int tgl_lahir_murid;
      string bln_lahir_murid;
      int thn_lahir_murid;
      char jk_murid;
      string alamat_murid;
      int kelas_murid;
      string jurusan_murid;
      cout << "+---------------------------------------+" << endl;
  		cout << "|        I N P U T    M U R I D         |" << endl;
  		cout << "+---------------------------------------+" << endl;
      cout << "ID Murid 		 : "; cin >> id_murid;
      cout << "Nama Murid	   : "; cin >> nama_murid;
      cout << "Tanggal Lahir : "; cin >> tgl_lahir_murid;
      cout << "Bulan Lahir	 : "; cin >> bln_lahir_murid;
      cout << "Tahun Lahir	 : "; cin >> thn_lahir_murid;
      cout << "Jenis Kelamin : "; cin >> jk_murid;
      cout << "Alamat 			 : "; cin >> alamat_murid;
      cout << "Kelas				 : "; cin >> kelas_murid;
      cout << "Jurusan    	 : "; cin >> jurusan_murid;
      cout << "-------------------------- \n";
      createElementMurid(pNewMurid, id_murid, nama_murid, tgl_lahir_murid, bln_lahir_murid, thn_lahir_murid, jk_murid, alamat_murid, kelas_murid, jurusan_murid);
      addMurid(dataMurid, pNewMurid);
      cout << "Data berhasil diinputkan!\n";
      cout << "Untuk ke menu utama, ketik 'Y' dan tekan enter\n"; cin >> pil;
      if(pil == 'Y' ||  pil == 'y'){
        system("cls");
      	goto menu;
      }
      }break;
    case 'E':{ //Case Hapus Salahsatu Data Pegawai
      system("cls");
      int id_peg_hapus;
      cout << "+-----------------------------------------+\n";
      cout << "|   H A P U S   D A T A   P E G A W A I   |\n";
      cout << "+-----------------------------------------+\n";
      cout << endl;
      cout << "Masukkan ID data yang ingin dihapus!\n";
      cout << "ID : "; cin >> id_peg_hapus;
			removePeg(dataPeg, pDeletePeg, id_peg_hapus);
      cout << "Data berhasil dihapus!\n";
      cout << "Untuk ke menu utama, ketik 'Y' dan tekan enter\n"; cin >> pil;
      if(pil == 'Y' ||  pil == 'y'){
        system("cls");
      	goto menu;
      }
      }break;
    case 'F':{
      system("cls");
      int id_murid_hapus;
      cout << "+-------------------------------------+\n";
      cout << "|   H A P U S   D A T A   M U R I D   |\n";
      cout << "+-------------------------------------+\n";
      cout << endl;
      cout << "Masukkan ID data yang ingin dihapus!\n";
      cout << "ID : "; cin >> id_murid_hapus;
			removeMurid(dataMurid, pDeleteMurid, id_murid_hapus);
      cout << "Data berhasil dihapus!\n";
      cout << "Untuk ke menu utama, ketik 'Y' dan tekan enter\n"; cin >> pil;
      if(pil == 'Y' ||  pil == 'y'){
        system("cls");
      	goto menu;
      }
      }break;
    case 'G':{
			konsul:
			system("cls");
			int pilihan;
			cout << "+------------------------+\n";
			cout << "|   Layanan Konsultasi   |\n";
			cout << "+------------------------+\n";
			cout << endl;
			cout << "Pilihan: \n";
			cout << "1.Tambah murid untuk konsultasi\n";
			cout << "2.Giliran murid untuk konsultasi saat ini\n";
			cout << "3.Ganti giliran konsultasi\n";
			cout << endl << "Masukkan pilihan (dengan angka): "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
        case 1:{
          system("cls");
      		cout << "+------------------------+\n";
					cout << "|   Layanan Konsultasi   |\n";
					cout << "+------------------------+\n";
          cout << endl;
          pointer newElement;
          string id, nama, keterangan;
          int nilai;
          cout << "Masukkan informasi! \n";
          cout << "ID					: "; cin >> id;
          cout << "Nama				: "; cin >> nama;
          cout << "Keterangan	: "; cin >> keterangan;
          createElement(newElement, id, nama, keterangan, nilai);
          enqueue(Q, newElement);
          cout << endl << "Data berhasil ditambahkan!\n";
          cout << endl << "Kembali ke menu layanan konsultasi? (Y/N)\n";
          cin >> pil;
          if(pil == 'Y' || pil == 'y'){
          	system("cls");
            goto konsul;
          } else{
            system("cls");
          	goto menu;
          }
          }break;
        case 2:{
          system("cls");
      		cout << "+------------------------+\n";
					cout << "|   Layanan Konsultasi   |\n";
					cout << "+------------------------+\n";
          cout << endl;
          cout << "Giliran saat ini:\n";
        	front(Q);
          cout << endl << "Kembali ke menu layanan konsultasi? (Y/N)\n";
          cin >> pil;
          if(pil == 'Y' || pil == 'y'){
          	system("cls");
            goto konsul;
          } else{
            system("cls");
          	goto menu;
          }
        }break;
        case 3:{
          system("cls");
      		cout << "+------------------------+\n";
					cout << "|   Layanan Konsultasi   |\n";
					cout << "+------------------------+\n";
          cout << endl;
          dequeue(Q, pDel);
          cout << "Ganti giliran berhasil!\n";
          cout << endl << "Kembali ke menu layanan konsultasi? (Y/N)\n";
          cin >> pil;
          if(pil == 'Y' || pil == 'y'){
          	system("cls");
            goto konsul;
          } else{
            system("cls");
          	goto menu;
          }
          }break;
      }
      }break;
    case 'H':{
      system("cls");
      goto exit;
      }break;
  }
  exit:
	return 0;
}