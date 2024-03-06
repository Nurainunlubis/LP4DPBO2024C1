/* Saya Nur Ainun 2202046 mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */


#pragma once
// memasukan liblary yang di gunakan termasuk kelas induk (kelas Vehicle)
//dari kelas car

#include <iostream>
#include <string>
#include "Vehicle.cpp"


// deklarasi namespace
using namespace std;

class Car : public Vehicle
{
private:
    int jumlah_kursi;
    int jumlah_pintu;

public:

    Car(string plat_nomor = "", string merk = "", string tahun_produksi = "", string warna = "",int jumlah_kursi = 0 , int jumlah_pintu = 0) 
    : Vehicle (plat_nomor, merk, tahun_produksi, warna)
    {
        this->jumlah_kursi = jumlah_kursi;
        this->jumlah_pintu = jumlah_pintu;
    } 

    void setJumlah_kursi(int jumlah_kursi)
    {
        this->jumlah_kursi = jumlah_kursi;
    }

    void setJumlahPintu(int jumlah_pintu)
    {
        this->jumlah_pintu = jumlah_pintu;
    }

    int getjumlah_Kursi()
    {
        return jumlah_kursi;
    }

    int getJumlahPintu()
    {
        return jumlah_pintu;
    }

    void displayInfo_Car() {
        Vehicle::displayInfo();
        cout << "\nJumlah Kursi: " << jumlah_kursi << "\nJumlah Pintu: " << jumlah_pintu;
    }

    //Destructor
    ~Car()
    {

    }

};