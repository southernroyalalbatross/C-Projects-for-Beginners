#include <iostream>
using namespace std;

void func1(int &x) {
	x = x * 2;
	cout << "x value for func1 : " << x << endl;
}

int main() {
	
	int x = 5;
	func1(x);
	cout << "x value for main : " << x << endl;

	/*int arr[] = { 34, 47, 85 };

	int* p;
	p = arr;

	cout << p << endl;
	cout << arr << endl;

	cout << endl << *p << endl;
	cout << endl << *(p+1) << endl;
	cout << endl << *(p+2) << endl;
	cout << endl << p[2] << endl; */


	cout << endl;
	return 0;
}