#include <bits/stdc++.h>

using namespace std;


int Pair[100005];

long long MOD = 1000000007;

long long check ( long long a, int p, int m )
{

    long long tmp;

    if ( p == 0 ) {
        return 1;
    }

    if ( p & 1 )
    {
        return ( ( a % m ) * ( check ( a, p - 1, m ) ) ) % m;
    }
    else
    {
        tmp = check ( a, p / 2, m );
        return ( tmp * tmp ) % m;
    }
}

int found(int a)
{
    if(Pair[a] == a)
        return a;
    return Pair[a] = found(Pair[a]);
}


int main(){

    long long n, k, a, b, c, x ,y, ans = 0 , sum = 0;

    cin >> n >> k;

    for(int i = 0; i <= n; i++)
    {
        Pair[i] = i;
    }


    for(int i = 1; i < n; i++)
    {

        cin >> a >> b >> c;

        if(!c)
        {
             x = found(a);
             y = found(b);
            if(x != y)
                Pair[x] = y;
        }
    }

    map < long long, long long > mp;

    for(int i = 1; i <= n; i++)
    {
        found(i);
    }

    for(int i = 1; i <= n; i++)
    {
        mp[Pair[i]]++;
    }

     ans = check(n, k, MOD);
     sum = 0;
    for(auto i: mp)
    {
        sum = (sum + check(i.second, k, MOD))%MOD;
    }

    ans = (MOD + ans - sum)%MOD;

    cout << ans << endl;

    return 0;
}
