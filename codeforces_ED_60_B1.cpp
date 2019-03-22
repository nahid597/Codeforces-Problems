
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
     int n;
    string str;
    cin >> t;

    for(int i = 0; i < t; i++)
    {

        cin >> n;
        cin >> str;

        int c1=0, c2=0;


        for(int i=n-1; i>=0; i--)
        {
            c2++;
            if(str[i]=='<')
                break;
        }

        for(int i=0; i<n; i++)
        {
             c1++;
            if(str[i]=='>')
                break;
        }

        cout << "> " <<c1 << "< " << c2 << endl;

        int p =  min(c1, c2);
        cout << p-1 <<endl;;
    }

    return 0;
}
