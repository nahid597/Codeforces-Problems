#include<bits/stdc++.h>
using namespace std;

map < string , int > mp , mq;

int main()
{
    string n[1005];
    int s[1005], t,mx = 0;

    cin >> t;

    getchar();

    for(int i = 0; i < t; i++)
    {
       cin >> n[i] >> s[i];

        mp[n[i]] += s[i];

    }


    for(int i = 0; i < t; i++)
    {

       if(mx < mp[n[i]])
         mx = mp[n[i]];

    }

   // cout << mx << endl;

        for(int i = 0; i < t; i++)
        {

            mq[n[i]] += s[i];

            if(mq[n[i]] >= mx & mp[n[i]] == mx)
            {
                cout << n[i] << endl;
                break;
            }


        }



    return 0;
}
