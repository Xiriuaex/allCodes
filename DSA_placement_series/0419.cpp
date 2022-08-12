/*print:
    D
    C D
    B C D  For n =3*/
#include <iostream>

using namespace std;

int main()
{
    int n, i = 1;

    cout << "enter the amount of lines: ";
    cin >> n;
    while (i <= n)
    {

        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + n - i + j - 1;
            cout << ch << '\t';
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

// we can also just increment ch="A"+n-i