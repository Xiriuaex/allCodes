
#include <iostream>
using namespace std;

void main()
{
	int pin = 40380, pin1, errorCounter=0;
	cout << "welcome to the code...\n";

	do
	{
		cout << "enter pin= ";
		cin >> pin1;
		if (pin1 != pin)
			errorCounter++;
	} while (pin != pin1 && errorCounter < 3);

	if (errorCounter < 3)
		cout << "ENTERING THE DATA FILES....";
	else
		 cout << "sorry!";
	system("pause>0");
}