#include<iostream>
using namespace std;

int main() {
	int s[5] = { 32,42,78,12 };
	int temp;
	for (int i = 0; i <= 4; i++)
	{
		if (s[i] > s[i + 1])
		{
			temp = s[i];
			s[i] = s[i + 1];
			s[i + 1] = temp;
		}
			
	}
	cout << s[5] << endl;
	
	return 0;
}