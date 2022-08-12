#include<iostream>
#include<fstream>
using namespace std;

class read {
public:

	int readFiles()
	{

		string marks;
		ifstream bleh("results.txt");
		bleh >> marks;
		bleh.close();

		return 0;
	}
};
int main() {
	read marksRead;
	marksRead.readFiles();
	return 0;
}