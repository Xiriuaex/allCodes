#include<iostream>
using namespace std;
#define i 1000;

class stack {
	int top;
public:

	stack() { top = -1; }
	int a[];
	int pop() {
		if (top != -1) {
			--top;
			cout << "the number deleted.." << a[top];
		}

	}
	int push(int x) {
		++top;
		a[top] = x;
		cout << "the number added..." << a[top];

		return 0;

	}
	int showstack()
	{

		for (int j = 0; j <= top; j++)
			cout << "\nthe stack is..." << a[j];
		return 0;

	}
};

int main() {
	
	stack s;
	string operation;
	string ex;
	do{
		cin >> operation;
		if (operation == "push")
		{
			int number;
			cout << "\nthe number: ";
			cin >> number;
			s.push(number);
			s.showstack();
			cout << "\nadd more or exit...";
			cin >> ex;
		}
		
		else if (operation == "pop")
		{
			int number;
			cout << "\nthe number: ";
			cin >> number;
			s.push(number);
			s.showstack();
			cout << "add more or exit...";
			cin >> ex;
		}
	}while (ex != "exit");
	
	
}