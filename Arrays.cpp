#include <iostream>

using namespace std;
int main() {
	int arr[5];
	arr[0] = 20;
	arr[1] = 33;
	arr[2] = 42;
	arr[3] = 39;
	arr[4] = 55;

	cout << "enter the first value of array : ";
	cin >> arr[0];

	for (int i = 0; i <= 4; i++) {
		cout << arr[i] << endl;
	}

	cout << arr[2];
	
	cout << endl;
	return 0;
}