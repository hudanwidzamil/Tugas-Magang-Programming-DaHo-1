# include "Kendaraan.hpp"

Kendaraan::Kendaraan() {
    nomor = 0;
    tahunKeluar = 0;
    merk = "XXX";
}

Kendaraan::Kendaraan(int nomor, int tahunKeluar, string merk) {
    this->nomor = nomor;
    this->tahunKeluar = tahunKeluar;
    this->merk = merk;
}

void Kendaraan::printInfo() {
    cout << "Info kendaraan" << endl;
    cout << "Nomor kendaraan : " << this->nomor << endl;
    cout << "Merk            : " << this->merk << endl;
    cout << "Tahun keluar    : " << this->tahunKeluar << endl; 
}