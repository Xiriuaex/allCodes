/*print:
    A A A
    B B B
    C C C For n =3*/
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
        }
        cout << endl;
        i++;
        ch++;
    }
    return 0;
}