#Saya Nur Ainun 2202046 mengerjakan LATIHAN PRAKTIKUM 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. 
from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle

class Garage():
    def __init__(self, namaGarasi, luasgarasi):
        self.__namaGarasi = namaGarasi
        self.__luasGarasi = luasgarasi
        self.__daftarKendaraan = []

    def add_kendaraan(self, kendaraan):
        self.__daftarKendaraan.append(kendaraan)

    def display_garage(self):
        print(f"--------------------------------------------------------------")
        print(f"|GARASI : {self.__namaGarasi}                       | Luas : {self.__luasGarasi}m2 |")  
        print(f"--------------------------------------------------------------")
        print(f"DAFTAR KENDARAAN DI DALAM GARASI :")
        for kendaraan in self.__daftarKendaraan:
            if isinstance(kendaraan, Car):
                print(f"\nDAFTAR MOBIL :")
                print(f" - Plat Nomor           : {kendaraan.getPlatNomor()}")
                print(f" - Merk                 : {kendaraan.getmerk()}")
                print(f" - Tahun Produksi       : {kendaraan.getTahunProduski()}")
                print(f" - Warna                : {kendaraan.getWarna()}")
                print(f" - Jumlah kursi         : {kendaraan.getJumlahKursi()}")
                print(f" - Jumlah Pintu         : {kendaraan.getJumlahPintu()}")
            elif isinstance(kendaraan, Motorcycle):
                print(f"\nDAFTAR MOTOR :")
                print(f" - Plat Nomor           : {kendaraan.getPlatNomor()}")
                print(f" - Merk                 : {kendaraan.getmerk()}")
                print(f" - Tahun Produksi       : {kendaraan.getTahunProduski()}")
                print(f" - Warna                : {kendaraan.getWarna()}")
                print(f" - Jenis                : {kendaraan.getJenisMotor()}")
                print(f" - Kapasitas Tangki     : {kendaraan.getKapasitasTangki()}")

