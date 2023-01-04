#pragma once
#include <iostream>
using namespace std;

class Automobile {
public:
	string color;
	string model;
	int horsepower;

	void autoinfo();
	Automobile(string _color, string _model, int _horsepower);
	Automobile();
};