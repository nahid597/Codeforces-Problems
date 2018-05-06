#include<bits/stdc++.h>

using namespace std;

int main()
{
    char c[200];
    int n,k = 0,co = 0,ma = 0;
    string s = "";
    string s1 = "";
    string sa[200] = {};

    scanf("%d",&n);
    getchar();

    for(int i = 0; i< n; i++)
    {
        cin >> c[i];
    }


    for(int i = 0; i< n; i++)
    {
        for(int j = i; j <= i+1; j++ )
        {
           s += c[j];

        }

        sa[k] =  s;
        k++;

        s = "";
    }

    for(int i = 0; i < k -1; i++)
    {
        co = 1;
        for(int j = i + 1; j< k - 1; j++ )
        {
            if(sa[i] == sa[j])
                co++;
        }

        if(ma < co)
        {
           ma = co;
           s1 = sa[i];
        }

    }

    cout << s1 << endl;



    return 0;
}
