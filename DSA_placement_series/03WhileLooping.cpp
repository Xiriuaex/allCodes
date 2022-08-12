// Factorial using while loop:

#include <iostream>

using namespace std;

int main()
{
    int a, fact = 1;
    cout << "Enter the number:";
    cin >> a;
    int i = 1;
    while (i <= a)
    {
        fact *= i;
        i++;
    }
    cout << fact << endl;
    return 0;
}