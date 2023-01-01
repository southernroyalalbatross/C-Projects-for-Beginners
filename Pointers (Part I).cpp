#include <iostream>
using namespace std;

//				Pointer and Memory
// 
// Adres			Icerik				Adi 
// 
// 1000				  7					 x
// 1001				  
// 1002				 1000				ptr
// 1003
// 1004
// 1005

int planeCoordinateFunction(int x_) {
	// intense calculations (at least 2000 lines)
	x_ = 34;
	return x_;
}

void planeCoordinateFunction2(int* p) {
	// intense calculations by using *p.
	*p = 34;
}

int main() {

	int x = 7;
	int* ptr;
	ptr = &x;  // &: Adresss of ....  // Pointer degiskenlerin adresini tutar.

	cout << x << endl;
	cout << *ptr << endl << endl;	// * icerik anlamina gelir. *ptr 'de o adresin icerigini gosterir.
	cout << ptr << endl;
	cout << &x;

	*ptr = 8;

	// x = planeCoordinateFunction(x);

	planeCoordinateFunction2(ptr);
	cout << endl << endl << "New Value of x : " << x;

	cout << endl;
	return 0;
}