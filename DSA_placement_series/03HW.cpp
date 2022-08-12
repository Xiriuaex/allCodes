#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "enter the character:";
    cin >> ch;
    int c = (int)ch;
    if (c > 96 && c < 123)
    {
        cout << "This is lowercase.";
    }
    else if (c > 64 && c < 91)
    {
        cout << "this is Uppercase.";
    }
    else if (c > 47 && c < 58)
    {
        cout << "this is numeric.";
    }
    return 0;
}