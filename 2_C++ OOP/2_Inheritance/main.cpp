# include "Bus.hpp"
# include "Minibus.hpp"
# include "Mobil.hpp"
# include "KoleksiKendaraan.hpp"
# include <iostream>
# include <string>

using namespace std;

int main() {
    Bus bus;
    Mobil mobil;
    Minibus minibus;

    KoleksiKendaraan kk(10);

    kk.add(&bus);
    kk.add(&mobil);
    kk.add(&minibus);

    kk.printAll();

    return 0;
}