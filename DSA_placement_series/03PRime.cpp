#include <iostream>

using namespace std;

int main()
{
   int pr, i = 2;
   cout << "Enter number:";
   cin >> pr;
   while (i < pr)
   {
      if ((pr % i) == 0)
      {
         cout << "not a prime";
         return 0;
      }
      i++;
   }
   cout << "a prime number.";
   return 0;
}