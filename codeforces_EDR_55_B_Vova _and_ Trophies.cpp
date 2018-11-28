#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0,mx = 0,st = 0,check = 0,p=0;
    cin >> n;

    char ch[n+3];

    for(int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }
   // ch[n++] = ''

    for(int i = 0; i < n ; i++)
    {
        if(ch[i] == 'G')
        {
            c++;
            mx = max(mx, c);

        }
        else
        {
            p++;
            c = 0;
            st = i;
        }
    }

    //cout << mx << endl;
   //cout << st << endl;

   //if(st != 0)
   //{

    if(p <= 23)
    {
        c = mx;
    }

    else
    {
        for(int i = n-1; i >= st ; i--)
        {
            if(ch[i] == 'G')
            {
                swap(ch[i],ch[(st-mx)-1]);
                break;
            }
        }

             c = 0;
         for(int i = 0; i < n ; i++)
        {
            if(ch[i] == 'G')
            {
                c++;
                check = 1;

            }
            else
                break;

        }
    }


  // }


    //if(check)
        cout << c << endl;
   // else
    // cout << c - 1 << endl;


    return 0;
}
