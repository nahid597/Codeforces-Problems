#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,x[105],Max = 0,c = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for(int i = 0; i < n; i++)
    {
        c = 0;
        for(int j = i; j < n; j++)
        {
            if(x[i] == x[j])
                c++;
        }

        if(Max  < c)
            Max = c;
    }

    cout << Max << endl;


    return 0;
}

