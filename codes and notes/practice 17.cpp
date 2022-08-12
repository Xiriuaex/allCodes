#include<iostream>
using namespace std;

class base {
	int id;
	int source;
	int number1 = 2;
	int number2 = 34;

public:
	void get();
	int calculation();
	
};

int base:: calculation()
{
	int number3 = number1 * number2;
	cout << "2 x 34" << number3 << endl;
	return 0;

}
void base:: get()
{
	id = 21;
	source = 393;
	cout << "your id is " << id << endl;
	cout << "source " << source << endl;
}


class derived : public base
{
	string name1 = "Pragyan";
	string* ptrFrName = &name1;
	int salary;
	int bonus;
public:
	void fromDerived()
	{
		cout << "this data is from derived class" << endl;
	}
	void total(int sal, int bonusss)
	{
		salary= sal;
		bonus = bonusss;
		float tax = salary * (.05);
		float totall;
		totall = salary + bonus - tax;
		cout << "Your total will be " << totall;

	}
	 void function()
	{
		cout << "enter your name";
		string name;
		cin >> name;
		string* ptr = &name;
		if (*ptr == *ptrFrName)
		{
			int num1, num2;
			cout << "accessing.." << endl;
			cout << endl;
			cout << "enter salary :";
			cin >> num1;
			cout << "enter bonus: ";
			cin >> num2;
		total(num1, num2);	   

		}
		else
			cout << "sorry.";

	}
};

int main() {
	cout << "from base class " << endl;
	base obj1;
	obj1.get();
	obj1.calculation();

	cout << "from the derived class :" << endl;
	
	derived obj2;
	obj2.fromDerived();
	obj2.function();


}