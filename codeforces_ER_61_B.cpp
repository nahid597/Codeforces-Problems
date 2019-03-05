
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n , m;

    cin >> n ;

    int a[n+1];

     long long sum = 0 , p;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    cin >> m ;

    int q[m + 1];

    for(int i = 0; i < m; i++)
    {
        cin >> q[i];
    }

    sort(a , a + n);


    p = sum;
    //int p = a[n - 1];

    for(int i = 0; i < m; i++)
    {

       sum = sum - a[n-q[i]];

       cout << sum << endl;

       sum = p;

    }



    return 0;
}
