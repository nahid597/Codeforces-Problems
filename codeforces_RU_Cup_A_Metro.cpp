
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,s,check = 0;

    cin >> n >> s;

    int a[n+5],s1[n+5];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

    }

    for(int i = 0; i < n; i++)
    {
        cin >> s1[i];

    }

    if(a[0] == 0)
    {
        cout << "NO" << endl;
        return 0;
    }


    else
    {
        if(a[s-1] == 1)
        {
                check = 1;
        }

        else {
            for(int i = s; i < n; i++)
            {
                if(a[i] == 1 && s1[i]==1)
                {
                    if(s1[s-1]==1)
                    {
                        check = 1;
                        break;
                    }
                }

            }
        }



    }

    if(check == 1)
        cout << "YES" << endl;
    else
    cout << "NO" << endl;



    return 0;
}
