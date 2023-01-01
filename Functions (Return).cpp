#include <iostream>
using namespace std;

// area of the rectangle
int areaCalc(int x, int y) {
	int area = x * y;
	return area;
}

// writing a message as Hello C++
void write_a_message() {
	cout << "Hello C++ " << endl;
	cout << "Hello C++ " << endl;
	cout << "Hello C++ " << endl;
	cout << "Hello C++ " << endl;
	cout << "Hello C++ " << endl;
}

// age calculator
void ageCalc(int yearofbirth) {
	int age = 2022 - yearofbirth;
	cout << "Your age : " << age;
}

int main() {
	int x;
	int y;
	cout << "Enter the x value : ";
	cin >> x;
	cout << "Enter the y value : ";
	cin >> y;
	cout << endl << "Area of the rectangle is " << areaCalc(x, y) << endl << endl;
	
	// write_a_message(); 
	// ageCalc(1997);

	cout << endl;
	return 0;
}