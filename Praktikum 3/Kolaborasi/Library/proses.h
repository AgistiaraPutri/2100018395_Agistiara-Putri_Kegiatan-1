using namespace std;

class Proses {
	public :
		void getData(){
			ambil_data.open("api_data.txt");
			bool ayam_geprek = true;
      bool ayam_goreng = true;
      bool udang_goreng = true;
      bool cumi_goreng = true;
        while(!ambil_data.eof()){
          if (ayam_geprek){
            ambil_data >> bnyk_aymGpr;
            ayam_geprek = false;
          }
          else if(ayam_goreng){
            ambil_data >> bnyk_aymGr;
            ayam_goreng = false;
          } 
          else if(udang_goreng){
            ambil_data >> bnyk_udgGr;
            udang_goreng = false;
          } 
          else if(cumi_goreng){
            ambil_data >> bnyk_cumGr;
            cumi_goreng = false;
          } 
          else{
            ambil_data >> bnyk_aymBkr;
          } 
        }
        ambil_data.close();
       }

      void toFile(){
        int total = (hrg_aymGpr * bnyk_aymGpr ) + (hrg_aymGr * bnyk_aymGr ) +(hrg_udgGr * bnyk_udgGr ) + (hrg_cumGr * bnyk_cumGr ) + (hrg_aymBkr * bnyk_aymBkr );

        int ongkir;
        int jarak;
        int batas_jarak = 3;

        if(jarak > batas_jarak){
          ongkir = 25000;
        }
        else{
          ongkir = 15000;
        }
        float batas = 25000;
        int pokir;
        int akhir;
        int biaya_ongkir;
        int potbel;
        if(total > batas && total <= 50000){
          pokir = 3000;
          potbel = 0;
          biaya_ongkir = ongkir - pokir;
          akhir = total - potbel + biaya_ongkir;
        }
         else if(total >= 50000 && total < 150000){
          pokir = 5000;
          potbel = total * 0.15;
          biaya_ongkir = ongkir - pokir;
          akhir = total - potbel + biaya_ongkir;
          
        }
        if(total >= 150000){
          pokir = 8000;
          potbel = total * 0.35;
          biaya_ongkir = ongkir - pokir;
          akhir = total - potbel + biaya_ongkir;
        }


        tulis_data.open("api_data.txt");
        tulis_data << total << endl;
        tulis_data << ongkir << endl; 
        tulis_data << potbel << endl;
        tulis_data << pokir << endl;
        tulis_data << akhir << endl;
        tulis_data << bnyk_aymGpr << endl;
        tulis_data << bnyk_aymGr << endl;
        tulis_data << bnyk_udgGr << endl;
        tulis_data << bnyk_cumGr << endl;
        tulis_data << bnyk_aymBkr;
        tulis_data.close();
      }


    private :
      ifstream ambil_data;
      ofstream tulis_data;
      int bnyk_aymGpr;
      int bnyk_aymGr;
      int bnyk_udgGr;
      int bnyk_cumGr;
      int bnyk_aymBkr;
      int hrg_aymGpr = 21000;
      int hrg_aymGr = 17000;
      int hrg_udgGr = 19000;
      int hrg_cumGr = 20000;
      int hrg_aymBkr = 25000;
};