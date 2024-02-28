#Saya Nur Ainun 2202046 mengerjakan LATIHAN PRAKTIKUM 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. 

from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from ParkingLot import ParkingLot


# Membuat Objek Kendaraan
car1 = Car("F 41 NUN", "Toyota", 2023, "Putih", 5, 4)
car2 = Car("N 2410 AI", "Honda", 2022, "Hitam", 5, 4)
motorcycle1 = Motorcycle("F 4444 NAL", "Honda", 2023, "Merah", "Klasik", 20)
motorcycle2 = Motorcycle("F 2009 KY", "Kawasaki", 2024, "Hitam", "Matic", 25)



# Membuat Objek Garasi
garage1= Garage("Garasi Raflesia", 241)
garage2 = Garage("Garasi Melati", 100)

# Menambahkan kendaraan ke dalam Garasi 
garage1.add_kendaraan(car1)
garage1.add_kendaraan(car2)
garage2.add_kendaraan(motorcycle1)
garage2.add_kendaraan(motorcycle2)

# Menampilkan Daftar kendaraan yang ada di Garasi
garage1.display_garage()
garage2.display_garage()


# Membuat Objek Parking
Parking = ParkingLot(24)

# Menambahkan kendaraan ke tempat parkir
Parking.add_kendaraan(car1)
Parking.add_kendaraan(car2)
Parking.add_kendaraan(motorcycle1)
Parking.add_kendaraan(motorcycle2)

# Menampilkan informasi kendaraan yang di parkir
Parking.display_parking()


