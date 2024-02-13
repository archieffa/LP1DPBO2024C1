/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 1 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */

public class AnggotaDPR 
{
    private int dataID = 0; 
    private String nama;
    private String bidang;
    private String partai;

    // konstruktor default AnggotaDPR tanpa parameter
    public AnggotaDPR() 
    {
        // inisialisasi dengan nilai default
        this.dataID = 0;
        this.nama = "";
        this.bidang = "";
        this.partai = "";
    }

    // konstruktor AnggotaDPR dengan parameter
    public AnggotaDPR(int dataID, String nama, String bidang, String partai) 
    {
        // inisialisasi dengan nilai parameter
        this.dataID = dataID;
        this.nama = nama;
        this.bidang = bidang;
        this.partai = partai;
    }

    // getter dan setter untuk dataID, nama, bidang, dan partai
    public int getDataID() 
    {
        return dataID;
    }

    public void setDataID(int dataID) 
    {
        this.dataID = dataID;
    }

    public String getNama() 
    {
        return nama;
    }

    public void setNama(String nama) 
    {
        this.nama = nama;
    }

    public String getBidang() 
    {
        return bidang;
    }

    public void setBidang(String bidang) 
    {
        this.bidang = bidang;
    }

    public String getPartai() 
    {
        return partai;
    }

    public void setPartai(String partai) 
    {
        this.partai = partai;
    }
}
