#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 2;
    if ((a--) > 0 || (++b) > 2)
    {
        cout << "stage1-inside if";
    }
    else
    {
        cout << "stage2-inside else";
    }
    cout << "value of a:" << a << endl;
    cout << "value of b:" << b << endl;
    return 0;
}
// only one of the conditions must
// true for || so it won't check ++b>2