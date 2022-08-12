// output:
/*
    9 8 7
    6 5 4
    3 2 1
*/

#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, x, j;
    cout << "enter the amount of lines: ";
    cin >> n;
    x = n * n;
    while (i <= n)
    {
        j = n;
        while (j >= 1)
        {
            cout << "\t" << x << "\t";
            j--;
            x--;
        }
        cout << endl;
        i++;
    }
    return 0;
}
