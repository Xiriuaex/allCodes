#include<iostream>
using namespace std;

int main() {
	int s[5] = {32,42,78,12,53};
	int i = 0;
	//int temp;
	while (i!=4)
	{
			for (int i = 0; i < 5; i++)
			{
				if (s[i] < s[i + 1])
				{
					int temp = s[i];
					s[i] = s[i + 1];
					s[i + 1] = temp;
					
					break;
				}
				else if (s[i] > s[i + 1])
				{
					cout << s[i] << endl;
					break;
					//i++;
				}

			}
			i++;
			//break;
		}
	return 0;
}