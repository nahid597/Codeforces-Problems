#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s, t;

    cin >> s >> t;

    int sz1, sz2;

    sz1 = s.size();
    sz2 = t.size();

    int mx = max(sz1, sz2);

    if( sz1 != sz2)
    {
        cout << "No" << endl;
        return 0;
    }

    int c = 0,p = 0;
    for(int i = 0; i < mx; i++)
    {
      p = 0;
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u')
        {
       // cout << "nahidUUU" << endl;
            if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' ||t[i] == 'u')
            {
                c = 1;
                p = 1;
                // cout << "nahid1" << endl;
               // break;

            }
            //else
            // c = 0;
        }

       if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
        //  cout << s[i] << endl;
            if(t[i] != 'a' && t[i] != 'e' && t[i] != 'i' && t[i] != 'o' && t[i] != 'u')
            {
                c = 1;
                p = 1;
              //  cout << "nahid3" << t[i] << endl;
              //  break;

            }

        }

        if(!p)
        {
            c = 0;
           // cout << "nahid4" << t[i] << endl;
             break;
          }
    }

    if(c) cout << "Yes" << endl;
    else  cout << "No" << endl;

    return 0;
}
