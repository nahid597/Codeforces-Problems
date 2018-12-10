#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,flag = false;
    cin >> n;

    for(int i = 1; i<= n; i++)
    {
        for(int j = 1; j<= n; j++)
        {
            if(i % j == 0)
            {
                if(i * j > n)
                {
                    if(i / j < n )
                    {
                        a= i;
                        b = j;
                        flag = true;
                        break;
                    }
                }
            }
        }

        if(flag) break;
    }

    if(flag)
    {
        cout << a << " " << b << endl;
    }
    else
        cout << "-1"<< endl;




    return 0;
}
