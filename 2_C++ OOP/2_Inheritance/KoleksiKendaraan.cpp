# include "KoleksiKendaraan.hpp"

KoleksiKendaraan::KoleksiKendaraan() {
    koleksi = new Kendaraan*[100];
    size = 100;
    neff = 0;
}

KoleksiKendaraan::KoleksiKendaraan(int size) {
    koleksi = new Kendaraan*[size];
    this->size = size;
    neff = 0;
}

KoleksiKendaraan::~KoleksiKendaraan() {
    delete [] koleksi;
    koleksi = NULL;
}

void KoleksiKendaraan::printAll() {
    for (int i = 0; i < this->neff; i++) {
        cout << i + 1 << ". ";
        koleksi[i]->printInfo();
    }
}

void KoleksiKendaraan::add(Kendaraan* kendaraan) {
    koleksi[neff] = kendaraan;
    neff += 1;
}