
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, s, ans;

    cin >> n >> s;

    ans = s / n;

    if(s % n != 0)
        ans += 1;

    cout << ans << endl;



}
