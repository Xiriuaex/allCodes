#include <iostream>

using namespace std;

int main()
{
	int passcode;
	cout << "PASSCODE : ";
	cin >> passcode;
	if (passcode / 1 == 3433258)
	{
		char a;
		cout << "NAME :";
		cin >> a;
		cout << "WELCOME\n" << a;
		if(a)
		float monthlySalary;
		cout << "enter monthly salary: ";
		cin >> monthlySalary;
		float increament = monthlySalary * 5;
		cout << "THANK YOU";
	}
	else
		cout << "wrong code.";


	system("pause>0");
}