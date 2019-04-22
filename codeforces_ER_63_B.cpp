
#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;

    string s;

    cin >> n;
    cin >> s;

    int y[n+1];

    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == '8')
        {
            cnt++;
        }
    }

    int m = n - 11;

    int cmp = m / 2;

   // cout << "m " << m << endl;

    int c = 0, k = 0, check = 0 , i;

     for(i = 0; i < n; i++)
     {
        if(s[i] != '8' )
        {
           c++;
           s[i] = 'a';
          // cout << "c " << c << endl;
        }

        if(c==cmp)
          break;

     }

     for(i = 0; i < n; i++)
     {
        if(s[i] == '8' )
        {
           k++;
           s[i] = 'a';
          // cout << "c " << c << endl;
        }

        if(k == cmp)
          break;

     }

     for(int i = 0; i < n; i++)
     {
        if(s[i] != 'a')
        {
          // cout << s[i] <<  endl;
            if(s[i] == '8')
              check = 1;
              break;
        }
     }

     if(check && cnt > cmp)
     {
        cout << "YES" << endl;
     }

     else
        cout << "NO" << endl;

    // cout << "i " << check << endl;
    // cout << s[i] << endl;

   /*  if(s[m] != '8' || cnt < cmp)
     {
        cout << "NO" << endl;
     }

    else
    {
        cout << "YES" << endl;
    }

*/


    return 0;

}
