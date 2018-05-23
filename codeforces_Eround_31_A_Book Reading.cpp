#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n , t, sum = 0 , c = 0;
    cin >> n >> t;

    int x[n +2];

    for(int i = 0; i< n; i++)
    {
        cin >> x[i];
    }

    for(int i = 0; i< n; i++)
    {
        c++;
        sum += 86400 - x[i];

        if(sum >= t)
            break;
    }

    cout << c;



    return 0;
}
