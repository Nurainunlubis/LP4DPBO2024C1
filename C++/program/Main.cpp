/* Saya Nur Ainun 2202046 mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include <bits/stdc++.h>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Garace.cpp"
#include "Parking.cpp"

using namespace std;

int main() {
    // Membuat objek Garage dan ParkingLot
    Garace myGarage("Garasi AINUN", "200 m2");
    ParkingLot parkingLot(5);

    // Data hardcoded untuk Car
    Car myCar("F 1 Nun", "Toyota", "2023", "Hitam", 5, 4);

    // Data hardcoded untuk Motorcycle
    Motorcyle myMotorcycle("H 456 ABC", "Yamaha", "2021", "Biru", "Sport", "10");

    // Menambahkan Car ke Garage
    myGarage.add_kendaraan(&myCar);

    // Menambahkan Motorcycle ke Garage
    myGarage.add_kendaraan(&myMotorcycle);

    // Menampilkan informasi Garage
    cout << "Informasi Garage:" << endl;
    myGarage.displayInfo_Garasi();

    // Menampilkan informasi khusus dari objek Car
    cout << "\nInformasi :" << endl;
    myCar.displayInfo_Car();

    // Menampilkan informasi khusus dari objek Motorcycle
    cout << "\nInformasi Motor:" << endl;
    myMotorcycle.displayInfo_motor();

    // Menambahkan kendaraan ke ParkingLot
    parkingLot.tambahKendaraan();

    // Menampilkan informasi ParkingLot
    cout << "\nInformasi Tempat Parkir:" << endl;
    parkingLot.displayParking();

    return 0;
}
