#include<iostream>
#include<math.h>

using namespace std ;


class SimpleCalc {
	float num1;
	float num2;
	char operation;

public:
	void welcome() {
		cout << "****SCIENTIFIC CALCULATOR****" << endl;
	}
	int entry(float x, float y, char Operation) {
		num1 = x;
		num2 = y;																				   	//case '%': cout << x % y; break;
		operation = Operation;
		switch (operation) {
		case '+': cout << "your answer is " << x + y; break;
		case '-': cout << "your answer is " << x - y; break;
		case '*': cout << "your answer is " << x * y; break;
		case '/': cout << "your answer is " << x / y; break;
		}
		return 0;
	}
};
class Scientific {
	float num1;
	char operation;

public:
	void welcome() {
		cout << "****SCIENTIFIC CALCULATOR****" << endl;	
		cout << "operations and there systax: \n";
		cout << "square root->  r\nsine of->  s\ncosine of->  c\ntangent of->  t\n";
	}
	
	int entry(float x, char operations) {
		
		num1 = x;																				   	//case '%': cout << x % y; break;
		char operation =operations;
		switch (operation) {			
		case 'r': cout << "square root of " << sqrt(num1); break;
		case 's': cout << "sine of " << sin(num1); break;
		case 'c': cout << "cosine of " << cos(num1); break;
		case 't': cout << "tangent of " <<tan(num1); break;
		
		}
		return 0;
	}
};

int main() 
{
	float  a, b;
	char op;
	string ans;
	char cal1[10] = "simple";
	char cal2[10] = "sci";
	cout << "****CALCULATOR****" << endl;
	cout << "for simple calculator->simple\n\n for scientific calculator->sci.\n\n";
	cout << "what do you want: ";
	cin >> ans;
	if (ans == "simple") {
		SimpleCalc data;
		cout << "numbers: ";
		cin >> a >> b;
		cout << "operation: ";
		cin >> op;
		data.entry(a, b, op);
		return 0;
	}
	else if (ans=="sci")
	{
		Scientific wel;
		wel.welcome();
		char Op;
		Scientific sciData;
		cout << "enter the number: ";
		cin >> a;
		cout << "operation: ";
		cin >> Op;
		sciData.entry(a, Op);
	}

		return 0;

}