/*print:
    A B C
    B C D
    C D E  For n =3
    logic is same as with numbers: 'A'+row-1 for row=1, 2... increment like this*/
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
        char ch = 'A' + i - 1;
        while (j <= n)
        {
            cout << ch << '\t'; // 65+1-1=65 66 67, 65+2-1=66 67 68...
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }
    return 0;
}