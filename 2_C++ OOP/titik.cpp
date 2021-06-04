//Rizky Anggian Matondang
//16720470


#include <iostream>
#include "Titik.hpp"

using namespace std;

Titik::Titik(){
    this -> x = 0;
    this -> y = 0;
}

Titik::Titik(float x, float y){
    this -> x = x;
    this -> y = y;
}

float Titik::getX(){
    return this -> x;
}

void Titik::setX(float x){
    this -> x;
}

float Titik::getY(){
    return this -> y;
}

void Titik::setY(float y){
    this -> y;
}

void Titik::geserTitik(float deltaX, float deltaY){
    this -> x += deltaX;
    this -> y += deltaY;
}

void Titik::printTitik(){
    cout << "x : " << this -> x << endl;
    cout << "y : " << this -> y << endl;
}
