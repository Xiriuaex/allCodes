#include<iostream>
using namespace std;

void main()
{
	int number;
	cout << "enter the number:";
	cin >> number;
	int factorial = 1;
	
	for (int i = 1; i <= number; i++)
	{
		
		factorial*=i;
	}

	cout << number << "!= " << factorial;

	system("pause>0");

}