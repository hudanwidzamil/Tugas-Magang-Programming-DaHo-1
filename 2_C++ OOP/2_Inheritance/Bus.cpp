# include "Bus.hpp"

Bus::Bus() : Kendaraan() {
    this->kapasitas = 0;
}

Bus::Bus(int nomor, int tahunKeluar, string merk) : Kendaraan(nomor, tahunKeluar, merk) {
    this->kapasitas = 0;
}

void Bus::printInfo() {
    Kendaraan::printInfo();
    cout << "kategori       : Bus" << endl;
    cout << "kapasitas      : " << this->kapasitas << endl;
}

int Bus::biayaSewa(int lamaSewa) {
    return 1000000*lamaSewa;
}