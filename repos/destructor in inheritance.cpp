#include<iostream>
using namespace std;

class A {
	int a;
public:
	~A() {
		cout << "destructor of parent class will get executed second." << endl;
		cout << "I am destructor a destructor of parent class." << endl;

	}

};
class B : public A {
	int b;
public:
	~B() {
		cout << "destructor of child class will get executed first." << endl;
		cout << "I am a destructor of child class."<<endl;
		

	}
};

int main() {
	B object;
	return 0;
	system("pause>0");

}