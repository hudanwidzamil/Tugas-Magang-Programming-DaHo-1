# include "Minibus.hpp"

Minibus::Minibus() : Kendaraan() {}

Minibus::Minibus(int nomor, int tahunKeluar, string merk) : Kendaraan(nomor, tahunKeluar, merk) {}

int Minibus::discount(int lamaSewa) {
    int biaya = biayaSewa(lamaSewa);
    if (lamaSewa > 10) {
        return (biaya - biaya*10/100);
    } else {
        return biaya;
    }
}
        
void Minibus::printInfo() {
    Kendaraan::printInfo();
    cout << "kategori       : Minibus" << endl;
}

int Minibus::biayaSewa(int lamaSewa) {
    int biaya = 5000000;
    if (lamaSewa > 5) {
        biaya += 500000*(lamaSewa - 5);
    }

    return biaya;
}