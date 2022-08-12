#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	fstream file;
	file.open("text2.txt", ios::in);
	if (file.is_open())												
	{
		cout << "file successfully opened." << endl;	// getline(input, output)
		while (file.good()) {							//file.good() is to read untill the end file.
			string line;
			getline(file, line);
			
			cout << line << endl;
		}
	}
	else
		cout << "error";

	return 0;

}