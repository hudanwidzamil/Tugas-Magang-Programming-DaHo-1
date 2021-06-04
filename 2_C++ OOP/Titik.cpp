#include "Titik.hpp"

//constructor

Titik::Titik(){
	// Default constructor
	this->x = 0;
	this->y = 0;
}

Titik::Titik(float x, float y){
	 // Parameterized constructor
	this->x = x;
	this->y = y;
}

//method
float Titik::getX(){
	return this->x;
}

void Titik::setX(float x){
	this->x = x;
}

float Titik::getY(){
	return this->y;
}

void Titik::setY(float y){
	this->x = y;
}

void Titik::geserTitik(float deltaX, float deltaY){
	this->x	= this->x + deltaX;
	this->y	= this->y +deltaY;
}

void Titik::printTitik(){
	cout<<"x : "<<x<<endl<<"y : "<<y<<endl;
}

