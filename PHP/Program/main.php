<?php

/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 1 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */

require('AnggotaDPR.php');

/* MENAMBAH DATA */

//membuat list dan diisi data
$list_anggota_dpr = array(
    new AnggotaDPR('1001', 'Daniel Katamandara', 'Pariwisata dan Kebudayaan', 'Perindo', 'dokyeom.jpg'),
    new AnggotaDPR('1002', 'Joshua Hadi', 'Hubungan Luar Negeri', 'Komanshu', 'joshua.jpg'),
    new AnggotaDPR('1003', 'Gazi Radhana', 'Sumber Daya Alam', 'Wagyu', 'mingyu.jpg'),
    new AnggotaDPR('1004', 'Hanggara Putra Maharaja', 'Perdagangan', 'Persihan', 'jeonghan.jpg')
);

echo "<h3>Data Anggota DPR</h3>";

// Mencari panjang maksimum untuk setiap kolom
$max_lengths = array(0, 0, 0, 0);

foreach ($list_anggota_dpr as $anggota) 
{
    $max_lengths[0] = max($max_lengths[0], strlen($anggota->get_dataID()));
    $max_lengths[1] = max($max_lengths[1], strlen($anggota->get_nama()));
    $max_lengths[2] = max($max_lengths[2], strlen($anggota->get_bidang()));
    $max_lengths[3] = max($max_lengths[3], strlen($anggota->get_partai()));
}

// Membuat tabel dengan lebar kolom yang sesuai
echo "<table border='1'>";
echo "<tr>";
echo "<th style='min-width: ".$max_lengths[0]."ch'>Data ID</th>";
echo "<th style='min-width: ".$max_lengths[1]."ch'>Nama</th>";
echo "<th style='min-width: ".$max_lengths[2]."ch'>Bidang</th>";
echo "<th style='min-width: ".$max_lengths[3]."ch'>Partai</th>";
echo "<th>Foto</th>";
echo "</tr>";

foreach($list_anggota_dpr as $anggota) 
{
    echo "<tr>";
    echo "<td>".$anggota->get_dataID()."</td>";
    echo "<td>".$anggota->get_nama()."</td>";
    echo "<td>".$anggota->get_bidang()."</td>";
    echo "<td>".$anggota->get_partai()."</td>";
    echo "<td><img src='".$anggota->get_foto()."' width='80' height='100'></td>";
    echo "</tr>";
}

echo "</table>";


/* MENGUBAH DATA */

echo "<br>Data anggota DPR dengan ID 1003 telah diubah!<br>";

//membuat list dan diisi data
$list_anggota_dpr = array(
    new AnggotaDPR('1001', 'Daniel Katamandara', 'Pariwisata dan Kebudayaan', 'Perindo', 'dokyeom.jpg'),
    new AnggotaDPR('1002', 'Joshua Hadi', 'Hubungan Luar Negeri', 'Komanshu', 'joshua.jpg'),
    new AnggotaDPR('1003', 'Gazi Radhana', 'Industri Manufaktur', 'Wagyu', 'mingyu.jpg'),
    new AnggotaDPR('1004', 'Hanggara Putra Maharaja', 'Perdagangan', 'Persihan', 'jeonghan.jpg')
);

echo "<h3>Data Anggota DPR</h3>";

// Mencari panjang maksimum untuk setiap kolom
$max_lengths = array(0, 0, 0, 0);

foreach ($list_anggota_dpr as $anggota) 
{
    $max_lengths[0] = max($max_lengths[0], strlen($anggota->get_dataID()));
    $max_lengths[1] = max($max_lengths[1], strlen($anggota->get_nama()));
    $max_lengths[2] = max($max_lengths[2], strlen($anggota->get_bidang()));
    $max_lengths[3] = max($max_lengths[3], strlen($anggota->get_partai()));
}

// Membuat tabel dengan lebar kolom yang sesuai
echo "<table border='1'>";
echo "<tr>";
echo "<th style='min-width: ".$max_lengths[0]."ch'>Data ID</th>";
echo "<th style='min-width: ".$max_lengths[1]."ch'>Nama</th>";
echo "<th style='min-width: ".$max_lengths[2]."ch'>Bidang</th>";
echo "<th style='min-width: ".$max_lengths[3]."ch'>Partai</th>";
echo "<th>Foto</th>";
echo "</tr>";

foreach($list_anggota_dpr as $anggota) 
{
    echo "<tr>";
    echo "<td>".$anggota->get_dataID()."</td>";
    echo "<td>".$anggota->get_nama()."</td>";
    echo "<td>".$anggota->get_bidang()."</td>";
    echo "<td>".$anggota->get_partai()."</td>";
    echo "<td><img src='".$anggota->get_foto()."' width='80' height='100'></td>";
    echo "</tr>";
}

echo "</table>";


/* MENGHAPUS DATA */

echo "<br>Data anggota DPR dengan ID 1004 telah dihapus!<br>";

//membuat list dan diisi data
$list_anggota_dpr = array(
    new AnggotaDPR('1001', 'Daniel Katamandara', 'Pariwisata dan Kebudayaan', 'Perindo', 'dokyeom.jpg'),
    new AnggotaDPR('1002', 'Joshua Hadi', 'Hubungan Luar Negeri', 'Komanshu', 'joshua.jpg'),
    new AnggotaDPR('1003', 'Gazi Radhana', 'Industri Manufaktur', 'Wagyu', 'mingyu.jpg')
);

echo "<h3>Data Anggota DPR</h3>";

// Mencari panjang maksimum untuk setiap kolom
$max_lengths = array(0, 0, 0, 0);

foreach ($list_anggota_dpr as $anggota) 
{
    $max_lengths[0] = max($max_lengths[0], strlen($anggota->get_dataID()));
    $max_lengths[1] = max($max_lengths[1], strlen($anggota->get_nama()));
    $max_lengths[2] = max($max_lengths[2], strlen($anggota->get_bidang()));
    $max_lengths[3] = max($max_lengths[3], strlen($anggota->get_partai()));
}

// Membuat tabel dengan lebar kolom yang sesuai
echo "<table border='1'>";
echo "<tr>";
echo "<th style='min-width: ".$max_lengths[0]."ch'>Data ID</th>";
echo "<th style='min-width: ".$max_lengths[1]."ch'>Nama</th>";
echo "<th style='min-width: ".$max_lengths[2]."ch'>Bidang</th>";
echo "<th style='min-width: ".$max_lengths[3]."ch'>Partai</th>";
echo "<th>Foto</th>";
echo "</tr>";

foreach($list_anggota_dpr as $anggota) 
{
    echo "<tr>";
    echo "<td>".$anggota->get_dataID()."</td>";
    echo "<td>".$anggota->get_nama()."</td>";
    echo "<td>".$anggota->get_bidang()."</td>";
    echo "<td>".$anggota->get_partai()."</td>";
    echo "<td><img src='".$anggota->get_foto()."' width='80' height='100'></td>";
    echo "</tr>";
}

echo "</table>";
?>