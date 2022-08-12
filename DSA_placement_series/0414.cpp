/*print:
    A B C
    D E F
    G H I  For n =3*/
#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, j;
    char ch = 65;
    cout << "enter the amount of lines: ";
    cin >> n;
    while (i <= n)
    {
        j = 1;

        while (j <= n)
        {
            cout << ch << '\t';
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }
    return 0;
}