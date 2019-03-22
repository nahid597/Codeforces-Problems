
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int x[n+1];

    for(int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }

    int c = 0 , mx = 0;
    for(int i = 1; i <= n; i++)
    {
      // cout << x[i] << i << endl;
       mx = max(x[i] , mx);
        if(mx == i)
          c++;
    }

    cout << c << endl;




    return 0;
}
