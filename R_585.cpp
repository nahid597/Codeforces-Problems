#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long t, n, x, y, u, r, d, l, mn1, mn2, mx1, mx2;

    cin >> t;

    while(t--)
    {
        mx1 = 100000;
        mx2 = 100000;
        mn1 =  -100000;
        mn2 = -100000;

        //int f = 1;

        cin >> n;

        for(int i = 0; i < n; i++)
        {
            cin >> x >> y;
            cin >> u >> r >> d >> l;

            if(!d)
                mx1 = min(mx1, x);

            if(!r)
                mx2 = min(mx2, y);

            if(!l)
                mn2 = max(mn2, y);

             if(!u)
                mn1 = max(mn1, x);

        }

        //cout << mn1 << " " << mn2 << endl;
        //cout << mx1 << " " << mx2 << endl;
        if(mn1 > mx1 || mn2 > mx2)
            cout << 0 << endl;
        else
            cout << "1 " << mn1 << " " << mn2 << endl;
    }

    return 0;
}
