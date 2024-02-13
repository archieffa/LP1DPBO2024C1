/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 1 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */

// impor library dan file
#include <bits/stdc++.h> 
#include "AnggotaDPR.cpp"

using namespace std;

void tampilanTabel(list<AnggotaDPR> llist)
{
    // mencari panjang maksimum untuk setiap kolom
    int panjangMaxID = 0;
    int panjangMaxNama = 0;
    int panjangMaxBidang = 0;
    int panjangMaxPartai = 0;

    // mencari panjang maksimum untuk setiap kolom dalam tabel
    for(list<AnggotaDPR>::iterator it = llist.begin(); it != llist.end(); it++) 
    {
        // menghitung panjang ID saat ini
        int currentIDLength = to_string(it->get_dataID()).length();
        if(currentIDLength > panjangMaxID) 
        {
            panjangMaxID = currentIDLength;
        }
        
        // menghitung panjang nama saat ini
        int currentNamaLength = it->get_nama().length();
        if(currentNamaLength > panjangMaxNama) 
        {
            panjangMaxNama = currentNamaLength;
        }
        
        // menghitung panjang bidang saat ini
        int currentBidangLength = it->get_bidang().length();
        if(currentBidangLength > panjangMaxBidang) 
        {
            panjangMaxBidang = currentBidangLength;
        }
        
        // menghitung panjang partai saat ini
        int currentPartaiLength = it->get_partai().length();
        if(currentPartaiLength > panjangMaxPartai) 
        {
            panjangMaxPartai = currentPartaiLength;
        }
    }

    // mencetak pesan "Data kosong" jika tabel kosong
    if(llist.empty()) 
    {
        cout << "Data kosong." << '\n';
    }
    else
    {
        // menampilkan tabel dengan lebar kolom yang sesuai
        // menampilkan garis pembatas
        cout << "+-" << string(max(panjangMaxID, (int)strlen("ID")), '-') << "-+-"
            << string(max(panjangMaxNama, (int)strlen("Nama")), '-') << "-+-"
            << string(max(panjangMaxBidang, (int)strlen("Bidang")), '-') << "-+-"
            << string(max(panjangMaxPartai, (int)strlen("Partai")), '-') << "-+" << '\n';

        cout << left; // mengatur rata kiri untuk semua output

        // menampilkan kepala tabel dengan lebar kolom yang sesuai
        // setw digunakan untuk mengatur lebar output agar sesuai dengan lebar maksimum yang ditetapkan dan 
        // setiap kolom memiliki lebar yang sama
        cout << "| " << setw(max(panjangMaxID, (int)strlen("ID"))) << "ID" << " | "
            << setw(max(panjangMaxNama, (int)strlen("Nama"))) << "Nama" << " | "
            << setw(max(panjangMaxBidang, (int)strlen("Bidang"))) << "Bidang" << " | "
            << setw(max(panjangMaxPartai, (int)strlen("Partai"))) << "Partai" << " |" << '\n';
 
        // menampilkan garis pembatas
        cout << "+-" << string(max(panjangMaxID, (int)strlen("ID")), '-') << "-+-"
            << string(max(panjangMaxNama, (int)strlen("Nama")), '-') << "-+-"
            << string(max(panjangMaxBidang, (int)strlen("Bidang")), '-') << "-+-"
            << string(max(panjangMaxPartai, (int)strlen("Partai")), '-') << "-+" << '\n';

        // menampilkan data anggota DPR
        for(list<AnggotaDPR>::iterator it = llist.begin(); it != llist.end(); it++) 
        {
            cout << "| " << setw(max(panjangMaxID, (int)strlen("ID"))) << it->get_dataID() << " | "
                << setw(max(panjangMaxNama, (int)strlen("Nama"))) << it->get_nama() << " | "
                << setw(max(panjangMaxBidang, (int)strlen("Bidang"))) << it->get_bidang() << " | "
                << setw(max(panjangMaxPartai, (int)strlen("Partai"))) << it->get_partai() << " |" << '\n';
        }

        // menampilkan garis pembatas
        cout << "+-" << string(max(panjangMaxID, (int)strlen("ID")), '-') << "-+-"
            << string(max(panjangMaxNama, (int)strlen("Nama")), '-') << "-+-"
            << string(max(panjangMaxBidang, (int)strlen("Bidang")), '-') << "-+-"
            << string(max(panjangMaxPartai, (int)strlen("Partai")), '-') << "-+" << '\n';
    }
    cout << '\n';
}

