
#include<bits/stdc++.h>

using namespace std;

int main()
{

  long long n , m, p, c = 0;

  cin >> n >> m;

   if(m % n == 0)
   {
     p = m / n;

     while(p % 2 == 0)
     {
       p = p / 2;
        c++;
     }

     while(p % 3 == 0)
     {
         p = p / 3;
        c++;
     }

     if(p != 1)
       c = -1;

   }

   else
      c = -1;

      cout << c << endl;

  return 0;
}
