#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    string ch1 = "AB";
    string ch2 = "BA";
    int c1 = 0,c2 =0,f = 0;


    cin >> s;

    int sz = s.size();
   // cout << sz << endl;

    for(int i = 0; i < sz; i++)
    {
        if((s[i] == 'A' && s[i+1] == 'B'))
        {
            for(int j = i + 2 ; j < sz; j++)
            {
                 if( (s[j] == 'B' && s[j+1] == 'A')  )
                 {
                     f = 1;
                     break;
                 }
            }
            break;
        }
    }

    for(int i = 0; i < sz; i++)
    {
        if((s[i] == 'B' && s[i+1] == 'A'))
        {
            for(int j = i + 2 ; j < sz; j++)
            {
                 if( (s[j] == 'A' && s[j+1] == 'B')  )
                 {
                     f = 1;
                     break;
                 }
            }
            break;
        }
    }

    if(f==1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;



    return 0;
}
