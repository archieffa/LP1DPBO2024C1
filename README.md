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

- User mulai menjalankan program
- User diberikan opsi untuk memilih fitur:
    - Tambah Data Anggota DPR
    - Ubah Data Anggota DPR
    - Hapus Data Anggota DPR
    - Tampilkan Data Anggota DPR
    - Selesai
- User memilih satu fitur
- Program melakukan operasi sesuai fitur yang dipilih user. Pada operasi ubah dan hapus, user diminta untuk memasukkan dataID dari anggota DPR yang dituju. Pada operasi ubah, user juga diminta untuk menambahkan data baru dari anggota DPR yang dituju dataID-nya.
- Program terus berjalan selama user masih memilih diantara 4 fitur, sedangkan program akan berhenti ketika user memilih satu fitur yaitu fitur “Selesai”.

# DOKUMENTASI
## CPP
![tambahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/e872581f-2135-4e70-a15d-5d22c2829c77)
![ubahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/7d6b913e-a9b6-4e7c-8956-2d8e4c066758)
![hapusData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/0f86fd4f-b624-4ee0-9dac-b46c8d6ce45c)
![tampilkanData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/e2eb908d-26f8-4e35-98d9-61c8df9c6775)
![selesai](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/c94c4699-7a6d-4ded-ab37-851acb16936c)

## Java
![tambahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/eb418a52-7a5a-4fc8-8d57-31c279040a4c)
![ubahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/568f21e0-610d-4538-b1e9-7ee3baf7a5e5)
![hapusData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/b977e92b-9b2c-494a-8dc2-aec00de5c255)
![tampilkanData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/c90ddb13-70f6-4c6a-bf3e-74af8279e94a)
![selesai](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/de1276ff-3162-431f-922f-6f9068844635)

## Python
![tambahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/71820fec-27d7-4d0f-b62f-3ebaf1559425)
![ubahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/3bbdeedb-003b-4a7d-ad75-5193add737e5)
![hapusData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/6d4d2eed-cff5-4513-bdf4-a4cd6d57144a)
![tampilkanData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/479cbc72-619b-4291-ba26-d73b6e88941f)
![selesai](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/7c0cd306-f46b-40ed-9b11-ce036668131e)

## PHP
![tambahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/bf2b8ae4-16d1-4ca2-ac21-5094ffe8ed15)
![ubahData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/720518a8-37d0-4d03-83ce-e4a1e76c1d30)
![hapusData](https://github.com/archieffa/LP1DPBO2024C1/assets/121290445/44a65659-81ce-4a41-b08e-9a3f7095a83d)
