#include <iostream>

using namespace std;
int main() {
	// write numbers from 1 to 20 by using for loop
	for (int i = 1; i <= 20; i++) {
		if (i%5 == 0)
		cout << i << endl;
	}

	/* how can we do the same thing by using while loop
	int j = 1;
	while (j <= 20) {
		cout << j << endl;
		j++;
	}
	*/

	cout << endl;
	return 0;
} 