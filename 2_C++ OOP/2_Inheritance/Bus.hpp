# ifndef __BUS__
# define __BUS__

# include <iostream>
# include "Kendaraan.hpp"

using namespace std;

class Bus : public Kendaraan {
    private :

        int kapasitas;

    public :

        Bus();

        Bus(int nomor, int tahunKeluar, string merk);

        void printInfo();

        int biayaSewa(int lamaSewa);

};

# endif