#include <iostream>

using namespace std;
int main() {
	// write from 1 to input (increment : 7 - 14 - 21 - 28 etc.)
	
	int index = 1;
	int max;
	cout << "Please enter the max value : ";
	cin >> max;


	while (index <= max) {
		if (index % 7 == 0) {
			cout << index << " ";
		}
		index++;
	}
	
	cout << endl;
	return 0;
}