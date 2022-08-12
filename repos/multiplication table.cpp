#include<iostream>

using namespace std;

int main()
{
	int height;
	cout << "enter height: ";
	cin >> height;
	int width;
	cout << "enter width: ";
	cin >> width;
	char symbol;
	cout << "enter symbol: ";
	cin >> symbol;

	for (int h = 1; h <= height; h++)
	{
		for (int w = 1; w <= width; w++)
		{
			cout << symbol;
			
		}
		cout << endl;
	}
	system("pause>0");

}