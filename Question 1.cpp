#include <iostream>

using namespace std;

int main() {

	// take three numbers as an input
	// find the Max number and print

	int number1, number2, number3, result;
	cout << endl << "Enter three numbers : ";
	cin >> number1 >> number2 >> number3;
	cout << endl;

	if (number1 >= number2 && number1 >= number3)
	{
		result = number1;
	}

	else if (number2 >= number1 && number2 >= number3)
	{
		result = number2;
	}

	else
	{
		result = number3;
	}

	cout << endl << "Max number : " << result << endl;

	return 0;
}