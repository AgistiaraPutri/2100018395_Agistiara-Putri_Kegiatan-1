#include <iostream>
using namespace std;
 struct node{
	 char nama[20];
	 long nim;
	 node *next;
 };
class program{
	public:
		void tambah_awal_list();
		void menambah_node_di_akhir();
		void display_list();
		node *awal_ptr = NULL;
	private:
 		node *posisi;
 		node *baru;
		
};

void program::tambah_awal_list(){
	 baru = new node;
	 cout << "Masukkan Nama : ";
	 cin >> baru->nama;
	 cout << "Masukkan NIM : ";
	 cin >> baru->nim;
	 baru->next = NULL;
	 if(awal_ptr == NULL){
		 awal_ptr=baru;
		 awal_ptr->next = NULL;
	 }
	 else{
		baru->next = awal_ptr;
	 	awal_ptr = baru;
	 }
 }

void program::menambah_node_di_akhir() {
	 node *temp, *temp2;

	 temp = new node;
	 cout << "Masukkan Nama : ";
	 cin >> temp->nama; 
	 cout << "Masukkan Nim : ";
	 cin>>temp->nim;
	 
	 if (awal_ptr == NULL){
		 awal_ptr = temp;
		 posisi = awal_ptr;
	 }
	 else {
	 	temp2 = awal_ptr;
		while (temp2->next != NULL){
				temp2 = temp2->next;
		}
	 temp2->next = temp;
	 }
}

void program::display_list(){
	 node *temp;
	 temp = awal_ptr;
	 cout << endl;
	 if (temp == NULL)
		 cout << "List kosong!" << endl;
	 else{
		 cout<<"Nama\t     | Nim"<<endl;
		 cout<<"------------------------"<<endl;
	 while (temp != NULL){ 
		 cout << ""<<temp->nama << "";
		 cout << "\t       | " << temp->nim<<""; 
	 	if (temp == posisi)
			 cout << " <<<< posisi node";
			 cout << endl;
			 temp = temp->next;
	 }
	 cout << "->NULL (Akhir list!)"<<endl;
	 }
}
 int main(){
 program pntr;
 int option = 0;
 do{
	pntr.display_list();
	cout<<endl;
   cout << "Program input mahasiswa pada lomba parmatika"<<endl;
	cout<<"Menu:"<<endl;
	cout<<"0. keluar program"<<endl;
	cout<<"1. Tambah awal list"<<endl;
	cout<<"2. Tambah akhir list"<<endl;
	cout<<"\nPilihan:"; cin>> option;
	switch (option){
		case 1 : pntr.tambah_awal_list();
		break;
		case 2 : pntr.menambah_node_di_akhir();
		break;
	}
}
	while (option != 0);
}