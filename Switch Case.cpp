#include <iostream>

using namespace std;
int main() {
	int number;
	cout << "Please enter a number (between 1 and 5) : ";
	cin >> number;

	switch (number)
	{
	case 1:
		cout << "you selected 1" << endl;
		break;

	case 2:
		cout << "you selected 2" << endl;
		break;

	case 3:
		cout << "you selected 3" << endl;
		break;

	default:
		cout << "You did not what i wanted :)";
		break;
	}
	cout << endl;
	return 0;
}