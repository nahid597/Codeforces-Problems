#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n , m , r ;

    cin >> n >> m >> r ;

    int s[n+1] , b[m+1];

    int mins = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];

        mins = min(mins, s[i]);
    }

    int mxb = INT_MIN;
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];

        mxb = max(mxb, b[i]);
    }

    int check = 0 , c = 0 , st = 0;

    while(check < r)
    {
        c++;

        check += mins;

    }

    st = r % mins;

    //cout << st  << c << endl;

    c = c - 1;

    int sell =  (mxb * c ) + st;

    int ans = max(sell, r);
    cout << ans << endl;



    return  0;
}
