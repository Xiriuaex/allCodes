#include<iostream>

using namespace std;

int search(int arr[],int n,int r)
	{
	for (int i=0; i < n; i++)
	{		  
		if (arr[i] == r)
		{
			cout << "the number is at: " << i;
			exit(0);
		}
		else if (i == n && arr[i] != r)
			cout << "not found";
		exit(0);
	}
	return 0;
}
int main() 
{
	int arr[] = { 123,231,242,436,3463 };
	int num;
	cin >> num;
	
	int p = sizeof(arr) / sizeof(num);
	int lol=search(arr, p, num);

}