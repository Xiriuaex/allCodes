// output:
/*
    1
    2 2
    3 3 3
    4 4 4 4
    for n=4
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
            cout << i << '\t';
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
