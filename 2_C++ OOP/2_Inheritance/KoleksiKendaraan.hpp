# ifndef __KOLEKSI_KENDARAAN__
# define __KOLEKSI_KENDARAAN__

# include <iostream>
# include "Kendaraan.hpp"

using namespace std;

class KoleksiKendaraan {
    private :

        Kendaraan** koleksi;

        int size;

        int neff;

    public :

        KoleksiKendaraan();

        KoleksiKendaraan(int size);

        ~KoleksiKendaraan();

        void printAll();

        void add(Kendaraan* kendaraan);

};

# endif