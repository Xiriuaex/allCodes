#include<iostream>
using namespace std;

int main() {
	int a = 3;
	int* b;
	b = &a;
	cout << "the address of a:" << b<<endl;
	cout << "the address of a: " << &a<<endl;
	cout << "the value at address a:" << *b<<endl;

	int** c = &b;
	cout << "the address of b: " << c << endl;
	cout << " the value of a :" << **c << endl;
	cout << "the address of b" << &c<<endl;






	return 0;
}