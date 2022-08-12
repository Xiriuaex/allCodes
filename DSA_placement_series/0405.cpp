// output:
/*
 *
 * *
 * * *
 * * * *  for n=4
 */

#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, j;
    cout << "enter the amount of lines: ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
