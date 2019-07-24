#include <bits/stdc++.h>
using namespace std;


bool binarysearch(long long mid, long long k, long long n, long long l, long long r)
{
    k-=mid*l;
    n-=mid;

    if(k<=0) return false;

    long long num = k/r;
    if(k%r==0)
        num--;

    if(num<n)
        return false;

    return true;
}

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        long long k, n, l, r, ans, lo , hi;

        cin >> k >> n >> l >> r;

         lo =0, hi= n;

        while(lo<=hi)
        {
            long long mid = (lo+hi)/2;

            if(binarysearch(mid, k, n, l, r))
                lo = mid+1;
            else
                hi=mid-1;
        }

         ans = lo-1;

        if(binarysearch(ans, k, n, l, r))
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}
