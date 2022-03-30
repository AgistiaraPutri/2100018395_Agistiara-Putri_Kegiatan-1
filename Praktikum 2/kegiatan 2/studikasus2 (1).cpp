#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int pilih, ongkir, jumlah, total, harga, totalhrg, potbel, pot_ong, akhir, haspot,totbel;
	string menu;
	float jarak;
	cout<<"===========================================\n";
	cout<<"	RUMAH MAKAN BERSAMA\n";
	cout<<"===========================================\n";
	
	cout<<"Pilihan Menu : \n";
	cout<<"1.Ayam geprek\t: 21000 \n2.Ayam goreng\t: 17000 \n3.Udang goreng\t: 19000 \n4.Cumi goreng\t: 20000 \n5.Ayam bakar\t: 25000"<<endl;
	cout<<"Masukkan pilihan anda : ";
	cin >> pilih;
	cout<<endl;
	
	switch (pilih) {
		case 1 :
			menu ="Ayam geprek";
			harga = 21000 ;
			cout<<"Jumlah pesanan : "; cin >> jumlah;
			total = harga * jumlah;
			break;
		case 2 :
			menu = "Ayam goreng";
			harga = 17000;
			cout<<"Jumlah pesanan : "; cin >> jumlah;
			total = harga * jumlah;
			break;
		case 3 :
			menu = "Udang goreng";
			harga = 19000;
			cout<<"Jumlah pesanan : "; cin >> jumlah;
			total = harga * jumlah;
			break;
		case 4 :
			menu = "Cumi goreng";
			harga = 20000;
			cout<<"Jumlah pesanan : "; cin >> jumlah;
			total = harga * jumlah;
			break;
		case 5 :
			menu = "Ayam bakar";
			harga = 25000;
			cout<<"Jumlah pesanan : "; cin >> jumlah;
			total = harga * jumlah;
			break;
		default :
			cout<<"Pilihan Menu Anda Tidak Ada!";
	}
	
	cout<<"Jarak Ongkir :"<<endl;
	cout<<"Masukkan pilihan jarak rumah anda (KM) : ";
	cin>>jarak;
	cout <<endl;
	if ( jarak<3){
		cout<<"Anda mendapat ongkir sebanyak 15000\n";
		ongkir = 15000;
		cout<<"Total ongkir = "<<ongkir;
	}
	else if (jarak>=3  ) {
		cout<<"Anda mendapat ongkir sebanyak 25000\n";
		ongkir = 25000;
		cout<<"Total ongkir = "<<ongkir;	
	}
	else {
		cout<<"!!!";
	}
	
	cout <<"\nTotal = " << total <<endl;
	cout<<"===========================\n";
	
	if (total>25000 && total<=50000){
		cout<<"Anda mendapat potongan biaya ongkir 3000"<<endl;
		pot_ong = 3000;
		haspot = ongkir - pot_ong;
		potbel = 0 ;
		totbel = total - potbel;
		akhir = total-potbel + haspot;
	}
	else if (total>50000 && total<=150000){
		cout<<"Anda mendapat potongan biaya ongkir 5000 dan diskon 15%"<<endl;
		pot_ong = 5000;
		haspot = ongkir - pot_ong;
		potbel = total * 0.15;
		totbel = total - potbel;
		akhir = total - potbel + haspot;
	}
	else if (total > 150000){
		cout<<"Anda mendapat potongan biaya ongkir 8000 dan diskon 35%"<<endl;
		pot_ong = 8000;
		haspot = ongkir - pot_ong;
		potbel = total * 0.35;
		totbel = total - potbel;
		akhir = total - potbel + haspot;
	}
	else {
		cout<<"Tidak mendapat potongan!";
	}
	
	cout<<endl<<endl;
	cout<<"================================"<<endl;
	cout<<"\tSTRUK PEMBAYARAN"<<endl;
	cout<<"================================"<<endl;
	cout<<"Pilihan Menu\t: "<<"\n"<<menu<<endl;
	cout<<jumlah<<" x "<<harga<<"\t Rp.\t"<<total<<endl;
	cout<<"================================"<<endl;
	cout<<"\tJUMLAH : Rp.\t"<<total<<endl;
	cout<<"\tONGKIR : Rp.\t"<<ongkir<<endl;
	cout<<"\tPOTONGAN BELANJA : Rp.\t"<<potbel<<endl;
	cout<<"\tPOTONGAN ONGKIR : Rp.\t"<<pot_ong<<endl;
	cout<<"\tTOTAL  : Rp.\t"<<akhir<<endl;
	cout<<"\t----------------------"<<endl;
	cout<<"================================"<<endl;
	return 0;
}


