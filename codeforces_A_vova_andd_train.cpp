#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long L, v , l , r , c , s , j,i;
    int t;

    cin >> t;

    while(t--)
    {
        c = 0;
        cin >> L >> v >> l >> r;

        s = L / v;

        i = r/v - l/ v;

        if(l % v == 0)
            i++;

        cout << s - i << endl;



    }


    return 0;
}
