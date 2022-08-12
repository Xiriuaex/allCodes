/*#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {

	ifstream file("test3.txt", ios::in);
	if (file.is_open())
	{
		cout << file.tellg() << endl;	//to get the current get position of the file, we use a function call tellg
		string line;			
		file.seekg(4);		//to change the get position we use a function called seekg() .the argument is the position
		getline(file, line);				
		cout << line;
	}
	else
		cout << "error!";

	return 0;
}   //the get position is zero, we read from get position(i don't if it makes any sence but this is basically what i am understanding so far.
*/


#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {

	ofstream file("test3_1.txt", ios::out);
	if (file.is_open())
	{
		cout <<file.tellp() << endl;	//to get the current put position of the file, we use a function call tellp
		file << "hi my name is joey. ";
		cout << "successful." << endl;
		//file.seekp(14);		//to change the put position we use a function called seekp(). the argument is the position
		//file << "Chandler.";
	}
	else
		cout << "error!";

	return 1;
}   //the get position is zero, we read from get position(i don't if it makes any sence but this is basically what i am understanding so far. 