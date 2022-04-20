#include<iostream>
using namespace std;

class datamhs{
	public:
		void matkul(int);
		void output(int);
	private:
		string matkul1[100];
		int n;
		int sks[100];
};

void datamhs::matkul(int n){
	if(n==0){

	}
	else{
		cout<<"\nNama Matkul\t: "; cin>>matkul1[n];
		cout<<"Banyak sks\t: ";cin>>sks[n];
		(matkul(n-1));
	}
}

void datamhs::output(int n){
	int biaya,disc,totsel,totsks;	
	cout<<"\nNo.\tDaftar Matkul\tsks"<<endl;
	for(int i=0; i<n; i++){
		cout<<i+1<<"\t"<<matkul1[i+1]<<"\t\t"<<sks[i+1]<<endl;
		totsks+=sks[i+1];
	}
	cout<<"\nTotal SKS = "<<totsks;
	cout<<"\n================================"<<endl;
	biaya = totsks * 120000;
	disc = biaya * 0.15;
	totsel = biaya - disc;
	cout<<"Total Biaya = "<<totsel;
}
int main(){
	int n;
	long nim;
	string nama;
	datamhs sks;
	cout<<"Masukkan Nama\t: "; cin>>nama;
	cout<<"Masukkan Nim\t: "; cin>>nim;
	cout<<"Masukkan jumlah matkul : "; cin>>n;
	sks.matkul(n);
	cout<<"================================="<<endl;
	cout<<"Nama mahasiswa : "<<nama<<endl;
	cout<<"Nim mahasiswa : "<<nim<<endl;
	sks.output(n);
	return 0;
}
