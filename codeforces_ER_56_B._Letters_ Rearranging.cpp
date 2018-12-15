
#include<bits/stdc++.h>

using namespace std;

int  main()
{
    int t,check = 0;
    string s,revstr;

    cin >> t;

    while(t--)
    {
        check = 0;
        cin >> s;

        sort(s.begin(), s.end());
       // cout << s << endl;

        revstr = s;
        reverse(s.begin(), s.end());

       // cout << s << endl;



        if(revstr == s)
            cout << "-1" << endl;
        else
            cout << s << endl;


    }


    return 0;
}
