// output:
//   *  *  *  *  *
//   *  *  *  *  *
//   *  *  *  *  *
//   *  *  *  *  *
//   *  *  *  *  *

#include <iostream>

using namespace std;

int main()
{
   int n, i = 1;
   cout << "enter the length of the star in star units: ";
   cin >> n;
   while (i <= n)
   {
      int j = 1;
      while (j <= n)
      {
         cout << " * ";
         j++;
      }
      cout << endl;
      i++;
   }
   return 0;
}

/* One Note
one might thought that
We can initialize int j in the beginning rather than in the loop.
But by doing that we will get an error. What is it you ask?

The first iteration of outer loop,
The inner loop will iterate fully means value of i becomes greater
than n in the inner loop.
Now  j++ wil happen. But when The outer loop runs for the second time
The inner loop won't run because i is now greater than n
So inner loop will skip every time after the first time.
So the above code is used.*/