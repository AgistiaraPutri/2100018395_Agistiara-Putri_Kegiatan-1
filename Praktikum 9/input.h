using namespace std;

class Input{
public:
  void cetak(){
    cout<<"Masukkan banyak data : "; cin>>n;
    for(int i=0; i<n; i++){
      cout<<"Data ke-"<<i<<" = ";
      cin>>data[i];
    }
    for(int j=0; j<n; j++){
      cout<<data[j]<<" ";
    }
    cout<<endl;
    cout<<"Masukkan banyaknya kolom : "; cin>>kolom;
    cout<<"Masukkan banyaknnya baris : "; cin>>baris;
  }

  void toFile(){
    tulis_data.open("api_data.txt");
    tulis_data << n << endl;
    for(int i=0; i<n; i++){
      tulis_data << data[i] << "  ";
    }
    tulis_data << kolom << endl;
    tulis_data << baris << endl;
    tulis_data.close();
  }

private:
  ofstream tulis_data;
  int n, baris, kolom;
  int data[30];
  int data1[30][30];
};