#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h, m, a, b, c;
    long long ans = 0;

    cin >> n >> h >> m;

    int x[n+1];

    for(int i = 1; i <= n; i++)
    {
        x[i] = h;
    }

    while(m--)
    {
        cin >> a >> b >> c;

        for(int i = a; i <= b; i++)
        {
            x[i] = min(x[i], c);
        }

    }
    for(int i = 1; i <= n; i++)
    {
        ans += x[i] * x[i];
    }

    cout << ans << endl;


    return 0;
}
