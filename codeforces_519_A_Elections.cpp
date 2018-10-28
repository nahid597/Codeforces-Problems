#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,mx=0;

    cin >> n;

    int x[n+5],sum = 0 , sum2 = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];

        sum += x[i];
    }

    int p = sum;

    p = p / 2;

    for(int i = 0; i < n; i++)
    {

       if(mx < x[i])
       {
           mx = x[i];
       }

    }

     int i;
    for(i = mx; ; i++){
        int tmp = 0;
        for(int j = 0; j < n; j++){
            cout << tmp << endl;
            tmp += i-x[j];
        }
        if(tmp>sum)
            break;
    }
    cout << i << endl;






    return 0;
}
