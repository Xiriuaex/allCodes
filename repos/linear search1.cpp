#include<iostream>
using namespace std;

int main() {
	int code1[6] = { 1,2,5,4,6,7 };
	int code;
	cout << "enter the code: ";
	cin >> code;
	if (code == code1[6])
	{
		switch (code)
		{
		case 1: cout << "Joey" << endl; break;
		case 2: cout << "Chandler" << endl; break;
		case 7: cout << "Monica" << endl; break;
		case 4: cout << "Ross" << endl; break;
		case 5: cout << "Pheobe" << endl; break;
		case 6: cout << "Rachel" << endl; break;
		}
	}
	else
		cout << "end program";
	
	system("pause>0");
}


	/*for (int i = 0; i < 10; i++) {
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
}*/