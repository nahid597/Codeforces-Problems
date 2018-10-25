#include<bits/stdc++.h>
using namespace std;

int a[500000];

int main()
{

    int n,p=1,check = 0,c=0,store = 0,k= 1;
    cin >> n;
    int x[n+2],y[n+2],b[n+5];

    for(int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }

    for(int i = 1; i <= n; i++)
    {
        cin >> y[i];
    }


    for(int i = 1; i <= n; i++)
    {
        for(int j = p; j <= n; j++)
        {
            if(y[i] == x[j])
            {
               a[i] = j - store;
               p = j + 1;
               store = j;
               break;
            }

        }

    }

    for(int i = 1; i <= n; i++)
    {
        if(i != 1)
            cout << " ";
        cout << a[i];
    }


    return 0;
}
