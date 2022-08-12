// output:
/*
    1
    2 1
    3 2 1
    4 3 2 1
    for n=4
    Hint: starting from row number and decrementing
*/

#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, j;
    cout << "enter the amount of lines: ";
    cin >> n;
    while (i <= n)
    { // 1<=4, 2<=4, 3<=4, 4<=4
        j = 1;
        while (j <= i) // 1<=1, 1<=2 2<=2, 1<=3 2<=3 3<=3, 1<=3 2<=3 3<=3 4<=4
        {
            cout << (i - j + 1) << '\t'; // 1, 2 1, 3 2 1, 4 3 2 1
            j++;                         // 3
        }
        cout << endl;
        i++; // 4
    }
    return 0;
}
