// Program to compares two numbers:

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter first value:";
    cin >> a;
    cout << "\nenter second value:";
    cin >> b;
    if (a > b)
    {
        cout << a << " is bigger than " << b << endl;
    }
    else if (a < b)
    {
        cout << b << " is bigger than " << a << endl;
    }
    else
    {
        cout << a << " and " << b << " are equal." << endl;
    }
    return 0;
}