#include<iostream>
#include<iomanip>   //this header file will give size to the shape. i mean to say easily...
using namespace std;

int main()
{
	int length;
	cout << "enter Length: ";
	cin >> length;
	char symbol;
	cout << "enter symbol: ";
	cin >> symbol;

	for (int h = 0; h <= length; h++)
	{
		for (int w = h; w <= length; w++)
		{
			cout << setw(3)<<symbol ;
			cout << endl;
		}
	}
	system("pause>0");

}