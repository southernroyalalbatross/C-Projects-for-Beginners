#include <iostream>
using namespace std;

void errorMessage() {
	cout << " 404 Not Found Error ! :) " << endl;
}

void errorMessage(string message) {
	cout << message << endl;
}

void errorMessage(int errorCode) {
	cout << " Error Code : " << errorCode << endl;
}

int main() {

	errorMessage();
	errorMessage(" Special Message ");
	errorMessage(404);

	cout << endl;
	return 0;
}