#include "Garis.hpp"

int main() {
    Titik p1(0,0), p2(1,1), p3(1,0), p4(0,1);

    Garis l1(p1,p2), l2(p3,p4);

    if (l1.tegakLurus(l2)) {
        cout << endl << "l1 tegak lurus dengan l2" << endl;
    } else {
        cout << endl << "l1 tidak tegak lurus degan l2" << endl;
    }

    Titik p5(0,0), p6(3,4);
    Titik p7(p5), p8(p6);

    Garis l3(p5,p6), l4(p7,p8);

    l4.geserGaris(1,1);

    cout << endl << "L3 :" << endl;
    l3.printGaris();

    cout << endl << "L4 :" << endl;
    l4.printGaris();

    if (l3.sejajar(l4)) {
        cout << endl << "l3 sejajar dengan l4" << endl;
    } else {
        cout << endl << "l3 tidak sejajar degan l4" << endl;
    }

    return 0;
}
// Perintah ruh
// g++ -o main main.cpp Garis.cpp Titik.cpp
// ./main
//
// l1 tegak lurus dengan l2
//
// L3 : 
// P1 : 
// x : 0
// y : 0
// P2 : 
// x : 3
// y : 4
//
// L4 : 
// P1 : 
// x : 1
// y : 1
// P2 : 
// x : 4
// y : 5
//
// l3 sejajar dengan l4