/* Saya Nur Ainun 2202046 mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#pragma once
#include <iostream>
#include <string>

class Vehicle {
private:
    std::string plat_nomor;
    std::string merk;
    std::string tahun_produksi;
    std::string warna;

public:
    // Constructor
    Vehicle(std::string plat_nomor = "", std::string merk = "", std::string tahun_produksi = "", std::string warna = "")
        : plat_nomor(plat_nomor), merk(merk), tahun_produksi(tahun_produksi), warna(warna) {}

    // Setter dan Getter
    void setPlat_Nomor(std::string plat_nomor) {
        this->plat_nomor = plat_nomor;
    }

    void setMerk(std::string merk) {
        this->merk = merk;
    }

    void setTahun_Produksi(std::string tahun_produksi) {
        this->tahun_produksi = tahun_produksi;
    }

    void setWarna(std::string warna) {
        this->warna = warna;
    }

    std::string getPlat_nomor() const {
        return plat_nomor;
    }

    std::string getMerk() const {
        return merk;
    }

    std::string getTahun_Produksi() const {
        return tahun_produksi;
    }

    std::string getWarna() const {
        return warna;
    }

    // Metode untuk menampilkan informasi kendaraan
    void displayInfo() const {
        std::cout << "Plat Nomor: " << plat_nomor << ", Merk: " << merk << ", Tahun Produksi: " << tahun_produksi
                  << ", Warna: " << warna;
    }

    // Metode virtual untuk mendapatkan jenis kendaraan
    virtual std::string getJenisKendaraan() const {
        return "Generic Vehicle";
    }

    // Destructor
    virtual ~Vehicle() {}
};
