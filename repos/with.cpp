#include<iostream>
using namespace std;

class A {
	int a;
public:
	A(int no) {
		//cout << "Parent class  " << endl;
		no = a;
	}

};
class B :public A {
	int b;
public:
	B(int q, int w) :A(q) {
		cout << "Child class " << endl;
		w = b;
	}
};
int main() {
	B obj(3,4);
	return 0;
	system("pause>0");
} 