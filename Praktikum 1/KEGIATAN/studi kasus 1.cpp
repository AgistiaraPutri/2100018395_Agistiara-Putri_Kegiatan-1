#include<iostream>
using namespace std;
int main(){
	int pilihan,banyak,hitung,total,tunai,diskon,kembalian,harga;
	string menu;
	
	cout<<"============================="<<endl;
	cout<<"\tPILIHAN MENU"<<endl;
	cout<<"============================="<<endl;
	cout<<"1.Ayam Goreng\t Rp 17.000"<<endl;
	cout<<"2.Ayam Bakar\t Rp 21.000"<<endl;
	cout<<"============================="<<endl;
	cout<<endl;
	cout<<"Masukkan Pilihan Menu : "; cin>>pilihan;
	if(pilihan==1){
		menu = "Ayam goreng";
		harga = 17000;
		cout<<"Jumlah pesanan : "; cin>>banyak;
		hitung = 17000 * banyak;
		cout<<"Total = "<<hitung;
	}
	else if(pilihan==2){
		menu = "Ayam Bakar";
		harga = 21000;
		cout<<"Jumlah pesanan : "; cin>>banyak;
		hitung = 21000 * banyak;
		cout<<"Total = "<<hitung;
	}
	else{
		cout<<"Pilihan tidak tersedia"<<endl;
	}
	cout<<endl<<endl;
	cout<<"================================"<<endl;
	cout<<"\tSTRUK PEMBAYARAN"<<endl;
	cout<<"================================"<<endl;
	cout<<"Pilihan Menu\t: "<<"\n"<<menu<<endl;
	cout<<banyak<<" x "<<harga<<"\t Rp.\t"<<hitung<<endl;
	cout<<"================================"<<endl;
	cout<<"\tJUMLAH : Rp.\t"<<hitung<<endl;
	if(hitung>45000){
		diskon = hitung * 0.1;
		total = hitung - diskon;
	}
	else{
		diskon = 0;
		total = hitung - diskon;
	}
	cout<<"\tDISKON : Rp.\t"<<diskon<<endl;
	cout<<"\tTOTAL  : Rp.\t"<<total<<endl;
	cout<<"        TUNAI  : Rp.\t"; 
	cin>>tunai;
	cout<<"\t----------------------"<<endl;
	kembalian = tunai - total ;
	cout<<"    KEMBALIAN  : Rp.\t"<<kembalian<<endl;
	cout<<"================================"<<endl;
	return 0;
}
