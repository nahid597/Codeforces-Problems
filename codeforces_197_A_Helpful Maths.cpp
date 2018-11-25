#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin >> s;

    int sz = s.size();

    int x[sz+2], k = 0;

    for(int i = 0; i < sz; i++)
    {
        if(s[i] >= 49 && s[i] <= 51)
           x[k++] = s[i] - 48;
    }

    sort(x, x + k);

    bool c = false;



    for(int i = 0; i < k; i++)
    {
        if(c)
        {
            cout << "+";

        }
        c = true;

        //if(i < k)
          cout << x[i];
    }




    return 0;
}