int main()
{
    // deklarasi variabel
    int i, n = 0;
    int dataID;
    string nama;
    string bidang;
    string partai;

    // deklarasi list dari objek AnggotaDPR
    list<AnggotaDPR> llist;

    cout << '\n' << "Selamat datang di program manajemen Anggota DPR!" << "\n\n";

    int pilih;  // variabel untuk memilih fitur
    do
    {
        // menampilkan pilihan fitur
        cout << "Silahkan pilih salah satu fitur dari opsi berikut:" << '\n';
        cout << "1. Tambah Data Anggota DPR" << '\n';
        cout << "2. Ubah Data Anggota DPR" << '\n';
        cout << "3. Hapus Data Anggota DPR" << '\n';
        cout << "4. Tampilkan Data Anggota DPR" << '\n';
        cout << "5. Selesai" << '\n';
        cout << "Fitur yang dipilih: ";

        cin >> pilih;  // memilih fitur
        cout << '\n';

        // memproses pilihan fitur yang dipilih
        switch(pilih)
        {
            case 1:  // menambahkan data anggota DPR baru
            {
                // memasukkan jumlah anggota DPR
                cout << "Masukkan jumlah anggota DPR: ";
                cin >> n;
                cin.ignore(); // untuk membersihkan newline dari input sebelumnya

                for(i = 0 ; i < n ; i++) 
                {
                    // memasukkan ID, nama, bidang, dan partai dari anggota
                    cout << "ID: ";
                    cin >> dataID;
                    cin.ignore(); // untuk membersihkan newline dari input sebelumnya
                    cout << "Nama: ";
                    getline(cin, nama); // menggunakan getline untuk membaca nama yang mungkin mengandung spasi
                    cout << "Bidang: ";
                    getline(cin, bidang);
                    cout << "Partai: ";
                    getline(cin, partai);

                    // membuat objek AnggotaDPR baru dengan data yang dimasukkan dan menambahkannya ke dalam list
                    AnggotaDPR temp(dataID, nama, bidang, partai);
                    llist.push_back(temp);
                }

                // menampilkan pesan bahwa data telah ditambahkan
                cout << '\n' << "Data anggota DPR telah ditambahkan." << "\n\n";
                tampilanTabel(llist);  // memanggil prosedur tampilanTabel dengan menggunakan llist sebagai data yang akan ditampilkan 
                break;
            }

            case 2:  // mengubah data anggota DPR
            {
                // memasukkan ID yang ingin diubah datanya
                cout << "Masukkan ID dari anggota DPR yang ingin diubah datanya: ";
                cin >> dataID;

                // mengatur variabel untuk menandai apakah pencarian berhasil atau tidak
                int hasilPencarian = -1;

                // mencari anggota DPR dengan ID yang sesuai
                list<AnggotaDPR>::iterator it = llist.begin();
                while(it != llist.end()) 
                {
                    // jika ID ditemukan, masukkan data baru
                    if(it->get_dataID() == dataID) 
                    {
                        hasilPencarian = 1; // pencarian berhasil
                        cout << "ID: ";
                        cin >> dataID;
                        cin.ignore(); // untuk membersihkan newline dari input sebelumnya
                        cout << "Nama: ";
                        getline(cin, nama); // menggunakan getline untuk membaca nama yang mungkin mengandung spasi
                        cout << "Bidang: ";
                        getline(cin, bidang);
                        cout << "Partai: ";
                        getline(cin, partai);

                        // mengatur data baru untuk anggota DPR yang sesuai
                        it->set_dataID(dataID);
                        it->set_nama(nama);
                        it->set_bidang(bidang);
                        it->set_partai(partai);

                        // menampilkan pesan bahwa data telah diubah
                        cout << '\n' << "Data anggota DPR dengan ID " << dataID << " telah diubah!" << "\n\n";
                        break;
                    }
                    it++;
                }

                if(hasilPencarian == -1) 
                {
                    cout << '\n' << "ID tidak ditemukan." << "\n\n";
                }

                tampilanTabel(llist);  // memanggil prosedur tampilanTabel dengan menggunakan llist sebagai data yang akan ditampilkan 
                break;
            }

            case 3:  // menghapus data anggota DPR
            {
                // memasukkan ID yang ingin dihapus datanya
                cout << "Masukkan ID dari anggota DPR yang ingin diubah datanya: ";
                cin >> dataID;

                // mengatur variabel untuk menandai apakah pencarian berhasil atau tidak
                int hasilPencarian = -1;

                // mencari anggota DPR dengan ID yang sesuai
                list<AnggotaDPR>::iterator it = llist.begin();
                while(it != llist.end()) 
                {
                    // jika ID ditemukan, hapus anggota DPR dari tabel
                    if(it->get_dataID() == dataID) 
                    {
                        hasilPencarian = 1; // Pencarian berhasil
                        it = llist.erase(it);

                        // menampilkan pesan bahwa data telah dihapus
                        cout << '\n' << "Data anggota DPR dengan ID " << dataID << " telah dihapus!" << "\n\n";
                        break;
                    }
                    it++;
                }

                if(hasilPencarian == -1) 
                {
                    cout << '\n' << "ID tidak ditemukan." << "\n\n";
                }

                tampilanTabel(llist);  // memanggil prosedur tampilanTabel dengan menggunakan llist sebagai data yang akan ditampilkan 
                break;
            }

            case 4:  // menampilkan data anggota DPR
            { 
                tampilanTabel(llist);  // memanggil prosedur tampilanTabel dengan menggunakan llist sebagai data yang akan ditampilkan 
                break;
            }
            
            case 5:  // selesai menggunakan fitur
            {
                // menampilkan pesan bahwa pengguna telah selesai menggunakan fitur
                cout << "Terima kasih telah menggunakan fitur-fitur dari program manajemen Anggota DPR!" << '\n';
                break;
            }
        } 
    }
    while(pilih != 5);
    
    return 0;
}