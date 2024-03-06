/* Saya Nur Ainun 2202046 mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include <iostream>
#include <vector>
#include "Garace.cpp"
#include "Motorcycle.cpp"
#include "Car.cpp"

class ParkingLot {
private:
    int kapasitas;
    int jmlKendaraan;  
    vector<Vehicle*> daftarKendaraan;

public:
    // Constructor
   ParkingLot()
   {

   }

   ParkingLot(int kapasitas = 0, int jmlKendaraan = 0, vector<Vehicle*> daftarKendaraan = {})
   {
    this->kapasitas = kapasitas;
    this->jmlKendaraan = jmlKendaraan;
   }

    // Getter dan Setter kapasitas
    int getKapasitas()
    {
        return this->kapasitas;
    }

    void setKapasitas(int kapasitas)
    {
        this->kapasitas = kapasitas;
    }

    // Getter dan Setter jmlKendaraan
    int getjmlKendaraan()
    {
        return this->jmlKendaraan;
    }

    void setjmlKendaraan(int jmlKendaraan)
    {
        this->jmlKendaraan = jmlKendaraan;
    }

    vector<Vehicle*> getDaftarKendaraan() 
    {
        return this->daftarKendaraan;
    }


    void tambahKendaraan() {
        if (jmlKendaraan < kapasitas) {
            jmlKendaraan++;
            std::cout << "Kendaraan berhasil ditambahkan ke tempat parkir." << std::endl;
        } else {
            std::cout << "Tempat parkir penuh. Tidak dapat menambahkan kendaraan." << std::endl;
        }
    }

    // Menampilkan informasi parkiran
    void displayParking() const {
      cout << "Kapasitas Parkir: " << kapasitas << endl;
      cout << "Jumlah Kendaraan Saat Ini: " << jmlKendaraan << endl;
    }

    //destructor
    ~ParkingLot()
    {

    }
};

