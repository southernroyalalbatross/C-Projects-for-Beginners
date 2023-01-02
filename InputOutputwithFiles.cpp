// basic file operations

#include <iostream>
#include <fstream>
using namespace std;

// ofstream : Stream class to write on files
// ifstream : Stream class to read from files
// fstream  : Stream class to both readand write from / to files.

int main() {
	ofstream myfile;
	myfile.open("sercan.txt");
	myfile << "write something to the file.\n";
	myfile.close();
	return 0;
}