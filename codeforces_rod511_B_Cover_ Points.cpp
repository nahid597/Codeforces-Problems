#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,sum= 0, mx = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        sum = 0;
        cin >> a >>b;

        sum = a + b;

        if(mx < sum)
            mx = sum;
    }

    cout << mx << endl;






    return 0;
}
