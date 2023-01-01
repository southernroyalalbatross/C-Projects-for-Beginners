#include <iostream>

using namespace std;
int main() {
	// Write a program like this ;
	// Please Enter a Number : 4 (e.g.)
	// 1
	// 2 2
	// 3 3 3
	// 4 4 4 4

	int number;
	cout << "Please Enter a Number : ";
	cin >> number; 

	for (int j = 1; j <= number; j++) {

		for (int i = 1; i <= j; i++) {
			cout << j << " ";
		}

		cout << endl;
	}
	cout << endl;
	return 0;
}