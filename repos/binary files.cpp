#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main() {
	char input[100];
	strcpy_s(input, "my name is joey");

	fstream file("lol.bin", ios::binary | ios::in |ios::out| ios::trunc);

	if (file.is_open()) {
		int length = strlen(input);
		for (int i = 0; i <= length; i++)
		{
			file.put(input[i]);

		}
		file.seekg(0); //reset the get and put position. read from the beginning
		char c;       
		while(file.good()){     //get method to write to char by char.
			file.get(c); //read
			cout << c;
			}
	}
	else
		cout << "error!";

}