<?php

/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 1 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */

class AnggotaDPR 
{
    // atribut private
    private $dataID;
    private $nama;
    private $bidang;
    private $partai;
    private $foto; // menambahkan atribut untuk menyimpan path foto
    
    // konstruktor AnggotaDPR
    public function __construct($dataID = 0, $nama = "", $bidang = "", $partai = "", $foto = "") 
    {
        // inisialisasi dengan nilai parameter
        $this->dataID = $dataID;
        $this->nama = $nama;
        $this->bidang = $bidang;
        $this->partai = $partai;
        $this->foto = $foto; // menetapkan nilai path foto dari parameter
    }

    // get ID
    public function get_dataID() 
    {
        return $this->dataID;
    }

    // set ID
    public function set_dataID($dataID) 
    {
        $this->dataID = $dataID;
    }

    // get nama
    public function get_nama() 
    {
        return $this->nama;
    }

    // set nama
    public function set_nama($nama) 
    {
        $this->nama = $nama;
    }

    // get bidang
    public function get_bidang() 
    {
        return $this->bidang;
    }

    // set bidang
    public function set_bidang($bidang) 
    {
        $this->bidang = $bidang;
    }

    // get partai
    public function get_partai() 
    {
        return $this->partai;
    }

    // set partai
    public function set_partai($partai) 
    {
        $this->partai = $partai;
    }

    // get foto
    public function get_foto() 
    {
        return $this->foto;
    }

    // set foto
    public function set_foto($foto) 
    {
        $this->foto = $foto;
    }

    // menghitung panjang maksimum dari data yang akan ditampilkan di setiap kolom
    public static function getMaxLength($data) 
    {
        $max_length = 0;
        foreach($data as $item) 
        {
            $length = strlen($item);
            if($length > $max_length) 
            {
                $max_length = $length;
            }
        }
        return $max_length;
    }
}

?>