#include <iostream>

using namespace std;

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int remind, count = 0, number;

        while (n != 0)
        {

            remind = n % 10; // 1011%10=1, 101%10=1, 10%10=0 1%10=1
            n = n / 10;      // 1011/10=101, 101/10=10, 10/10=1

            if (remind == 1)
            {
                count++; // 1 2 3
            }
        }
        return count;
    }
};

int main()
{
    Solution obj;
    uint32_t input, answer;
    cout << "enter the input: ";
    cin >> input;
    answer = obj.hammingWeight(input);
    cout << answer;
}