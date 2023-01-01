#include <iostream>

using namespace std;
int main() {

	// Visual Studio 2022 - C++ Practice - Sercan
	
	/* Visual Studio 2022 
	C++ Practice - Sercan */

	// Simple Variables

	string Name = "Sercan Akgun";
	int Age = 25;
	char Letter = 'A';
	float GPA = 3.95;
	int midterm1 = 100;
	int midterm2 = 89;
	bool Attendance = true;
	double pi = 3.1415926;

	int midtaverage = (midterm1 + midterm2) / 2;

	// Simple Prints

	cout << "Hello World !" << endl << endl << "Student Name - Surname : " << Name << endl;
	cout << "Age : " <<  Age << endl;
	cout << "Letter Grade : " << Letter << endl;
	cout << "Grade Point Average : " << GPA << endl;
	cout << "Does attendance matter ? " << Attendance << endl;
	cout << "Average Grade : " << midtaverage << endl;
	
	cout << endl;

	//Simple Math. Calculations

	float a = 20;
	int b = 5;
	float c = a / b;
	cout << c << endl;
	
	int x = 20;
	int y = 15;
	// x = x + 1;
	x = x++;
	y = y--;
	cout << x << endl;
	cout << y;

	cout << endl;
	return 0;
}  