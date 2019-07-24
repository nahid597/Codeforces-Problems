#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t;

   cin >> t;

   while(t--)
   {
       int n, k;

       cin >> n >> k;

       int x[n+2];

       for(int i = 0; i < n; i++)
       {
          cin >> x[i];
       }

        int sum = 0;

        vector<int>vec;

       for(int i = 0; i < n; i++)
       {
          sum += x[i];
          if(k != 1 || i == n - 1)
          {
             if(sum % 2 != 0)
             {
                //cout << sum << endl;
                vec.push_back(i+1);
                //i++;
                sum = 0;
                k--;
             }

          }
       }

       if(k == 0)
       {
          cout << "YES"<< endl;
          for(auto i : vec)
            cout << i << " ";
           cout << endl;
       }
       else
         cout << "NO" << endl;

      vec.clear();

   }


    return 0;
}
