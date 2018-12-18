#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0;

    cin >> n;

    int x[n+2];

    for(int i = 0; i <  n; i++)
    {
        cin >> x[i];
    }

    sort(x, x + n);


    for(int i = 0; i < n ; i += 2)
    {

        sum += x[i+1] - x[i];

    }

    cout << sum << endl;



    return 0;
}

