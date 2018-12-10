
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,result = INT_MAX, sum = 0;

    cin >> n;

    int x[n+2];

    for(int i = 1; i<= n; i++)
    {
        cin >> x[i];
    }

    for(int i = 1; i<= n; i++)
    {
        sum = 0;
        for(int j = 1; j<= n; j++)
        {
            sum += x[j]*(abs(i-j)+i+j-2)*2;
        }
        result = min(result, sum);
    }

    cout << result << endl;


    return 0;
}
