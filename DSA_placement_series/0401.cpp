// output:
//  1 2 3 4
//  1 2 3 4
//  1 2 3 4
//  1 2 3 4
//

#include <iostream>

using namespace std;

int main()
{
   int n, i = 1, j;
   cout << "enter the amount of lines: ";
   cin >> n;
   while (i <= n)
   {
      j = 1;
      while (j <= n)
      {
         cout << "\t" << j << "\t";
         j++;
      }
      cout << endl;
      i++;
   }
   return 0;
}
