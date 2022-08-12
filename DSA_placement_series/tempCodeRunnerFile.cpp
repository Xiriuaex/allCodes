#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int bit;
    long long int number, answer = 0, i = 0;
    cout << "enter a number:";
    cin >> number;
    while (number != 0)
    {

        bit = number & 1;

        answer = (bit * pow(10, i)) + answer;
        number = number >> 1;
        i++;
    }
    cout << "answer is :" << answer;
}