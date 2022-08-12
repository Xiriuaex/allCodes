#include<iostream>
   //this header file will give size to the shape. i mean to say easily...

using namespace std;

int main()
{
	int length;
	cout << "enter Length: ";
	cin >> length;
	char symbol;
	cout << "enter symbol: ";
	cin >> symbol;

	for (int h = 1; h <= length; h++)
	{
		for (int w = 1; w <= h; w++)
		{
			cout << symbol;
		} 
		cout << endl;

	}
	system("pause>0");

}