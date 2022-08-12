#include <iostream>

using namespace std;
int main()
{
	float annualSalary;
	cout << "please enter your annual salary ";
	cin>> annualSalary;
	float monthlySalary = annualSalary / 12;
	cout << " your monthly salary is " << monthlySalary<<endl;
	
	system("pause>0");
}