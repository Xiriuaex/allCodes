// operator overloading.cpp 


#include <iostream>

using namespace std;

int main() {
	int a[5] = { 1,2,3,4,5 }, number, position;
	cout << "Enter the number:";
	cin >> number;
	cout << "\n Enter the position: ";
	cin >> position;
	for (int i = 0; i <= position; i++) {
		a[position] = number;
		
	}
	for (int j = 0; j < 5; j++) {
		cout << a[position];
	}


	system("pause>0");

}
