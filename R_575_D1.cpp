#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n , k;

    string s = "RGB";

    cin >> t;

    while(t--)
    {

      string str;

      cin >> n >> k;

      cin >> str;

      //cout << str << endl;

      int p = 0 , c = 0 , ans = INT_MAX;


      for(int h = 0; h < 3; h++)
      {

          for(int i = 0; i < n - k + 1; i++)
          {
             if(str[i] == 'R')
             {
               // cout << "R" << endl;
                p = -1;
             }
            else if(str[i] == 'G')
             {
               //cout << "G" << endl;
               p = 0;
             }
             else
             {
               // cout << "B" << endl;
               p = 1;
             }
             c = 0;

             int st = 0;

            // cout << p << endl;
             for(int j = 0; j < k; j++)
             {

                if(str[j+i] != s[(j+i+h) % 3] )
                {
                   c++;
                }
             }

             ans = min(ans, c);
          }

      }



      cout << ans << endl;



    }
  return 0;
}
