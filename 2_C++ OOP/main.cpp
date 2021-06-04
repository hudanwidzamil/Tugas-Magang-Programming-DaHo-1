#include "Garis.cpp"

int main(){
	Titik p1, p2(1,1), p3(1,0), p4(0,1);
	
	Garis L1(p1,p2), L2(p3,p4);
	
	if(L1.tegakLurus(L2)){
		cout << endl << "L1 tegak lurus dengan L2\n" << endl;
	}
	else{
		cout<< endl <<"L1 tidak tegak lurus dengan L2\n"<<endl;
	}
	
	Titik p5(0,0), p6(3,4);
	Titik p7(p5.getX(), p5.getY()), p8(p6.getX(),p6.getY());
	
	Garis L3(p5,p6), L4(p7,p8);
	L4.geserGaris (1,1);
	
	cout<<"L3 :"<<endl;
	L3.printGaris();
	
	
	cout<<"L4 :"<<endl;
	L4.printGaris();
	
	if(L3.sejajar(L4)){
		cout << endl << "L3 sejajar dengan L4\n" << endl;
	}
	else{
		cout<< endl <<"L3 tidak sejajar dengan L4\n"<<endl;
	}
	return 0;
}


//run 
//g++ -0 main main.cpp&main.exe
//#output
/*
L1 tidak tegak lurus dengan L2

L3 :
P1:
x : 0
y : 0
P2:
x : 3
y : 4

L4 :
P1:
x : 1
y : 1
P2:
x : 4
y : 5


L3 tidak sejajar dengan L4*/

