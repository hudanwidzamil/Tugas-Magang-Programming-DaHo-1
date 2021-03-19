# ifndef __MINIBUS__
# define __MINIBUS__

# include <iostream>
# include "Kendaraan.hpp"

using namespace std;

class Minibus : public Kendaraan {
    public :

        Minibus();

        Minibus(int nomor, int tahunKeluar, string merk);

        int discount(int lamaSewa);

        void printInfo();

        int biayaSewa(int lamaSewa);

};

# endif