
#include<iostream>
#include<fstream>
//#include <bits>

using namespace std;

class employee
{
protected:
	int empNum = 1;
	string name;
	int age;
	int doj;
	int salary;

public:

	int set(string name, int age, int doj, int salary)
	{
		this->name = name;
		this->age = age;
		this->doj = doj;
		this->salary = salary;

		return 0;
	}

	int database()
	{

		ofstream employ;
		employ.open("employee.txt", ios::app);
		
		if (employ.is_open())
		{
			employ << "Employee number " << empNum++ << endl;
			employ << "Name of the employee: ";
			while (employ.eof() == 0) 
			{
				getline(employ, name);
				employ<< name << endl;
			}
			employ << "employee age: " << age << endl;
			employ << "year of joining: " << doj << endl;
			employ << "salary: " << salary << endl;
			employ << endl;
			employ.close();
		}
		return 0;
	}

};
class entry : public employee
{
public:
	entry()
	{
		cout << "****DATA ENTRY OF THE ORGANIZATION****" << endl;

		for (int no = 1; no <=1; no++)
		{

			cout << "Employee no " << no << endl;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter age: ";
			cin >> age;
			cout << "year of joining: ";
			cin >> doj;
			cout << "Enter salary per month: ";
			cin >> salary;

			set(name, age, doj, salary);
			cout << endl;
			database();
		}
	}

};
int main()

{
	entry data;
	data;
	return 0;
}