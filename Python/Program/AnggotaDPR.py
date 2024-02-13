# Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 1 dalam mata kuliah 
# Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
# dispesifikasikan. Aamiin. 

class AnggotaDPR:
    def __init__(self, dataID=0, nama="", bidang="", partai=""):
        self.dataID = dataID
        self.nama = nama
        self.bidang = bidang
        self.partai = partai
 
    def get_dataID(self):
        return self.dataID

    def set_dataID(self, dataID):
        self.dataID = dataID
 
    def get_nama(self):
        return self.nama

    def set_nama(self, nama):
        self.nama = nama

    def get_bidang(self):
        return self.bidang

    def set_bidang(self, bidang):
        self.bidang = bidang

    def get_partai(self):
        return self.partai

    def set_partai(self, partai):
        self.partai = partai