#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n;
    cin >> t;

    while(t--)
    {
        long long k;
        cin >>n >>k;

        long long store[n];

        for(int i=0; i<n; i++){
            cin >> store[i];
        }

        sort(store, store+n);

        int ch = 0;
        long long mx = 0, sum = 0;

        sum = store[0] + k;

        for(int i = 0; i < n; i++)
        {
            int c = abs(sum - store[i]);

            if(c <= k)
            {
                ch = 1;
            }
            else
              ch = 0;
        }

        if(ch)
          cout << sum << endl;
        else
           cout << "-1" << endl;


    }

    return 0;
}

