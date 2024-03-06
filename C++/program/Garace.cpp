/* Saya Nur Ainun 2202046 mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */


#pragma once
#include <iostream>
#include <vector>
#include "Motorcycle.cpp"
#include "Car.cpp"

class Garace{
private:
    string namaGarasi;
    string luasGarasi;
    vector<Vehicle*> daftarKendaraan;

public:
    // Constructor
    Garace() {

    }

    Garace(string namaGarasi = "", string luasGarasi = "", vector<Vehicle*> daftarKendaraan = {})
        : namaGarasi(namaGarasi), luasGarasi(luasGarasi), daftarKendaraan(daftarKendaraan) {}

    // Getter dan Setter namaGarasi
    string getNamaGarasi() {
        return this->namaGarasi;
    }

    void setNamaGarasi(string namaGarasi) {
        this->namaGarasi = namaGarasi;
    }

    // Getter dan Setter luasGarasi
    string getLuasGarasi() {
        return this->luasGarasi;
    }

    void setLuasGarasi(string luasGarasi) {
        this->luasGarasi = luasGarasi;
    }

    vector<Vehicle*> getDaftarKendaraan() {
        return this->daftarKendaraan;
    }

    // Menambahkan kendaraan ke garasi
         void add_kendaraan(Vehicle* kendaraan) {
        daftarKendaraan.push_back(kendaraan);
    }

     void displayInfo_Garasi() {
        cout << "\nNama Garasi: " << namaGarasi << "\nLuas Garasi: " << luasGarasi << "m^2" << endl;
        cout << "\nDaftar Kendaraan:" << endl;
        for (const auto& kendaraan : daftarKendaraan) {
            kendaraan->displayInfo();
            cout << endl;
        }
    }

    // Destructor
    ~Garace() {
        // Implement if needed
    }
};
