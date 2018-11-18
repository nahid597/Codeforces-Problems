#include<bits/stdc++.h>
using namespace std;

int main()
{

    int k,sz,d;
    string s,s1,s2,p1,p2;

    cin >> s;
    cin >> k;

    sz = s.size();

    d = sz/k;
    int dt = d;
    if(sz%k != 0)
        dt = dt+1;

    for(int i = 0; i < dt; i++)
    {
       // cout << s[i];
        s1 += s[i];
    }

    //cout << s1 << endl;

   // cout << endl;

    for(int i = d; i < sz; i++)
    {
        //cout << s[i];
        s2 += s[i];
    }

    //cout << s2 << endl;

    for(int i = dt-1; i >= 0; i--)
    {
       // cout << s[i];
        p1 += s[i];
    }

    for(int i = sz-1; i >= d; i--)
    {
       // cout << s[i];
        p2 += s[i];
    }

    if(s1 == p1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    return 0;
}
