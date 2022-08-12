#include<iostream>
using namespace std;

int main()
{
	int a[10], sum = 0;
	cout << "enter the number: " << endl;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		sum += a[i];



	}
	cout << sum << endl;
	return 0;

	system("pause>0");
}