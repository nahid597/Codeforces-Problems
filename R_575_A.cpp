#include<bits/stdc++.h>

using namespace std;

int main()
{

   long long a, b, c , ans = 0, sum = 0;
   int t;

   cin >> t;

   while(t--)
   {
        cin >> a >> b >> c;

       sum = a +b + c;

       ans = sum / 2;

       cout << ans  << endl;

   }


  return 0;
}
