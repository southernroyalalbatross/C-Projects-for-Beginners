#include <iostream>
using namespace std;

void function1() {
	static int index = 0;
	index++;
	cout << "Function 1 Index : " << index << endl;
}

void function2() {
	static int index = 0;
	index++;
	cout << "Function 2 Index : " << index << endl;
}

int main() {

	function1();
	function1();
	function1();

	cout << endl;

	function2();
	function2();

	const float pi = 3.14;
	cout << endl << pi;

	cout << endl;
	return 0;
}