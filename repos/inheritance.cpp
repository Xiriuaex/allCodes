#include<iostream>

using namespace std;

class base {
	string name;
	int age;
	string gender;
public:
	base(){
		cout << "student details:\n";
		cout << "enter name: ";
		cin >> name;
		cout << "enter age: ";
		cin >> age;
		cout << "enter gender: ";
		cin >> gender;
	}
	int show() {
		cout << "name of the student: " << name;
		cout << "age: " << age;
		cout << "gneder: " << gender;

	}
};

class science: public base {
public:
	science() {
		cout << "entry of science students: ";
	}
	int fuck() {
		for (int i = 1; i <= 3; i++) {
			cout << "\nentry no " << i;
			base::show;
		}
	}

};

int main() {
	base o1;
	o1.show();
	science o2;
	o2.fuck();
}
