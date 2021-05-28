# include "Titik.hpp"

Titik::Titik() : x(0), y(0) {}

Titik::Titik(float x, float y) : x(x), y(y) {}

float Titik::getX() {
    return this->x;
}

void Titik::setX(float x) {
    this->x = x;
}

float Titik::getY() {
    return this->y;
}

void Titik::setY(float y) {
    this->y = y;
}

void Titik::geserTitik(float deltaX, float deltaY) {
    this->x += deltaX;
    this->y += deltaY;
}

void Titik::printTitik() {
    cout << "x : " << this->x << endl;
    cout << "y : " << this->y << endl;
}