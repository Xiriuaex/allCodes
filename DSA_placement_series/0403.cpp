// output:
/* 1 2 3
   4 5 6
   7 8 9
*/

#include <iostream>

using namespace std;

int main()
{
   int n, i = 1, x = 1, j;
   cout << "enter the amount of lines: ";
   cin >> n;
   while (i <= n)
   {
      j = 1;
      while (j <= n)
      {
         cout << "\t" << x << "\t";
         j++;
         x++;
      }
      cout << endl;
      i++;
   }
   return 0;
}