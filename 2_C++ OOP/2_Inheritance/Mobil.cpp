# include "Mobil.hpp"

Mobil::Mobil() : Kendaraan() {
    this->supir = "XXX";
}

Mobil::Mobil(int nomor, int tahunKeluar, string merk) : Kendaraan(nomor, tahunKeluar, merk) {
    this->supir = "XXX";
}

void Mobil::printInfo() {
    Kendaraan::printInfo();
    cout << "kategori       : Mobil" << endl;
    cout << "supir          : " << this->supir << endl;
}

int Mobil::biayaSewa(int lamaSewa) {
    return 500000*lamaSewa;
}