#include <iostream>
using namespace std;

class automobile {
public:
	string color;
};

int main() {

	automobile automobile1;
	automobile automobile2, automobile3;

	automobile1.color = "black";
	automobile2.color = "blue";
	automobile3.color = "yellow";

	cout << "auto1 color : " << automobile1.color << endl;
	cout << "auto2 color : " << automobile2.color << endl;
	cout << "auto3 color : " << automobile3.color << endl;


	cout << endl;
	return 0;
}