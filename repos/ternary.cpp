#include<iostream>
using namespace std;

int main()
{
	int a = 7484683, passcode;
	cout << a;
	int balance = 5;
	int data = 43557;
	system("cls");
	cout << "PASSWORD: ";
	cin >> passcode;
	if (a == passcode)
		{
			cout << endl;
			cout << "WELCOME PRAGYAN\n";
			cout << endl;
			cout <<"Balance :"<< balance << "lakhs\n";
			cout << endl;
			cout <<"Code One :"<<data;
		}
	else
		cout << "wrong code!";
	
	system("pause>0");
}