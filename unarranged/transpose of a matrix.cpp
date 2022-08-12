#include<iostream>
using namespace std;

int transpose(int matrix[4][4]) {

	
	matrix[4][4];
	cout << "the transpose matrix...\n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <4; j++) {
			cout << matrix[j][i] << '\t';
			
		}
		cout << endl;
	}
	return 0;
}

int main() {
	int matr[4][4];
	cout << "Enter the matrix: \n";

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <4; j++) {
			cout << "the number:";
			cin >> matr[i][j];
		}
	}
	cout << "the matrix: \n";
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << matr[i][j] << '\t';
			
		}  cout << endl;
	}
	int mata= transpose(matr);

}