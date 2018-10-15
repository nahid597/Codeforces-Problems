
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n , d , Max = 0;
    cin >> n >> d;
    int s[n+5],p[n+5];

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> p[i];

    }
    s[d-1] = s[d - 1] + p[0];

    int st = s[d-1] ;

   // sort(s , s + n , greater<int>());

    int r = n-1,ans = 0;

    for(int i = 0; i < n; i++)
    {

        if(i != d- 1)
        {
            if(s[i]+p[r] <= st)
                r--;
            else
            ans++;
        }

    }

    cout << ans + 1 << endl;


    return 0;
}
