# ifndef __MOBIL__
# define __MOBIL__

# include <iostream>
# include "Kendaraan.hpp"

using namespace std;

class Mobil : public Kendaraan {
    private :

        string supir;

    public :

        Mobil();
    
        Mobil(int nomor, int tahunKeluar, string merk);
    
        void printInfo();

        int biayaSewa(int lamaSewa); // duration in days/hours (?)

};

# endif