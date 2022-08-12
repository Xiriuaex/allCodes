#include<iostream>

using namespace std;

int main() {
	int m1[3][3];
	int m2[3][3];
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "enter the number: ";
			cin >> m1[i][j];
		}
	}
	cout << "the first matrix is:\n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) 
		{
			cout << m1[i][j]<<'\t';
			
		}  cout << endl;
	}

	for (int a = 0; a < 3; a++) 
	{
		for (int b = 0; b < 3; b++) 
		{
			cout << "enter the number: ";
			cin >> m2[a][b];
		}
	}
			
	cout << " the second matrix is: \n";

	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 3; b++) 
		{
			cout << m2[a][b]<<'\t';
			
		}		 cout << endl;
	}

	int matrix[3][3];
	cout << "the addition of the two matrices:\n";
	for (int x = 0; x < 3; x++) 
	{
		for (int y = 0; y < 3; y++) 
		{
			matrix[x][y] = m1[x][y] + m2[x][y] ;
			cout << matrix[x][y]<<'\t';

		}
		cout << endl;
	}
	
	return 0;

}
