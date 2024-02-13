/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 1 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        List<AnggotaDPR> llist = new ArrayList<>();  // membuat list untuk menyimpan objek AnggotaDPR

        System.out.println("\nSelamat datang di program manajemen Anggota DPR!\n");

        int pilih;
        int hasilPencarian = -1;
        do 
        {
            System.out.println("Silahkan pilih salah satu fitur dari opsi berikut:");
            System.out.println("1. Tambah Data Anggota DPR");
            System.out.println("2. Ubah Data Anggota DPR");
            System.out.println("3. Hapus Data Anggota DPR");
            System.out.println("4. Tampilkan Data Anggota DPR");
            System.out.println("5. Selesai");
            System.out.print("Fitur yang dipilih: ");
            pilih = scanner.nextInt();
            scanner.nextLine(); // membaca newline setelah meminta input pilihan

            switch(pilih) 
            {
                case 1:
                    tambahDataAnggotaDPR(scanner, llist);
                    tampilanTabel(llist);
                    break;

                case 2:
                    ubahDataAnggotaDPR(scanner, llist);
                    tampilanTabel(llist);
                    break;

                case 3:
                    hapusDataAnggotaDPR(scanner, llist);
                    tampilanTabel(llist);
                    break;

                case 4:
                    tampilanTabel(llist);
                    break;

                case 5:
                    System.out.println("\nTerima kasih telah menggunakan fitur-fitur dari program manajemen Anggota DPR!");
                    break;

                default:
                    System.out.println("\nPilihan tidak valid. Silahkan pilih kembali.\n");
                    break;
            }
        } 
        while(pilih != 5);
    }

    // fungsi untuk menambah data anggota DPR
    public static void tambahDataAnggotaDPR(Scanner scanner, List<AnggotaDPR> llist) 
    {
        System.out.print("Masukkan jumlah anggota DPR: ");
        int n = scanner.nextInt();
        scanner.nextLine(); // membaca newline setelah meminta input jumlah anggota

        for (int i = 0; i < n; i++) 
        {
            System.out.print("ID: ");
            int dataID = scanner.nextInt();
            scanner.nextLine(); // membaca newline setelah meminta input ID
            System.out.print("Nama: ");
            String nama = scanner.nextLine();
            System.out.print("Bidang: ");
            String bidang = scanner.nextLine();
            System.out.print("Partai: ");
            String partai = scanner.nextLine();

            AnggotaDPR anggota = new AnggotaDPR(dataID, nama, bidang, partai);  // membuat objek AnggotaDPR baru
            llist.add(anggota);  // menambahkan objek AnggotaDPR ke dalam list
        }

        System.out.println("\nData anggota DPR telah ditambahkan.");
    }

    // fungsi untuk mengubah data anggota DPR
    public static void ubahDataAnggotaDPR(Scanner scanner, List<AnggotaDPR> llist) 
    {
        System.out.print("Masukkan ID dari anggota DPR yang ingin diubah datanya: ");
        int targetID = scanner.nextInt();
        scanner.nextLine(); // membaca newline setelah meminta input target ID

        // mengecek apakah data ditemukan
        AnggotaDPR anggotaDitemukan = null;
        for(AnggotaDPR anggota : llist) 
        {
            if(anggota.getDataID() == targetID) 
            {
                anggotaDitemukan = anggota;
                break;
            }
        }

        if(anggotaDitemukan != null) 
        {
            // meminta input untuk mengubah data anggota DPR
            System.out.print("ID: ");
            int dataID = scanner.nextInt();
            scanner.nextLine(); // membaca newline setelah meminta input ID
            System.out.print("Nama: ");
            String nama = scanner.nextLine();
            System.out.print("Bidang: ");
            String bidang = scanner.nextLine();
            System.out.print("Partai: ");
            String partai = scanner.nextLine();

            // mengubah data anggota DPR yang ditemukan
            anggotaDitemukan.setDataID(dataID);
            anggotaDitemukan.setNama(nama);
            anggotaDitemukan.setBidang(bidang);
            anggotaDitemukan.setPartai(partai);

            System.out.println("\nData anggota DPR dengan ID " + targetID + " telah diubah!");
        } 
        else 
        {
            System.out.println("\nID tidak ditemukan.");
        }
    }

    // fungsi untuk menghapus data anggota DPR
    public static void hapusDataAnggotaDPR(Scanner scanner, List<AnggotaDPR> llist) 
    {
        System.out.print("Masukkan ID dari anggota DPR yang ingin dihapus datanya: ");
        int targetID = scanner.nextInt();
        scanner.nextLine(); // membaca newline setelah meminta input target ID

        // mengecek apakah data ditemukan
        AnggotaDPR anggotaDitemukan = null;
        for(AnggotaDPR anggota : llist) 
        {
            if(anggota.getDataID() == targetID) 
            {
                anggotaDitemukan = anggota;
                break;
            }
        }

        // jika data ditemukan, hapus data tersebut dari ArrayList
        if(anggotaDitemukan != null) 
        {
            llist.remove(anggotaDitemukan);
            System.out.println("\nData anggota DPR dengan ID " + targetID + " telah dihapus!");
        } 
        else 
        {
            System.out.println("\nID tidak ditemukan.");
        }
    }

    // fungsi untuk menampilkan data anggota DPR dalam bentuk tabel
    public static void tampilanTabel(List<AnggotaDPR> llist) 
    {
        // mencetak pesan "Data kosong" jika tabel kosong
        if(llist.isEmpty()) 
        {
            System.out.println("\nData kosong.\n");
        } 
        else 
        {
            // mencari panjang maksimum untuk setiap kolom
            int panjangMaxID = 0;
            int panjangMaxNama = 0;
            int panjangMaxBidang = 0;
            int panjangMaxPartai = 0;

            // mencari panjang maksimum untuk setiap kolom dalam tabel
            for(AnggotaDPR anggota : llist) 
            {
                // menghitung panjang ID saat ini
                int currentIDLength = String.valueOf(anggota.getDataID()).length();
                if(currentIDLength > panjangMaxID) 
                {
                    panjangMaxID = currentIDLength;
                }

                // menghitung panjang nama saat ini
                int currentNamaLength = anggota.getNama().length();
                if(currentNamaLength > panjangMaxNama) 
                {
                    panjangMaxNama = currentNamaLength;
                }

                // menghitung panjang bidang saat ini
                int currentBidangLength = anggota.getBidang().length();
                if(currentBidangLength > panjangMaxBidang) 
                {
                    panjangMaxBidang = currentBidangLength;
                }

                // menghitung panjang partai saat ini
                int currentPartaiLength = anggota.getPartai().length();
                if(currentPartaiLength > panjangMaxPartai) 
                {
                    panjangMaxPartai = currentPartaiLength;
                }
            }

            // menampilkan tabel dengan lebar kolom yang sesuai
            // menampilkan garis pembatas
            System.out.println("\n+-" + repeatString("-", Math.max(panjangMaxID, "ID".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxNama, "Nama".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxBidang, "Bidang".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxPartai, "Partai".length())) + "-+");

             // menampilkan kepala tabel dengan lebar kolom yang sesuai
            System.out.printf("| %-" + Math.max(panjangMaxID, "ID".length()) + "s | %-" + Math.max(panjangMaxNama, "Nama".length()) + "s | %-" + Math.max(panjangMaxBidang, "Bidang".length()) + "s | %-" + Math.max(panjangMaxPartai, "Partai".length()) + "s |\n", "ID", "Nama", "Bidang", "Partai");

            // menampilkan garis pembatas
            System.out.println("+-" + repeatString("-", Math.max(panjangMaxID, "ID".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxNama, "Nama".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxBidang, "Bidang".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxPartai, "Partai".length())) + "-+");

            // menampilkan data anggota DPR
            for(AnggotaDPR anggota : llist) 
            {
                System.out.printf("| %-" + Math.max(panjangMaxID, "ID".length()) + "d | %-" + Math.max(panjangMaxNama, "Nama".length()) + "s | %-" + Math.max(panjangMaxBidang, "Bidang".length()) + "s | %-" + Math.max(panjangMaxPartai, "Partai".length()) + "s |\n",
                        anggota.getDataID(), anggota.getNama(), anggota.getBidang(), anggota.getPartai());
            }

            // menampilkan garis pembatas
            System.out.println("+-" + repeatString("-", Math.max(panjangMaxID, "ID".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxNama, "Nama".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxBidang, "Bidang".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxPartai, "Partai".length())) + "-+\n");
        }
    }

    // fungsi untuk mengulang string sebanyak n kali
    public static String repeatString(String str, int n) 
    {
        StringBuilder sb = new StringBuilder();
        for(int i = 0 ; i < n ; i++) 
        {
            sb.append(str);
        }
        return sb.toString();
    }
}