#include<iostream>
#include<fstream>

using namespace std;

int main() {
	fstream file;

	file.open("testfile.txt", ios::out|ios::trunc);    //trunc removes all the previous data of the file...and create a new by overwriting it.
	if (file.is_open())									//out is to create and in is to read.
	{
		file << "test writing2..how are you.." << endl;
		cout << "file successfully opened." << endl;

	}
	else
	{
		cout << "error." << endl;
}
	file.close();

	system("pause>0");

}