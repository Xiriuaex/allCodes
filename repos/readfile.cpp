#include<iostream>
#include<fstream>
using namespace std;

void main() {
	string read;
	ifstream file;
	file.open("thisandthat.txt", ios::in);

	file >> read;

	file.close();
	system("pause>0");
}