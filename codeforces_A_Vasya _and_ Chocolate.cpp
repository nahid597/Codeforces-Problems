
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s,a,b,c , r1,r2,sum , r3;

    int t;

    cin >> t;

    while(t--)
    {
        sum = 0;
       cin >> s >> a >> b >> c;

        s = s / c;

        r1 = s / a;
        r2 = s % a;

        b = b * r1;

        r3 = r1 * a;

        sum = r3 + r2 + b;

        cout << sum << endl;


    }


    return 0;
}
