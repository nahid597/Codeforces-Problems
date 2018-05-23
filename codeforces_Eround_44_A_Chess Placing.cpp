#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,s1 = 0,s2 = 0;
    cin >> n;
    int x[n/2 + 1];

    for(int i = 0; i< n /2 ; i++)
    {

        cin >> x[i];
    }

    sort(x,x+n/2);

    for(int i = 0; i< n /2 ; i++)
    {
        s1 += abs(x[i] - (i * 2 +1));
        s2 += abs(x[i] - (i * 2 + 2));

    }

    int sum = min(s1,s2);

    cout << sum << endl;


    return 0;
}
