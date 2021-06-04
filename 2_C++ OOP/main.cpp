// Rizky Anggian Matondang
// 16720470
#include "iostream"
#include "garis.cpp"
#include "titik.cpp"
using namespace std;

int main(){
    Titik P1(0, 0), P2(1, 1), P3(1, 0), P4(0, 1);
    Garis L1(P1, P2), L2(P3, P4);

    if (L1.sejajar(L2)){
        cout << "L1 sejajar dengan L2 " << endl;
        cout << endl;
    }
    else if (L1.tegakLurus(L2)){
        cout << "L1 tegak lurus dengan L2 " << endl;
        cout << endl;
    }

    Titik P5(0, 0), P6(3, 4), P7(P5), P8(P6);
    Garis L3(P5, P6), L4(P7, P8);

    L4.geserGaris(1, 1);
    cout << "L3 :" << endl;
    L3.printGaris();
    cout << endl;
    cout << "L4 : " << endl;
    L4.printGaris();

    if (L3.sejajar(L4)){
        cout << endl;
        cout << "L3 sejajar dengan L4  " << endl;
    }
    else if (L3.tegakLurus(L4))
    {
        cout << endl;
        cout << "L3 tegak lurus dengan L4 " << endl;
    }


    return 0;
}
