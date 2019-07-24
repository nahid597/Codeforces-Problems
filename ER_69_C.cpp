#include <bits/stdc++.h>

using namespace std;


bool cmp(const pair<long long, long long> a, const pair<long long, long long> b)
{
    return a.second > b.second;
}

int main()
{
    long long n, k;

    cin >> n >> k;

    vector<long long> vec(n+1);

    for(long long i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    vector<pair<long long, long long>> high;

    for(long long i = 0; i < n-1; i++)
    {
        high.push_back({i, vec[i+1]-vec[i]});
    }

    sort(high.begin(), high.end(), cmp);

    bool f[n+1];

    memset(f, false, sizeof(f));

    for(int i = 0; i < k-1; i++)
    {
        f[high[i].first] = true;
    }

    long long prevec = 0;
    long long ans = 0;

    for(int i = 0; i < n; i++)
    {
       // cout << i << endl;
        if(f[i])
        {
            //cout << i << endl;
            ans += vec[i] - vec[prevec];
            //cout << ans << endl;
            prevec = i+1;
        }
    }
    ans += vec[n-1] - vec[prevec];

    cout << ans << endl;

    return 0;
}
