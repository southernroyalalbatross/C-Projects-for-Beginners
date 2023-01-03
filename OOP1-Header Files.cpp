#include <iostream>
#include "Automobile.h"
using namespace std;

int main() {
	
	Automobile auto1("black", "BMW S400", 90);
	Automobile auto2("blue", "Mercedes S200", 250);

	// Automobile auto1, auto2;

	//auto1.color = "black";
	//auto1.horsepower = 90;
	//auto1.model = "BMW S400";

	//auto2.color = "blue";
	//auto2.horsepower = 250;
	//auto2.model = "Mercedes S200";

	auto1.autoinfo();
	cout << endl << endl;
	auto2.autoinfo();
	cout << endl << endl;


	cout << endl;
	return 0;
}