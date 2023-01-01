#include <iostream>
using namespace std;

int main() {

	int x;
	cout << "How many numbers does the array have ? : ";
	cin >> x;
	int* p = new int[x];

	for (int i = 0; i < x; i++) {
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < x; i++) {
		sum = sum + p[i];
	}
	cout << "summation : " << sum << endl;

	delete[] p;


	//int* p = new int;
	//*p = 7;
	//cout << p << endl;

	//cout << *p << endl;
	//delete p;

	//cout << p  << endl;

	cout << endl;
	return 0;
}