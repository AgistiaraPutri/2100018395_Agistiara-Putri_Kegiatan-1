using namespace std;

class proses{
  public:
    void getData(){
      ambil_data.open("api_data.txt");
      ambil_data >> n;
      for(i=0;i<n;i++){
        ambil_data >> data[i];
      }
      ambil_data >> kolom;
      ambil_data >> baris;
      ambil_data.close();
    }

    void toFile(){
  
      tulis_data.open("api_data.txt");
      tulis_data << n << endl;
      for(i=0;i<n;i++){
        tulis_data << data[i] << " ";
      }
      tulis_data << endl;
      int m;
      m = n;
      for(i=1;i<m;i++){
        for(j=0; j<m-i; j++){
          if(data[j]>data[j+1]){
            temp = data[j];
            data[j] = data[j+1];
            data[j+1] = temp;
          }
        }
      }
      for(j=0;j<m;j++){
        tulis_data << data[j] << " ";
      }
      tulis_data << endl;
      tulis_data << kolom << endl;
      tulis_data << baris << endl;
      j = 0;
      for(int k=0;k<baris;k++){
        for(int l=0;l<kolom;l++){
          data1[k][l] = data[j];
          j++;
        }
      }
      for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
          tulis_data << data1[i][j]<<" ";
        }
      }
      tulis_data << endl;
      tulis_data.close();
}

  private:
  ifstream ambil_data;
  ofstream tulis_data;
  int n, i, j, baris, kolom, temp;
  int data[30];
  int data1[30][30];
};