# Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 1 dalam mata kuliah 
# Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
# dispesifikasikan. Aamiin. 

from AnggotaDPR import AnggotaDPR

def tampilan_tabel(llist):
    if not llist:
        print("\nData kosong.\n")
        return  # mengembalikan nilai dari fungsi jika llist kosong

    # mencari panjang maksimum untuk setiap kolom
    panjang_max_ID = max(len(str(anggota.get_dataID())) for anggota in llist)
    panjang_max_nama = max(len(anggota.get_nama()) for anggota in llist)
    panjang_max_bidang = max(len(anggota.get_bidang()) for anggota in llist)
    panjang_max_partai = max(len(anggota.get_partai()) for anggota in llist)

    # menentukan panjang maksimum untuk setiap kolom dalam kepala tabel
    panjang_max_ID_header = max(len("ID"), panjang_max_ID)
    panjang_max_nama_header = max(len("Nama"), panjang_max_nama)
    panjang_max_bidang_header = max(len("Bidang"), panjang_max_bidang)
    panjang_max_partai_header = max(len("Partai"), panjang_max_partai)

    # menampilkan tabel dengan lebar kolom yang sesuai
    # menampilkan garis pembatas dan kepala tabel dengan lebar kolom yang sesuai
    print("\n+-" + "-" * panjang_max_ID_header + "-+-" + "-" * panjang_max_nama_header + "-+-" + "-" * panjang_max_bidang_header + "-+-" + "-" * panjang_max_partai_header + "-+")
    print("| {:<{}} | {:<{}} | {:<{}} | {:<{}} |".format("ID", panjang_max_ID_header, "Nama", panjang_max_nama_header, "Bidang", panjang_max_bidang_header, "Partai", panjang_max_partai_header))
    print("+-" + "-" * panjang_max_ID_header + "-+-" + "-" * panjang_max_nama_header + "-+-" + "-" * panjang_max_bidang_header + "-+-" + "-" * panjang_max_partai_header + "-+")

    # menampilkan data anggota DPR
    for anggota in llist:
        print("| {:<{}} | {:<{}} | {:<{}} | {:<{}} |".format(anggota.get_dataID(), panjang_max_ID_header, anggota.get_nama(), panjang_max_nama_header, anggota.get_bidang(), panjang_max_bidang_header, anggota.get_partai(), panjang_max_partai_header))

    # menampilkan garis pembatas
    print("+-" + "-" * panjang_max_ID_header + "-+-" + "-" * panjang_max_nama_header + "-+-" + "-" * panjang_max_bidang_header + "-+-" + "-" * panjang_max_partai_header + "-+")
    print()

def main():
    llist = []  # inisialisasi list kosong untuk menyimpan data anggota DPR

    print("\nSelamat datang di program manajemen Anggota DPR!\n")

    while True:
        # menampilkan pilihan fitur
        print("Silahkan pilih salah satu fitur dari opsi berikut:")
        print("1. Tambah Data Anggota DPR")
        print("2. Ubah Data Anggota DPR")
        print("3. Hapus Data Anggota DPR")
        print("4. Tampilkan Data Anggota DPR")
        print("5. Selesai")
        pilih = int(input("Fitur yang dipilih: "))  # memilih fitur

        # memproses pilihan fitur yang dipilih
        if pilih == 1:  # menambahkan data anggota DPR baru
            # input data
            n = int(input("Masukkan jumlah anggota DPR: "))
            for _ in range(n):
                dataID = int(input("ID: "))
                nama = input("Nama: ")
                bidang = input("Bidang: ")
                partai = input("Partai: ")
                anggota = AnggotaDPR(dataID, nama, bidang, partai)  # membuat objek AnggotaDPR
                llist.append(anggota)  # menambahkan objek anggota ke dalam list
            print("\nData anggota DPR telah ditambahkan.")
            tampilan_tabel(llist)  # menampilkan tabel

        # mengubah data anggota DPR
        elif pilih == 2:  
            dataID = int(input("Masukkan ID dari anggota DPR yang ingin diubah datanya: "))
            for anggota in llist:
                if anggota.get_dataID() == dataID:  # mencari anggota dengan ID yang sesuai
                    # input data baru
                    anggota.set_dataID(int(input("ID: ")))
                    anggota.set_nama(input("Nama: "))
                    anggota.set_bidang(input("Bidang: "))
                    anggota.set_partai(input("Partai: "))
                    print("\nData anggota DPR dengan ID", dataID, "telah diubah!")
                    break
            else:
                print("\nID tidak ditemukan.")
            tampilan_tabel(llist)

        # menghapus data anggota DPR
        elif pilih == 3:  
            dataID = int(input("Masukkan ID dari anggota DPR yang ingin dihapus datanya: "))
            for anggota in llist:
                if anggota.get_dataID() == dataID:  # mencari anggota dengan ID yang sesuai
                    llist.remove(anggota)  # menghapus anggota dari list
                    print("\nData anggota DPR dengan ID", dataID, "telah dihapus!")
                    break
            else:
                print("\nID tidak ditemukan.")
            tampilan_tabel(llist)

        # menampilkan data anggota DPR
        elif pilih == 4:  
            tampilan_tabel(llist)
        
        # keluar dari program
        elif pilih == 5:  
            print("\nTerima kasih telah menggunakan program manajemen Anggota DPR!\n")
            break

if __name__ == "__main__":
    main()  # panggil fungsi main() saat program dijalankan