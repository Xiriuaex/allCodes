#include<fstream>
#include <iostream>
#include<string>								//for getline function..
using namespace std;

int main() {
	fstream myfile2;
	myfile2.open("theFile", ios::in);
	if (myfile2.is_open())
	{
		string line;

		while (getline(myfile2, line))			//getline function: it reads from the first parameter and then stores that line in the 2nd variable
		{											//it is going to do that for every single text...
			cout << line << endl;

		}
		myfile2.close();

	}
	system("pause>0");
}