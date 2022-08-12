/*#include<iostream>
using namespace std;

bool isPrimeNumber(int number) {
	bool prime = true;
	for (int n = 2; n < number; n++) {
		if (number % n == 0)
			prime = false;
			break;
			}
	return prime;
	}
void main() {
	int no;
	cout << "your number";
	cin >> no;

	bool thisone = isPrimeNumber(no);
	if (thisone)
		cout << no << " is not prime number";
	else
		cout << no << " is prime number";


	system("pause>0");
}*/



#include<iostream>
using namespace std;

bool isPrimeNumber(int number) {
	bool prime = false;
	for (int n = 2; n < number; n++) {
		if (number % n != 0)
			prime = true;

			break;
	}
	return prime;
}

void main() {
	int no;
	cout << "your number";
	cin >> no;

	for (int x = 1; x <= no; x++) {

		bool thisone = isPrimeNumber(x);
		
		if (thisone)
			cout << x << " is not prime number\n";
		else
			cout << x << " is prime number\n";


	}
	system("pause>0");
}