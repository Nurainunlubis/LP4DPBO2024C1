#pragma once

// memasukan liblary yang di gunakan termasuk kelas induk (kelas Vehicle)
//dari kelas car

#include <iostream>
#include <string>
#include "Vehicle.cpp"


// deklarasi namespace
using namespace std;

class Motorcyle : public Vehicle
{
private:
    string jenis_motor;
    string kapasitas_tangki;

public:

    //constructor : Overloading
    Motorcyle(string plat_nomor = "", string merk = "", string tahun_produksi = "", string warna = "", string jenis_motor = "" ,string kapasitas = "") 
    : Vehicle (plat_nomor, merk, tahun_produksi, warna)
    {
        this->jenis_motor = jenis_motor;
        this->kapasitas_tangki = kapasitas_tangki;
    } 

    void setjenis_motor(string jenis_motor)
    {
        this->jenis_motor = jenis_motor;
    }

    void setKapasitas_tangki(string kapasitas_tangki)
    {
        this->kapasitas_tangki = kapasitas_tangki;
    }

    string getjenis_motor()
    {
        return jenis_motor;
    }

    string getKapasitas_tangki()
    {
        return kapasitas_tangki;
    }

    void displayInfo_motor() {
        Vehicle::displayInfo();
        cout << "Jenis Motor: " << jenis_motor << "\nKapasitas Tangki: " << kapasitas_tangki;
    }

    //Destructor
    ~Motorcyle()
    {

    }

};