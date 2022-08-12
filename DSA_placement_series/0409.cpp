// output:
/*
    1
    2 3
    3 4 5
    4 5 6 7
    for n=4
    Logic: We are starting from i for every row i.
           Keep increamenting i times for each row.
*/

#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, m, j;
    cout << "enter the amount of lines: ";
    cin >> n;
    while (i <= n)
    { // i=1, 2
        j = 1;
        m = i;         // m=1, 2
        while (j <= i) // 1<3
        {
            cout << m << '\t'; // 1
                               // 2  3..
            m++;               // 2
            j++;               // 2
        }
        cout << endl;
        i++; // 2
    }
    return 0;
}
