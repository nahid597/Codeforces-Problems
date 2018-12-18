
#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t, n , k;

    cin >> t;

    while(t--)
    {
        string s = "";
        int st;
       cin >> n >> k;

       int p = n / k;

      int q = n % k;

        for(int i = 0; i< k; i++)
        {
            for(int j = 1; j <= p; j++ )
            {
                s += char(i+97);

            }

            if(q --> 0) s += char(i+97);

        }

            cout << s << endl;

    }


    return 0;
}
