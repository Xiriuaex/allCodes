#include<iostream>

using namespace std;

int addition(int m1[3][3], int m2[3][3]) {
	int matrix1[3][3];

	matrix1[3][3]=m1[3][3];
	int matrix2[3][3];

	matrix2[3][3]=m2[3][3];

	int result[3][3];
	for (int r = 0; r <3; r++) {
		for (int c = 0; c <3; c++) {
			
			result[r][c]= matrix1[r][c] + matrix2[r][c];
			cout << result[r][c] << '\t';

		}
		cout << endl;
	}
	return 0;

}

int main() {
	int ma1[3][3];
	int ma2[3][3];
	cout << "first matrix: \n";
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			cout << "enter the number:";
			cin >> ma1[r][c];
		}
		
	}
	cout << "\n second matrix: \n";
for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			cout << "enter the number:";
			cin >> ma2[r][c];
		}
		
	}for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			int res = addition(ma1[r][c], ma2);
		}
		
	}

}