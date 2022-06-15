using namespace std;

class Output {
public:
  void cetak() {
    cout<<"\n================================"<<endl;
    cout << "Rak Buku Andi\n";
    cout << "\n\nSetelah di sorting"<<endl;
    for (j = 0; j < n; j++) {
      cout << data[j] << " ";
    }
    cout<<"\n\nSetelah disusun di dalam rak"<<endl;
    cout<<"Baris : "<<baris<<endl;
    cout<<"Kolom : "<<kolom<<endl;
    cout<<endl;
    for (int i = 0; i < baris; i++) {
      for (int j = 0; j < kolom; j++) {
        cout << data1[i][j] << " ";
      }
      cout << endl;
    }
  }

  void getData() {
    ambil_data.open("api_data.txt");
    ambil_data >> n;
    for (i = 0; i < n; i++) {
      ambil_data >> data[i];
    }
    for (j = 0; j < n; j++) {
      ambil_data >> data[j];
    }
    ambil_data >> kolom;
    ambil_data >> baris;
    for (int i = 0; i < baris; i++) {
      for (int j = 0; j < kolom; j++) {
        ambil_data >> data1[i][j];
      }
    }
    ambil_data.close();
  }

private:
  ifstream ambil_data;
  int i, j;
  int n, baris, kolom;
  int data[30];
  int data1[30][30];
};