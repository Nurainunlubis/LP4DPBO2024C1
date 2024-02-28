#Saya Nur Ainun 2202046 mengerjakan LATIHAN PRAKTIKUM 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. 

#class declaration
class Vehicle:
    __platNomor = ""
    __merk = ""
    __tahunProduksi = ""
    __warna = ""

    #constructor kosong
    def __init__(self):
        self.__platNomor = ""
        self.__merk = ""
        self.__tahunProduksi = ""
        self.__warna = ""

    #constructor
    def __init__(self, platNomor = "", merk = "", tahunProduksi = "", warna = ""):
        self.__platNomor = platNomor
        self.__merk = merk
        self.__tahunProduksi =  tahunProduksi
        self.__warna = warna

    # Getter and setter plat nomor
    def getPlatNomor(self):
        return self.__platNomor
    def setPlatNomor(self, platNomor):
        self.__platNomor = platNomor

    #getter and Setter merk
    def getmerk(self):
        return self.__merk
    def setMerk(self, merk):
        self.__merk = merk    

    # Getter and Setter tahun produksi
    def getTahunProduski(self):
        return self.__tahunProduksi
    def setTahunProduksi(self, tahunProduksi):
        self.__tahunProduksi = tahunProduksi

    # getter and Setter warna
    def getWarna(self):
        return self.__warna
    def setWarna(self, warna):
        self.__warna = warna 