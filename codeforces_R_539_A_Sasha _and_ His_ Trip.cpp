#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n, v, sum = 0,p = 0;

    cin >> n >> v;

    if(n <= v)
    {
        p = n - 1;

        sum = n - 1;
    }
    else
    {
        p = v;
        sum = v;
    }



    for(int i = 2; i < n; i++)
    {
        p++;

        if(p <= n-1)
        {
            sum += i;
        }

    }

    cout << sum << endl;



    return 0;
}
