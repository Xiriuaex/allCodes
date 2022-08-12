#include<iostream>

using namespace std;
 

int main() {
	int matrix[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "enter the numbers: ";
			cin >> matrix[i][j];
			
		}
		
	}
	cout << "the matrix will look like:"<<endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout <<matrix[i][j] <<'\t';	
		}
		cout << endl;
	}

	cout << "the new transpose matrix will look like:\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[j][i] << '\t';
		}
		cout << endl;
	}

	//transpose(matrix[3][3]);

}
