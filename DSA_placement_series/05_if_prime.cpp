#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "enter the number to check:";
    cin >> number;
    bool isPrime = 1;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0) // 4%1=0
        {
            cout << number << " is not a prime number.";
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        cout << number << " is a prime number.";
    }
    return 0;
}