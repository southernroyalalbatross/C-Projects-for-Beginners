#include <iostream>

using namespace std;
int main() {

	int number1, number2;
	cout << "Enter your first number: ";
	cin >> number1;
	cout << "Enter yout second number: ";
	cin >> number2;

	if (number1 > 0 && number2 > 0)
	{
		cout << endl;
		cout << "Numbers are positive !";
		cout << endl;

	}
	else if (number1 < 0 && number2 < 0)
	{
		cout << endl;
		cout << "Numbers are negative !";
		cout << endl;

	}
	else if (number1 < 0 || number2 < 0)
	{
		cout << endl;
		cout << "One of your numbers is negative !";
		cout << endl;

	}
	return 0;
} 