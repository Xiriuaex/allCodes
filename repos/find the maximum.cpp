#include<iostream>
using namespace std;

int main() {
	int numbers[5] = {43, 46, 2, 1, 88}, max;
	

	for (int i = 1; i < 5; i++)
	{
		if (max < numbers[i + 1])
			max = numbers[i];
		else
			cout << "largest number is " << numbers[i];
		
		break;	


	}

	system("pause>0");

}