#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	const int pie = 3.14;
	//you can not change this value
	cout << pie;

	//manipulators***
	//endl
	

	//setw manipulator---->>
	//int a = 1, b = 34, c = 443243;
	//cout << "the value of a :" << a << endl;
	//cout << "the value of b :" << b << endl;
	//cout << "the value of c :" << c<< endl;
	//cout << "the value of a :" << setw(4) << a << endl;//take width of space 4
	//cout << "the value of b :" << setw(4) << b << endl;
	//cout << "the value of c :" << setw(3) << c << endl;

	//Operator precedence--->>
	int n = 1, r = 43;
	int c = n * r + 32 - 23 * r;
	cout << c;
	return 0;

	//in this cases use opertor precedence to know which process is happenening first

}
