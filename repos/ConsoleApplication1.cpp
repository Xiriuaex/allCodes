#include<iostream>									/*usually 4 steps happen -1. function call,
																				2. accept the value,
																				3. calculate,
																				4. return the value.
																				but with inline it is only about copying and paste
																				thus the execution time will be less*/
using namespace std;

inline int sum(int x, int y) {
	return (x + y);

}

void main(){
	int a, b;
	cout << "enter the values: " << endl;
	cin >> a >> b;
	cout << sum(a, b) << endl;
	cout << sum(19, 1) << endl;
	system("pause>0");

}