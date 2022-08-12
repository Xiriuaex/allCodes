#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 6;
    cout << "a&b: " << (a & b) << endl;
    cout << "a|b: " << (a | b) << endl;
    cout << "a^b: " << (a ^ b) << endl;
    cout << "~a: " << ~a << endl;
    return 0;
}

// 4&6= 100 & 110 =100=4
// 4|6= 100|110=110=6
// 4^6 =100^110=010=2
//   ~4
//= ~000..0100
//=  111..1011
//=  -11..0101
//=  -5