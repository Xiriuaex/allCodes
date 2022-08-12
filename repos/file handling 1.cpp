#include<fstream>
#include<string>
using namespace std;

int main() {

	ifstream obj;
	obj.open("myfile2", ios::out);
	char myfile[50] = { "my name is Pragyan and I live in Moran." };
	int length = strlen(myfile);
	for (int i = 0; i < length; i++)
	{
		objwrite(myfile, length);
								//obj put(myfile[i]);
	
	}
	obj.close();


	system("pause>0");
}