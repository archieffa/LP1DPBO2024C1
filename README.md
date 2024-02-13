# JANJI

Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 1 dalam mata kuliah
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin.

# DESKRIPSI TUGAS

Buatlah program berbasis OOP menggunakan bahasa pemrograman C++, Java,
Python, dan PHP yang menampilkan informasi daftar anggota DPR (sekumpulan
objek anggota DPR) dan memiliki fitur menambah, mengubah, dan menghapus data.
Setiap anggota DPR memiliki data id, nama, nama bidang, nama partai, dan foto
profil (khusus bahasa PHP).

# DESAIN KODE PROGRAM

Program ini menggunakan satu kelas yaitu 'AnggotaDPR' untuk merepresentasikan data anggota DPR. Kelas 'AnggotaDPR' memiliki atribut sebagai berikut:

- dataID: menyimpan ID anggota DPR dalam bentuk int
- nama: menyimpan nama anggota DPR dalam bentuk string, berfungsi sebagai Primary Key
- bidang: menyimpan nama bidang anggota DPR dalam bentuk string
- partai: menyimpan nama partai anggota DPR dalam bentuk string

Kelas ini memiliki setter dan getter untuk setiap atributnya, sehingga program dapat melakukan operasi CRUD (Create, Read, Update dan Delete) pada data anggota DPR. Penyimpanan data anggota DPR menggunakan struktur data tabel. 

# ALUR PROGRAM

Semua program mempunyai alur yang sama, kecuali program PHP yang inputan datanya berupa hardcode dan memiliki satu atribut tambahan yaitu atribut untuk path foto. Alur programnya adalah sebagai berikut:

- User mulai menjalankan program.
- User diberikan opsi untuk memilih fitur:
    - Tambah Data Anggota DPR
    - Ubah Data Anggota DPR
    - Hapus Data Anggota DPR
    - Tampilkan Data Anggota DPR
    - Selesai
- User memilih satu fitur.
- Program melakukan operasi sesuai fitur yang dipilih user. Pada operasi ubah dan hapus, user diminta untuk memasukkan dataID dari anggota DPR yang dituju. Pada operasi ubah, user juga diminta untuk memberikan data lengkap dari anggota DPR, sama seperti saat operasi tambah.
- Program terus berjalan selama user masih memilih diantara 4 fitur, sedangkan program akan berhenti ketika user memilih satu fitur yaitu fitur “Selesai”.

# DOKUMENTASI
## CPP
![tambahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/1235a9ea-3339-4761-9a22-acb59d09f492)
![ubahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/6243d438-75fc-4953-84a5-e21f479fb162)
![hapusData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/54e1b5b4-43e6-4f77-8b26-0e9ea89c1279)
![tampilkanData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/a96999d4-c2a1-4024-90d9-a1d364c35827)
![selesai](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/2218e5a4-6018-4173-90fb-10718c3589c4)

## Java
![tambahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/5cf2866c-7d6e-4597-ac18-a4d25a608f68)
![ubahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/c597ef1d-a184-4489-8a6f-588608968d4f)
![hapusData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/3a7b326e-e1d2-4e5f-a6f2-2068b1a9a440)
![tampilkanData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/2d3bc801-4e94-4f85-a3a8-756eba4d6152)
![selesai](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/bea25b39-e2cc-4147-bdc2-1dc1d906b80e)

## Python
![tambahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/5ac664da-5423-4df4-bd87-1b5107526127)
![ubahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/b9f777ad-86cb-4a60-8c59-8e32ee5039d0)
![hapusData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/14121ea3-7496-4f71-a03d-e1197fccc47c)
![tampilkanData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/08a41a88-9637-4072-9161-e8e6e394a15d)
![selesai](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/be6d9c15-3107-4c5f-a9c9-f1f243331e03)

## PHP
![tambahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/97c99258-a831-46f9-8cd0-76d2c9a36285)
![ubahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/97b239e0-7113-4a1b-9796-ec79489eb8d0)
![hapusData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/febe9085-ac6c-4517-8265-3ba73969e01a)















