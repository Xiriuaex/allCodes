/*print:
    A
    B B
    C C C  For n =3*/
#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, j;
    char ch = 65;
    cout << "enter the amount of lines: ";
    cin >> n;
    while (i <= n)
    { // i=1 2 3
        j = 1;
        while (j <= i)
        {
            cout << ch << '\t'; // 65, 66 66, 67 67 67
            j++;
        }
        cout << endl;
        i++;  // 3
        ch++; //
    }
    return 0;
}