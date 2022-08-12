#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int bit;
    unsigned int answer = 0, Newanswer = 0, i = 0, j = 0, ones;
    int number;
    cout << "enter a number:";
    cin >> number;

    // convert to binary:
    while (number != 0)
    {
        bit = number & 1;
        answer = (bit * pow(10, i)) + answer;
        number = number >> 1;
        i++;
    }
    cout << answer;
    // 2's complement:
    // first 1s complement:
    while (answer != 0)
    {
        // 000000..110
        ones = answer % 10;
        if (ones == 0)
        {
            ones = 1;
        }
        else if (ones == 1)
        {
            ones = 0;
        }
        Newanswer = (ones * pow(10, j)) + Newanswer;
        answer = answer / 10;
        j++;
    }
    Newanswer += 1;

    cout << "  " << Newanswer;
}