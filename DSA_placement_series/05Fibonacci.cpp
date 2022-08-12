// print fibonacci number:
// 0 1 1 2 3 5 8 13 21 34 55 ....
// 0+1=1, 1+1=2, 1+2=3, 2+3=5, 3+5=8 etc

#include <iostream>

using namespace std;

int main()
{
    int n, fib = 0, fst, snd;
    cout << "enter n:";
    cin >> n;

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        cout << fib;
    }
    else if (n > 1)
    {
        cout << (fib++) << '\t';
        cout << fib << '\t'; // 0 1
        fst = 0;
        snd = 1;
        for (int i = 0; i < (n - 2); i++)
        {
            fib = fst + snd;     // 1, 2, 3, 5
            cout << fib << '\t'; // 0 1 1 2 3 5
            fst = snd;           // 1 1 2 3
            snd = fib;           // 1 2 3 5
        }
    }
    return 0;
}