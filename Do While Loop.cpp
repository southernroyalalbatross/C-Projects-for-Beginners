#include <iostream>

using namespace std;
int main() {
	
	string password = "1234";
	string input;

	do {
		cout << "Please enter your password : ";
		cin >> input;
	} while (password != input);

	cout << "Welcome to the Darknet :) ";

	cout << endl;
	return 0;
}