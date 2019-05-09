#include <bits/stdc++.h>
using namespace std;


int main(){

    int n, m , ans = 0;

    cin >> n >> m;

    if(m == 0)
    {
        ans = 1;
    }
    else
    {
        int p = n - m;
        ans = min(m, p );

    }

    cout << ans << endl;

    return 0;
}

