#include<iostream>
using namespace std;

class data_mhs{
	public:
		int input();
		int proses();
		int output();
	private:
		int banyak, nilai[99], jumlah, min, mak, rata2;
		string nama_dosen, nama_matkul;
};
int data_mhs::input(){
	cout<<"Masukkan Nama dosen\t\t: "; 
	cin>>nama_dosen;
	cout<<"Masukkan Nama Mata kuliah\t: "; 
	cin>>nama_matkul;
	cout<<"Masukkan banyaknya nilai\t: "; 
	cin>>banyak;
	for(int i=0; i<banyak; i++){
          cout<<"Masukkan nilai ke-"<<i+1<<" : "; cin>>nilai[i];
     }
}
int data_mhs::proses(){
	mak = nilai[0];
	for(int i=0; i<banyak; i++){
		if(nilai[i] > mak){
			mak = nilai[i];
		}
	}	
	cout<<endl;
	cout<<"Nilai Maksimum\t: "<<mak;
	
	min = nilai[0];
	for(int i=0; i<banyak; i++){
		if(nilai[i] < min){
			min = nilai[i];
		}
	}	
	cout<<endl;
	cout<<"Nilai Minimum\t: "<<min<<endl;
	
	//rata-rata
	jumlah = 0;
	for(int i=0; i<banyak; i++){
		jumlah = jumlah+nilai[i];
	} 
	rata2 = jumlah / banyak;
	cout<<"Nilai Rata-rata : "<<rata2<<endl;
	
}
int data_mhs::output(){
	cout<<"========================="<<endl;
	cout<<"|         OUTPUT        |"<<endl;
	cout<<"========================="<<endl;
	cout<<"Nama Dosen    : "<<nama_dosen<<endl;
	cout<<"Matakuliah    : "<<nama_matkul<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Daftar Nilai  : "<<endl;
	for(int i=0; i<banyak; i++){
		cout<<"Nilai ke-"<<i+1<<"    : ";
		cout<<nilai[i]<<endl;
	}
	cout<<"-------------------------"<<endl;
	cout<<"Nilai maksimum : "<<mak<<endl;
	cout<<"Nilai minimum  : "<<min<<endl;
	cout<<"Rata-rata      : "<<rata2<<endl;
}
int main(){
	data_mhs mhs;
	mhs.input();
	cout<<endl;
	mhs.proses();
	cout<<endl;
	mhs.output();
}
