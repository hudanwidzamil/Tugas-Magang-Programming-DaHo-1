# ifndef __TITIK__
# define __TITIK__

# include <iostream>

using namespace std;

class Titik {
    private :

        float x, y;

    public :

        Titik();

        Titik(float x, float y);

        float getX();

        void setX(float x);

        float getY();

        void setY(float y);

        void geserTitik(float deltaX, float deltaY);

        void printTitik();

};

# endif