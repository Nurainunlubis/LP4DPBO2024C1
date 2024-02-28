#Saya Nur Ainun 2202046 mengerjakan LATIHAN PRAKTIKUM 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. 

from Vehicle import Vehicle

class Motorcycle(Vehicle):
    __jenisMotor = ""
    __kapasitasTangki = ""

    #constructor
    def __init__(self, platNomor, merk, tahunProduksi, warna, jenisMotor, kapasitasTangki):
        super().__init__(platNomor, merk, tahunProduksi, warna)
        self.__jenisMotor = jenisMotor
        self.__kapasitasTangki = kapasitasTangki

    # Getter and Setter jenis motor
    def getJenisMotor(self):
        return self.__jenisMotor
    
    def setJenisMotor(self, jenisMotor):
        self.__jenisMotor = jenisMotor

    # Getter and Setter kapasitas tangki
    def getKapasitasTangki(self):
        return self.__kapasitasTangki
    
    def setKapasitasTangki(self, kapasitasTangki):
        self.__kapasitasTangki = kapasitasTangki
