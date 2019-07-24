#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t, n, p;
    cin >> t;

    while(t--)
    {
        cin >> n >> p;

        vector<long long> vec(n+2);

        for(int i = 1; i <= n; i++)
        {
            cin >> vec[i];
        }

        long long s = 0;

        vector<long long> ans;

        for(int i = 1; i <= n; i++)
        {
            s = s + vec[i];
            if(s % 2 && p > 1)
            {
                ans.push_back(i);
                s = 0;
                p--;
            }
        }

        if(p == 1 && s % 2)
        {
            cout << "YES" << endl;
            for(auto a: ans)
                cout << a << " ";
            cout << n << endl;
            continue;
        }

        cout << "NO" << endl;
    }
    return 0;
}
