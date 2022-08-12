#include<iostream>
using namespace std;

class A {
	int a;
public:
	A() {
		cout << "Parent class  " << endl;
	}

};
class B :public A {
	int b;
public:
	B() :A() {
		cout << "Child class " << endl;
	}
};
int main() {
	B obj;
	return 0;
	

	system("pause>0");
}