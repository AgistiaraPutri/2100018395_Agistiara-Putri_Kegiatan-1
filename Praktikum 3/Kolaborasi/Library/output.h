using namespace std;

class Output {
	public:
		void cetak(){
			cout<<"STRUK PEMBAYARAN RUMAH MAKAN BERSAMA \n";
      cout<<"=========================\n";
			cout<<"Yang dibeli : \n";
			cout<<"Ayam geprek -> "<<data_file[5]<<endl;
      cout<<"Ayam goreng ->"<<data_file[6]<<endl;
      cout<<"Udang goreng ->"<<data_file[7]<<endl;
      cout<<"Cumi goreng ->"<<data_file[8]<<endl;
      cout<<"Ayam bakar ->"<<data_file[9]<<endl;
      cout<<"Harga Total Rp. -> "<<data_file[0]<<endl;
      cout<<"Ongkir Rp. -> "<<data_file[1]<<endl;
      cout<<"Potongan harga Rp. ->"<<data_file[2]<<endl;
      cout<<"Potongan ongkir Rp. ->"<<data_file[3]<<endl;
      cout<<"Harga Bayar Rp. -> "<<data_file[4]<<endl;
      cout<<"Terima kasih atas kunjungan Anda"; 
		}
		void getData(){
			ambil_data.open("api_data.txt");
			while(!ambil_data.eof()){
				ambil_data>>data_file[index];
        index += 1;
			}
      ambil_data.close();
		}

	private :
      ifstream ambil_data;
      string data_file[30];
      int index = 0;
};