#include <iostream>

using namespace std;
int main() {
	for (int i = 0; i < 20; i++) {
		if (i == 10)
			continue;
		cout << i << endl;
	}

	cout << endl;
	return 0;
}