
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,sum = 0 , k = 0;
     int x[200001],y[200001],p[200001];

    cin >> n;


    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
        y[i] = x[i];
        sum += x[i];
    }

    sort(x,x+n);


    for(int i =  0; i < n; i++)
    {

        if(y[i] == x[n-1])
        {

            if(sum - y[i] == 2*x[n-2])
                p[k++] = i + 1;
        }

        else
        {
            if(sum - y[i] == 2 * x[n-1])
                p[k++] = i + 1;
        }
    }

    cout << k << endl;
    for(int i = 0; i < k; i++)
    {
        cout << p[i] << " ";
    }




    return 0;
}
