# include "Garis.hpp"
# include <cmath>

Garis::Garis(Titik& p1, Titik& p2) {
    this->p1 = p1;
    this->p2 = p2;
}

float Garis::panjang() {
    float xdif = (p2.getX() - p1.getX())*(p2.getX() - p1.getX());
    float ydif = (p2.getY() - p1.getY())*(p2.getY() - p1.getY());
    return sqrt(xdif + ydif);
}

void Garis::geserGaris(float deltaX, float deltaY) {
    this->p1.geserTitik(deltaX, deltaY);
    this->p2.geserTitik(deltaX, deltaY);
}

float Garis::gradien() {
    /*
        Prekondisi : p1.x != p2.x
    */

    return (p2.getY() - p1.getY())/(p2.getX() - p1.getX());
}

bool Garis::sejajar(Garis& garis) {
    return abs(this->gradien() - garis.gradien()) < this->EPSILON;
}

bool Garis::tegakLurus(Garis& garis) {
    return abs(this->gradien()*garis.gradien() + 1) < this->EPSILON;
}

void Garis::printGaris() {
    cout << "P1 : " << endl;
    this->p1.printTitik();
    cout << "P2 : " << endl;
    this->p2.printTitik();
}