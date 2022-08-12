// output:
/*
    1
    2 3
    3 4 5
    4 5 6 7
    for n=4
    Logic: We are starting from i for every row i.
           Keep increamenting i times for each row.
           **This time without using an extra variable ie. m
*/

#include <iostream>

using namespace std;

int main()
{
   int n, i = 1;
   cout << "enter the amount of lines: ";
   cin >> n;
   while (i <= n)
   {                      // 1<=4, 2<=4, 3<=4,4<=4
      int j = i;          // j=1,2,3,4
      while (j < (i * 2)) // 1<2, 2<4 3<4, 3<6 4<6 5<6, 4<8 5<8 6<8 7<8
      {
         cout << j << '\t'; // 1, 2 3, 3 4 5, 4 5 6 7
         j++;               //
      }
      cout << endl;
      i++; // 2 3 4
   }
   return 0;
}
