#include "Garis.hpp"
#include <cmath>
//constructor
Garis::Garis(Titik& p1, Titik& p2){
	this->p1 = p1;
	this->p2 = p2;
}

//methods
float Garis::panjang(){
	return sqrt(pow(this->p1.getX()-this->p2.getX(),2)+pow(this->p1.getY()-this->p2.getY(),2));
}

void Garis::geserGaris(float deltaX, float deltaY){
	this->p1.geserTitik(deltaX,deltaY);
	this->p2.geserTitik(deltaX,deltaY);
}

float Garis::gradien(){
	return (this->p1.getY()-this->p2.getY() / this->p1.getX()-this->p2.getX());
}

bool Garis::sejajar(Garis& garis){
	// gradien.gradien  = 1
	return fabs(this->gradien()*garis.gradien()-1) < EPSILON;
}

bool Garis::tegakLurus (Garis& garis){
	return fabs(this->gradien()*garis.gradien()+1) <EPSILON;
}

void Garis::printGaris(){
	cout<<"P1: "<<endl;
	this->p1.printTitik();
	cout<<"P2: "<<endl;
	this->p2.printTitik();
	cout<<" "<<endl;
}


