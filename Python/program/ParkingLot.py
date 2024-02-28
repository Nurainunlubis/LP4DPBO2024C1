#Saya Nur Ainun 2202046 mengerjakan LATIHAN PRAKTIKUM 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. 

from Garage import Garage
from Motorcycle import Motorcycle 
from Car import Car  

class ParkingLot:
    def __init__(self, kapasitas):    
        self.__kapasitas = kapasitas
        self.__daftarKendaraan = []

    # Getter and Setter kapasitas
    def getKapasitas(self):
        return self.__kapasitas
    def setKapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    # Getter and Setter parkinglot
    def getJmlKendaraan(self):
        return self.__jmlKendaraan
    def setJmlKendaraan(self, jmlKendaran):
        self.__jmlkendaraan = jmlKendaran

    def add_kendaraan(self, kendaraan):
        if len(self.__daftarKendaraan) < self.__kapasitas:
            self.__daftarKendaraan.append(kendaraan)
        else:
            print("Mohon Maaf,Parkiran Penuh!")
    def display_parking(self):
        print(f"Kapasitas Parkir: {self.__kapasitas}")
        print(f"Jumlah Kendaraan Saat Ini: {len(self.__daftarKendaraan)}")