#include<iostream>
using namespace std;

int main(){
	int marks[10] = {81,92,96,60,65,97,100,54,86,84}, check;

	cout << "enter the number: ";
	cin >> check;
	for (int i = 0; i < 10; i++) {
		if (check == marks[i])
		{
			cout << "the number: " << i + 1 << endl;
			break;
		}
		else
		{
			cout << "number not found!" << endl;
			break;
		}

	}
	system("pause>0");
}