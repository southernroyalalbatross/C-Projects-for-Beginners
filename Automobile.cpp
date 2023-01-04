#include "Automobile.h"

// Automobile Constructor
Automobile::Automobile(string _color, string _model, int _horsepower) {
	color = _color;
	model = _model;
	horsepower = _horsepower;
}

void Automobile::autoinfo() {
	cout << "Model: " << Automobile::model <<endl ;
	cout << "Color: " << Automobile::color <<endl ;
	cout << "HP: " << Automobile::horsepower << endl;
}