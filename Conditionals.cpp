#include <iostream>

using namespace std;

int main() {

	// sifre belirleme
	int sifre;
	cout << "Sifre Belirleyiniz: ";
	cin >> sifre;
	cout << endl;
	cout << "Sifre Belirlendi " << endl;
	cout << endl;

	// sifre sorma
	int sifredenemesi;
	cout << "Sifreyi Giriniz : ";
	cin >> sifredenemesi;

	cout << endl;

	if (sifredenemesi == sifre)	
		cout << "Sifre Dogru !";
	else
		cout << " !!! Sifre Yanlis !!!";

	cout << endl;
	return 0;
}
