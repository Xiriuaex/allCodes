#include<fstream>
using namespace std;

int main() {
	fstream myfile;
	myfile.open("Pragyan.txt", ios::out);			//ios::out is because we want output in the txt file
	if (myfile.is_open()) {
		myfile << "hello this is my first file handling program.\n";
		myfile.close();

	}

	myfile.open("Pragyan.txt", ios::app);			//ios::app is because we want to append something after the previous output in the txt file
	if (myfile.is_open())
	{
		myfile << "I am Pragyan.\n";
		myfile.close();
	}
}

/*#include<fstream>
#include <iostream>
#include<string>
								//for getline function..
using namespace std;

int main() {
	fstream myfile2;
	myfile2.open("Pragyan", ios::in);
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