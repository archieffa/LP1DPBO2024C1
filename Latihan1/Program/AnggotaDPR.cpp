// impor library
#include <iostream>
#include <string>
#include <iomanip>  // untuk mengatur output dengan presisi, lebar, dll

using namespace std; 
 
// mendefinisikan kelas AnggotaDPR
class AnggotaDPR
{
    // atribut private
    private:
        int dataID;
        string nama;
        string bidang;
        string partai;
    
    // atribut public
    public:
        // konstruktor default AnggotaDPR tanpa parameter
        AnggotaDPR()
        {
            // inisialisasi dengan nilai default
            this->dataID = 0;
            this->nama = "";
            this->bidang = "";
            this->partai = "";
        }

        // konstruktor AnggotaDPR dengan parameter
        AnggotaDPR(int dataID, string nama, string bidang, string partai)
        {
            // inisialisasi dengan nilai parameter
            this->dataID = dataID;
            this->nama = nama;
            this->bidang = bidang;
            this->partai = partai;
        }

        // get ID
        int get_dataID()
        {
            return dataID;
        }

        // set ID
        void set_dataID(int dataID)
        {
            this->dataID = dataID;
        }

        // get nama
        string get_nama()
        {
            return this->nama;
        }

        // set nama
        void set_nama(string nama)
        {
            this->nama = nama;
        }

        // get bidang
        string get_bidang()
        {
            return this->bidang;
        }

        // set bidang
        void set_bidang(string bidang)
        {
            this->bidang = bidang;
        }

        // get partai
        string get_partai()
        {
            return this->partai;
        }

        // set partai
        void set_partai(string partai)
        {
            this->partai = partai;
        }

        // destruktor 
        ~AnggotaDPR()
        {
            
        }
};