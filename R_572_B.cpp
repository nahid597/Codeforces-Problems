#include<bits/stdc++.h>

using namespace std;

int main()
{

   int n;

   while(cin >> n)
   {
      int x[n+1];

      for(int i = 0; i < n; i++)
      {
         cin >> x[i];
      }

      sort(x, x + n , greater<int>());

      int ch = 1;

      if(x[0] >= x[1] + x[2])
      {
         ch = 0;
      }

      swap(x[0], x[1]);

    if(ch)
   {
     cout << "YES" <<  endl;

     for(int i = 0; i < n; i++)
     {
        cout << x[i] << " ";
     }
     cout << endl;
   }

   else
     cout << "NO"<<endl;
   }





   return 0;
}
