# ifndef __GARIS__
# define __GARIS__

# include <iostream>
# include "Titik.hpp"

using namespace std;

class Garis {
    private :

        const float EPSILON = 0.0001;

        Titik p1, p2;

    public :

        Garis(Titik& p1, Titik& p2);

        float panjang();

        void geserGaris(float deltaX, float deltaY);

        float gradien();

        bool sejajar(Garis& garis);

        bool tegakLurus(Garis& garis);

        void printGaris();

};

# endif