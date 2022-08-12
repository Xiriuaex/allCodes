/*print:
    A
    B C
    C D E
    D E F G For n =4*/
#include <iostream>

using namespace std;

int main()
{
    int n, i = 1;

    cout << "enter the amount of lines: ";
    cin >> n;
    while (i <= n)
    { // 1 2 3 4
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << ch << '\t'; // 65, 66 67, 68 69 70,
            j++;                // 3
            ch++;               // 66, 67, 68, 69, 70, 71
        }
        cout << endl;
        i++; // 4
    }
    return 0;
}