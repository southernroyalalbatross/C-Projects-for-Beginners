#include <iostream>
using namespace std;

//				(Pointer and Memory)
//  Adres				Icerik				Adi
//	1000				  100				 x
//	1004				  10				 y
//	1008
//	1012				1000				 p1
//	1016				1004				 p2
//	1020
//	1024
//	1028
//	1032
//	1036
//	1040

int main() {

	int x = 5;
	int y = 8;
	int* p1;
	int* p2;

	p1 = &x;
	p2 = &y;
	y = y + 2;
	*p1 = *p1 * 2;
	*p1 = *p2 * *p1;
	//cout << *p1;
	cout << x << endl;
	cout << y;


	cout << endl;
	return 0;
}