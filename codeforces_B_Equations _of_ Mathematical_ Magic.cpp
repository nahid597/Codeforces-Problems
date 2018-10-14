#include<bits/stdc++.h>
using namespace std;

int check(int n);

int main()
{

    int a , b = 0,t,ans;
    cin >> t;
    while(t--)
    {
        ans = 0;
        cin >> a;

        int tmp = a;
        int digit=0,sum=0;

        while(tmp)
        {
            digit++;
            tmp = tmp/2;
        }

        //cout << digit << endl;

        for(int i = 0; i<= digit; i++)
        {
            if(a & ( 1 << i))
            sum++;
        }

        cout << ( 1 << sum )<< endl;



    }


    return 0;
}
