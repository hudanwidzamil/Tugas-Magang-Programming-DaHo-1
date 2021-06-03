#include "Garis.hpp"

int main() {
    Titik t1(0, 0), t2(1, 1), t3(1, 0), t4(0, 1);

    Garis l1(t1, t2), l2(t3, t4);

    if (l1.tegakLurus(l2)) {
        cout << "l1 tegak lurus dengan l2" << endl;
    } else {
        cout << "l1 tidak tegak lurus dengan l2" << endl;
    }

    Titik t5(0, 0), t6(3, 4);
    Titik t7(t5.getX(), t5.getY());
    Titik t8(t6.getX(), t6.getY());

    Garis l3(t5, t6), l4(t7, t8);

    l4.geserGaris(1,1);

    cout << endl << "L3 :" << endl;
    l3.printGaris();

    cout << endl << "L4 :" << endl;
    l4.printGaris();

    if (l4.sejajar(l3)) {
        cout << endl << "l3 sejajar dengan l4" << endl;
    } else {
        cout << endl << "l3 tidak sejajar dengan l4" << endl;
    }

    return 0;
}