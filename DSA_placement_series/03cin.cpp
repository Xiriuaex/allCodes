#include <iostream>

using namespace std;

int main()
{
    int a;
    a = cin.get();
    cout << "value of a is:" << a << endl;
    return 0;
}
// input: 1 2 gives output 49 why??
// cin.get() gives character.It takes '1' as a character and ASCII value of '1' = 49
// So it gives 49 as output.
