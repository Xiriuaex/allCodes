#include <iostream>

using namespace std ;

void main()
{
	int number, reverseNumber = 0;
	cout << "number: ";
	cin >> number;							 //iteration

	while (number != 0)
	{
		reverseNumber *= 10;
		int lastDigit = number % 10;
		reverseNumber += lastDigit;
		number /= 10;
	}
	cout << "reversed = " << reverseNumber;

	system("pause>0");
}





