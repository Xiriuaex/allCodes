#include<iostream>
using namespace std;
int c = 5;

int main() {
	
	int c = 6;
	cout << "the local variable: " << c << endl;
				// local variable has preference over global one but to get global variable over local variable of the same name
				// we use ::(scope resolution)
	cout << "the global variable: " << ::c<<endl;


	
	//3.4f floating point number
	//3.4l long double point number
	// otherwise the value is by default a double type
	// 

	//*****Float, double and long double literals******
	//  float d = 3.4;
	//	long double e = 3.4;
	//cout << "the size of 3.4 is" << sizeof(3.4) << endl;
	//cout << "the size of 3.4f is" << sizeof(3.4f) << endl;
	//cout << "the size of 3.4l is" << sizeof(3.4l) << endl;
	//
	//*******reference variables***********
	float x = 4;
	float & y = x;   //  this &y is pointing to the value of x or referencing to x. hence y is reference variable
	cout << x << endl;
	cout << y << endl;

	//*******typecasting*********
	// changing variable data types
	float q = 3.2;
	cout << "q= " << (int)q<<endl;  //the output now be in int
	cout << "q= " << int(q) << endl;

}