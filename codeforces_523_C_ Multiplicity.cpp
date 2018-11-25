
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,c = 0 , k;
    long long mod = 1000000007;

    cin >> n;

    int x[n+1];

    for(int i = 1; i<= n; i++)
    {
        cin >> x[i];
    }

    for(int i = 1; i<= n; i++)
    {
        for(int k = 2; k <= n; k++)
        {
            for(int j = i + 1 ; j<= n; j++)
            {
                if(x[j] % k == 0)
                {
                     c++;
                }

            }

        }

    }

   // cout << c << endl;
    c = c + n;

    cout << c % mod << endl;



    return 0;
}
