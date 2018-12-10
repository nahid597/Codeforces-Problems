
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin >> s;

    map < char , long long > mp;

    long long sz = s. size(), ans,mod = 1000000007;

    for(long long i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    long long mx = 0;
    char ch;

    for(auto i = mp.cbegin(); i != mp.cend(); i++)
    {
        if(mx < i -> second)
        {
            mx = i -> second;
            ch = i -> first;

        }
       // cout << i->second << endl;
    }

    long long store = sz - mx;

    if(mx - store == 1)
    {
        ans = mx + store;
    }

    else
        ans = mx;

    cout << ans % mod << endl;
    //cout << mx << endl;


    return 0;
}
