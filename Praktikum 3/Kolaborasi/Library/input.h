using namespace std;

class Input{
public:
 void cetak(){
  cout << "Rumah Makan Bersama \n";
  cout << "Pilihan Menu : \n";
  cout << "1. Ayam Geprek Rp.21000 \n";
  cout << "2. Ayam Goreng Rp.17000 \n";
  cout << "3. Udang Goreng Rp.19000 \n";
  cout << "4. Cumi Goreng Rp.20000 \n";
  cout << "5. Ayam Bakar Rp.25000 \n";
  cout << "Pesan Ayam Geprek -> "; cin >> bnyk_aymGpr;
  cout << "Pesan Ayam Goreng -> "; cin >> bnyk_aymGr;
  cout << "Pesan Udang Goreng -> "; cin >> bnyk_udgGr;
  cout << "Pesan Cumi Goreng -> "; cin >> bnyk_cmGr;
  cout << "Pesan Ayam Bakar -> "; cin >> bnyk_aymBkr;
   cout << "Jarak rumah -> "; cin >> jarak;
}

void toFile(){
  tulis_data.open("api_data.txt");
  tulis_data<<bnyk_aymGpr << endl;
  tulis_data<<bnyk_aymGr << endl;
  tulis_data<<bnyk_udgGr << endl;
  tulis_data<<bnyk_cmGr << endl;
  tulis_data<<bnyk_aymBkr << endl;
  tulis_data<<jarak;
  tulis_data.close();
}

private :
ofstream tulis_data;
int bnyk_aymGpr;
int bnyk_aymGr;
int bnyk_udgGr; 
int bnyk_cmGr;
int bnyk_aymBkr;
int jarak;
};