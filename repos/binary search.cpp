#include<iostream>

using namespace std;

int binarySearch(int array[], int number, int size) {
	int low, mid, high;
	low = 0;
	high = size;
	
	
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (array[mid] == number)
			return mid;
		else if (array[mid] < number)
			low = mid + 1;
		else if (array[mid] > number)
			high = mid - 1;
	}; 
	//cout << "no number.";
	
}
int main() {
	int arr[] = { 12,43,55,93,105 };
	int size = sizeof(arr);	
	int num=44;
	//cin >> num;
	int search=binarySearch(arr, num, size);
	cout << "the position is: "<<search;
	return 0;
	

}