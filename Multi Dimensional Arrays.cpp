#include <iostream>

using namespace std;
int main() {
	int array[2][3] = { {21,34,42},
						{22,35,47} };
	
	// cout << array[0][2];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	return 0;
} 