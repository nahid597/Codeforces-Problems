#include<bits/stdc++.h>

using namespace std;

int gdc(int a, int b)
{

    if(a%b == 0)
        return b;

       return gdc(b,a%b);
}



int main()
{

    int n,store,pstore , c = 0;
    cin >> n;
    int x[n+2],mx=0;

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    pstore = gdc(x[0], x[1]);

    store = pstore;

    for(int i = 2; i < n; i++)
    {
       store = gdc(store,x[i]);
    }

    cout << store << endl;

    for(int i = 0; i < n; i++)
    {
        if(x[i]/store <= store )
        {
            c++;
        }
    }


    if(c == n)
        cout << "-1" << endl;
    else
    cout << c << endl;








    return 0;
}
