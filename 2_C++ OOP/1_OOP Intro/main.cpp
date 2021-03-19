# include <iostream>
# include "Titik.hpp"
# include "Garis.hpp"

using namespace std;

int main() {
    Titik p1;
    Titik p2(1, 1);

    Titik p3(1, 0);
    Titik p4(0, 1);

    Garis l1(p1, p2);
    Garis l2(p3, p4);

    if (l1.tegakLurus(l2))
        cout << "l1 " << "tegak lurus dengan l2" << endl;
    else
        cout << "l1 " << "tidak tegak lurus dengan l2" << endl;
    cout << endl;

    Titik p5;
    Titik p6(3, 4);

    Titik p7 = p5;
    Titik p8 = p6;

    Garis l3(p5, p6);
    Garis l4(p7, p8);

    l4.geserGaris(1, 1);

    cout << "L3 : " << endl;
    l3.printGaris();
    cout << endl;
    cout << "L4 : " << endl;
    l4.printGaris();
    cout << endl;

    if (l3.sejajar(l4))
        cout << "l3 " << "sejajar dengan l4" << endl;
    else
        cout << "l3 " << "tidak sejajar dengan l4" << endl;

    return 0;
}