/*print:
    A B C
    A B C
    A B C For n =3*/
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
        char ch = 65;
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