#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;

    long long sum = 0,div, mul, total = 0,Min = INT_MAX;

    cin >> n;

    int a[n+2];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        sum += a[i];

    }

    long long store = sum;

    sort(a, a + n);


    for(int i = 1; i <= 100; i++)
    {
        sum = store;
        total = 0;
        for(int j = n; j >= 1; j--)
        {
            if(a[j-1] % i == 0)
            {
                div = a[j-1] / i;

                mul = a[0] * i;

                sum = sum - a[j-1] - a[0];

                break;

            }

           // cout << sum << endl;

        }



        total = sum + mul + div;

        Min = min(Min, total);

    }

    cout << Min << endl;


    return 0;
}
