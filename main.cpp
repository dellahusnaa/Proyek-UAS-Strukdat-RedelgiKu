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
	pegawai *nextPeg;
  pegawai *prevPeg;
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
  murid *nextMurid;
  murid *prevMurid;
};

typedef murid *nodeMurid;
typedef nodeMurid listMurid;

void mainMenu(){}

void traversalPeg(listPeg &head){
  if(head == nullptr){
  	cout << "Data tidak tersedia!\n";
  } else{
  	nodePeg pHelp = head;
    while(pHelp != nullptr){
    	cout << "ID Pegawai				: " << pHelp->id << endl;
      cout << "Nama	Pegawai			: " << pHelp->nama << endl;
      cout << "Tanggal Lahir		: " << pHelp->tgl_lahir << "/" << pHelp->bln_lahir << "/" << pHelp->thnLahir << endl;
      if(pHelp->jk == 'L' || pHelp->jk == 'l'){
        cout << "Jenis Kelamin		: Laki-laki\n";
      } else if(pHelp->jk == 'P' || pHelp->jk == 'p'){
        cout << "Jenis Kelamin		: Perempuan\n";
      } else{
      	cout << "Jenis Kelamin		: Tidak diketahui\n";
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
      cout << "Tanggal Lahir		: " << pHelp->tgl_lahir << "/" << pHelp->bln_lahir << "/" << pHelp->thnLahir << endl;
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
      pHelp = pHelp->nextMurid;
    }
    cout << "------------------------------------------------------------------------------------\n";
  } 
}
    
void addPeg(){}
    
void addMurid(){}
    
void removePeg(){}
    
void removeMurid(){}
    
void editPeg(){}
    
void editMurid(){}
    
void qKonsultasi(){}
    
int main(){
  listPeg dataPeg = nullptr;
  listMurid dataMurid = nullptr;
  mainMenu();
	return 0;
}