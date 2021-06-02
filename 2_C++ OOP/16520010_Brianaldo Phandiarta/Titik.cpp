#include "Titik.hpp"

// Constructors
Titik::Titik() {
    // Default constructor
    this->x = 0;
    this->y = 0;
}

Titik::Titik(float x, float y) {
    // Parameterized constructor
    this->x = x;
    this->y = y;
}

Titik::Titik(const Titik& titik) {
    // Copy constructor
    this->x = titik.x;
    this->y = titik.y;
}

// Methods
float Titik::getX() {
    return this->x;
}

float Titik::getY() {
    return this->y;
}

void Titik::setX(float x) {
    this->x = x;
}

void Titik::setY(float y) {
    this->y = y;
}

void Titik::geserTitik(float deltaX, float deltaY) {
    this->x += deltaX;
    this->y += deltaY;
}

void Titik::printTitik() {
    cout << "x : " << x << endl << "y : " << y << endl;
}