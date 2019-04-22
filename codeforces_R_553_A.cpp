#include <bits/stdc++.h>
using namespace std;


int main()
{

    int n;

     cin>>n;
        char s[n+1];

        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        //cin>>s;

        int str[] = {'A', 'C', 'T', 'G'};

        for(int i  = 0; i < 4; i++)
        {
            //cout << str[i] << endl;
        }

        int ans = INT_MAX , store , sum = 0;

        for(int i = 3; i < n; i++)
        {
            sum = 0;
            for(int j=3; j>=0; j--)
            {
                 store = abs(str[j]-s[i-3+j]);
                 sum += min(store, 26-store);
            }
            ans = min(ans, sum);
        }

        cout<<ans<<endl;

    return 0;
}

