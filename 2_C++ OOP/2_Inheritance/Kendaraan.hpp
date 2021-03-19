# ifndef __KENDARAAN__
# define __KENDARAAN__

# include <iostream>

using namespace std;

class Kendaraan {
    private :

        int nomor;

        int tahunKeluar;

        string merk;

    public :

        Kendaraan();
    
        Kendaraan(int nomor, int tahunKeluar, string merk);

        virtual void printInfo();

        virtual int biayaSewa(int lamaSewa) = 0;

};

# endif