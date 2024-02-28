#Saya Nur Ainun 2202046 mengerjakan LATIHAN PRAKTIKUM 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. 

from Vehicle import Vehicle

class Car(Vehicle):
    __jumlahKursi = ""
    __jumlahPintu = ""

    #constructor
    def __init__(self,  platNomor, merk, tahunProduksi, warna, jumlahKursi, jumlahPintu):
        super().__init__(platNomor, merk, tahunProduksi, warna)
        self.__jumlahKursi = jumlahKursi
        self.__jumlahPintu = jumlahPintu

    # Getter and Setter jumlahKursi
    def getJumlahKursi(self):
        return self.__jumlahKursi
    
    def setJumlahKursi(self, jumlahKursi):
        self.__jumlahKursi = jumlahKursi 

    # Getter and Setter jumlahPintu
    def getJumlahPintu(self):
        return self.__jumlahPintu 
    
    def setJumlahPintu(self, jumlahPintu):
        self.__jumlahPintu = jumlahPintu
